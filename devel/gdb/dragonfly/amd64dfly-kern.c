/*
 * Copyright (c) 2004 Marcel Moolenaar
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * DragonFly/amd64 kernel support, derived from FreeBSD's amd64fbsd-kern.c.
 * This is only built natively, so the pcb and trapframe layouts are
 * taken from the host's <machine/pcb.h> and <machine/frame.h>.
 */

#include "defs.h"
#include "extract-store-integer.h"
#include "frame-unwind.h"
#include "gdbcore.h"
#include "osabi.h"
#include "regcache.h"
#include "solib.h"
#include "stack.h"
#include "symtab.h"
#include "trad-frame.h"
#include "amd64-tdep.h"
#include "gdbsupport/x86-xstate.h"

#include <sys/types.h>
#include <stddef.h>
#include <machine/pcb.h>
#include <machine/frame.h>
#include <machine/segments.h>

#include "dfly-kgdb.h"

extern solib_ops kld_so_ops;

#define	KCSEL		GSEL(GCODE_SEL, SEL_KPL)
#define	KDSEL		GSEL(GDATA_SEL, SEL_KPL)
#define	UCSEL		GSEL(GUCODE_SEL, SEL_UPL)
#define	UCSEL32		GSEL(GUCODE32_SEL, SEL_UPL)

static void
supply_value(struct regcache *regcache, int regnum, ULONGEST val)
{
  struct gdbarch *gdbarch = regcache->arch ();
  gdb_byte buf[8];

  store_unsigned_integer (buf, register_size (gdbarch, regnum),
			  gdbarch_byte_order (gdbarch), val);
  regcache->raw_supply (regnum, buf);
}

static const int amd64dfly_pcb_offset[] = {
  -1,					/* %rax */
  offsetof (struct pcb, pcb_rbx),	/* %rbx */
  -1,					/* %rcx */
  -1,					/* %rdx */
  -1,					/* %rsi */
  -1,					/* %rdi */
  offsetof (struct pcb, pcb_rbp),	/* %rbp */
  -1,					/* %rsp, adjusted below */
  -1,					/* %r8 ...  */
  -1,
  -1,
  -1,
  offsetof (struct pcb, pcb_r12),
  offsetof (struct pcb, pcb_r13),
  offsetof (struct pcb, pcb_r14),
  offsetof (struct pcb, pcb_r15),	/* ... %r15 */
  offsetof (struct pcb, pcb_rip),	/* %rip */
};

/*
 * Supply registers from a pcb filled by savectx(): dumppcb, or
 * stoppcbs[] for a CPU stopped by Xcpustop.  savectx() saves the
 * caller's return address as pcb_rip and %rsp as it was before
 * returning, so add 8 to get the state just after it returned.
 */
static void
amd64dfly_supply_pcb(struct regcache *regcache, CORE_ADDR pcb_addr)
{
  enum bfd_endian byte_order = gdbarch_byte_order (regcache->arch ());
  gdb_byte buf[8];
  int i;

  /*
   * Supply a dummy %rip first so that an unreadable pcb does not
   * trigger an exception during stack unwinding.
   */
  supply_value (regcache, AMD64_RIP_REGNUM, 0);
  for (i = 0; i < ARRAY_SIZE (amd64dfly_pcb_offset); i++)
    if (amd64dfly_pcb_offset[i] != -1) {
      if (target_read_memory(pcb_addr + amd64dfly_pcb_offset[i], buf,
			     sizeof buf) != 0)
	continue;
      regcache->raw_supply(i, buf);
    }
  if (target_read_memory(pcb_addr + offsetof (struct pcb, pcb_rsp), buf,
			 sizeof buf) == 0)
    supply_value (regcache, AMD64_RSP_REGNUM,
		  extract_unsigned_integer (buf, 8, byte_order) + 8);

  supply_value (regcache, AMD64_CS_REGNUM, KCSEL);
  supply_value (regcache, AMD64_SS_REGNUM, KDSEL);
}

/*
 * Supply registers of a switched-out thread.  The word at td_sp is the
 * restore function the next switch to the thread jumps to, and tells
 * where the rest of the state is:
 *
 * cpu_lwkt_restore: cpu_lwkt_switch() pushed %rbp, %rbx, %r12-%r15 and
 *	the flags before it, and its own return address is above them.
 * cpu_heavy_restore: cpu_heavy_switch() saved the registers in td_pcb
 *	the way savectx() does, and pushed only the flags.
 * cpu_kthread_restore, cpu_idle_restore: the thread has never run.
 *	cpu_kthread_restore will jump to the function in pcb_rbx with
 *	the argument in pcb_r12.
 *
 * Anything else means td_sp is stale, as for a thread running on a CPU
 * of a live system.
 */
static void
amd64dfly_supply_switchframe(struct regcache *regcache, CORE_ADDR sp,
			     CORE_ADDR pcb)
{
  enum bfd_endian byte_order = gdbarch_byte_order (regcache->arch ());
  static const int regs[] = {
    -1,				/* cpu_lwkt_restore */
    AMD64_EFLAGS_REGNUM,
    AMD64_R15_REGNUM,
    AMD64_R14_REGNUM,
    AMD64_R13_REGNUM,
    AMD64_R12_REGNUM,
    AMD64_RBX_REGNUM,
    AMD64_RBP_REGNUM,
    AMD64_RIP_REGNUM,		/* return address of cpu_lwkt_switch */
  };
  gdb_byte frame[ARRAY_SIZE (regs) * 8];
  gdb_byte buf[8];
  CORE_ADDR restore;
  int i;

  supply_value (regcache, AMD64_RIP_REGNUM, 0);
  if (sp == 0 || target_read_memory (sp, buf, sizeof buf) != 0)
    return;
  restore = extract_unsigned_integer (buf, 8, byte_order);

  if (restore != 0 && restore == kgdb_lookup ("cpu_lwkt_restore")) {
    if (target_read_memory (sp, frame, sizeof frame) != 0)
      return;
    for (i = 0; i < ARRAY_SIZE (regs); i++)
      if (regs[i] != -1)
	supply_value (regcache, regs[i],
		      extract_unsigned_integer (frame + i * 8, 8, byte_order));
    supply_value (regcache, AMD64_RSP_REGNUM, sp + sizeof frame);
  } else if (restore != 0 && restore == kgdb_lookup ("cpu_heavy_restore")) {
    if (pcb == 0)
      return;
    amd64dfly_supply_pcb (regcache, pcb);
    if (target_read_memory (sp + 8, buf, sizeof buf) == 0)
      supply_value (regcache, AMD64_EFLAGS_REGNUM,
		    extract_unsigned_integer (buf, 8, byte_order));
  } else if (restore != 0 &&
	     (restore == kgdb_lookup ("cpu_kthread_restore") ||
	      restore == kgdb_lookup ("cpu_idle_restore"))) {
    supply_value (regcache, AMD64_RIP_REGNUM, restore);
    supply_value (regcache, AMD64_RSP_REGNUM, sp + 8);
    supply_value (regcache, AMD64_RBP_REGNUM, 0);
    if (pcb != 0 && target_read_memory (pcb + offsetof (struct pcb, pcb_rbx),
					buf, sizeof buf) == 0)
      regcache->raw_supply (AMD64_RBX_REGNUM, buf);
    if (pcb != 0 && target_read_memory (pcb + offsetof (struct pcb, pcb_r12),
					buf, sizeof buf) == 0)
      regcache->raw_supply (AMD64_R12_REGNUM, buf);
  } else
    return;
  supply_value (regcache, AMD64_CS_REGNUM, KCSEL);
  supply_value (regcache, AMD64_SS_REGNUM, KDSEL);
}

static const int amd64dfly_trapframe_offset[] = {
  offsetof (struct trapframe, tf_rax),
  offsetof (struct trapframe, tf_rbx),
  offsetof (struct trapframe, tf_rcx),
  offsetof (struct trapframe, tf_rdx),
  offsetof (struct trapframe, tf_rsi),
  offsetof (struct trapframe, tf_rdi),
  offsetof (struct trapframe, tf_rbp),
  offsetof (struct trapframe, tf_rsp),
  offsetof (struct trapframe, tf_r8),
  offsetof (struct trapframe, tf_r9),
  offsetof (struct trapframe, tf_r10),
  offsetof (struct trapframe, tf_r11),
  offsetof (struct trapframe, tf_r12),
  offsetof (struct trapframe, tf_r13),
  offsetof (struct trapframe, tf_r14),
  offsetof (struct trapframe, tf_r15),
  offsetof (struct trapframe, tf_rip),
  offsetof (struct trapframe, tf_rflags),
  offsetof (struct trapframe, tf_cs),
  offsetof (struct trapframe, tf_ss),
  -1,				/* %ds */
  -1,				/* %es */
  -1,				/* %fs */
  -1				/* %gs */
};

struct amd64dfly_trapframe_cache
{
  struct trad_frame_cache *tcache;
  bool available;
  bool from_user;
};

/*
 * Check that BASE looks like a trapframe: a kernel or user code
 * selector in tf_cs and the always-set bit 1 in tf_rflags.
 */
static bool
trapframe_at(CORE_ADDR base, enum bfd_endian byte_order, ULONGEST *csp)
{
  gdb_byte buf[8];
  ULONGEST cs, rflags;

  if (target_read_memory (base + offsetof (struct trapframe, tf_cs), buf,
			  sizeof buf) != 0)
    return false;
  cs = extract_unsigned_integer (buf, 8, byte_order);
  if (target_read_memory (base + offsetof (struct trapframe, tf_rflags), buf,
			  sizeof buf) != 0)
    return false;
  rflags = extract_unsigned_integer (buf, 8, byte_order);
  if (cs != KCSEL && cs != UCSEL && cs != UCSEL32)
    return false;
  if ((rflags & 0x2) == 0)
    return false;
  *csp = cs;
  return true;
}

static struct amd64dfly_trapframe_cache *
amd64dfly_trapframe_cache (const frame_info_ptr &this_frame, void **this_cache)
{
  struct gdbarch *gdbarch = get_frame_arch (this_frame);
  enum bfd_endian byte_order = gdbarch_byte_order (gdbarch);
  struct amd64dfly_trapframe_cache *cache;
  CORE_ADDR func, sp, base;
  ULONGEST cs = KCSEL;
  int i;

  if (*this_cache != NULL)
    return ((struct amd64dfly_trapframe_cache *)*this_cache);

  cache = FRAME_OBSTACK_ZALLOC (struct amd64dfly_trapframe_cache);
  cache->tcache = trad_frame_cache_zalloc (this_frame);
  *this_cache = cache;

  func = get_frame_func (this_frame);
  try
    {
      sp = get_frame_register_unsigned (this_frame, AMD64_RSP_REGNUM);
    }
  catch (const gdb_exception_error &ex)
    {
      if (ex.error != NOT_AVAILABLE_ERROR)
	throw;
      trad_frame_set_id (cache->tcache,
			 frame_id_build_unavailable_stack (func));
      return cache;
    }
  cache->available = true;

  /*
   * The entry stubs call into C with the trapframe at %rsp, except that
   * the interrupt stubs first push one more word ("make same as
   * interrupt frame"), so the trapframe can also be at %rsp + 8.
   */
  base = sp;
  if (!trapframe_at (sp, byte_order, &cs)
      && trapframe_at (sp + 8, byte_order, &cs))
    base = sp + 8;
  cache->from_user = ISPL (cs) == SEL_UPL;

  for (i = 0; i < ARRAY_SIZE (amd64dfly_trapframe_offset); i++)
    if (amd64dfly_trapframe_offset[i] != -1)
      trad_frame_set_reg_addr (cache->tcache, i,
			       base + amd64dfly_trapframe_offset[i]);

  trad_frame_set_id (cache->tcache,
		     frame_id_build (base + sizeof (struct trapframe), func));
  return cache;
}

static void
amd64dfly_trapframe_this_id (const frame_info_ptr &this_frame,
			     void **this_cache, struct frame_id *this_id)
{
  struct amd64dfly_trapframe_cache *cache =
    amd64dfly_trapframe_cache (this_frame, this_cache);

  trad_frame_get_id (cache->tcache, this_id);
}

static struct value *
amd64dfly_trapframe_prev_register (const frame_info_ptr &this_frame,
				   void **this_cache, int regnum)
{
  struct amd64dfly_trapframe_cache *cache =
    amd64dfly_trapframe_cache (this_frame, this_cache);

  return trad_frame_get_register (cache->tcache, this_frame, regnum);
}

/* A trapframe from user mode ends the kernel backtrace.  */

static enum unwind_stop_reason
amd64dfly_trapframe_stop_reason (const frame_info_ptr &this_frame,
				 void **this_cache)
{
  struct amd64dfly_trapframe_cache *cache =
    amd64dfly_trapframe_cache (this_frame, this_cache);

  if (!cache->available)
    return UNWIND_UNAVAILABLE;
  return cache->from_user ? UNWIND_OUTERMOST : UNWIND_NO_REASON;
}

/*
 * calltrap is where alltraps calls trap(); the IDT entry points are
 * X followed by a lowercase name (Xfast_syscall, Xtimer, Xcpustop,
 * Xioapic_intr<N>...), unlike C functions such as XXH64_*.  Look the
 * name up by pc: get_frame_func needs the type of the frame, which is
 * what sniffing decides.
 */
static int
amd64dfly_trapframe_sniffer (const struct frame_unwind *self,
			     const frame_info_ptr &this_frame,
			     void **this_prologue_cache)
{
  const char *name;

  find_pc_partial_function (get_frame_pc (this_frame), &name, NULL, NULL);
  return (name && ((strcmp (name, "calltrap") == 0)
		   || (name[0] == 'X' && name[1] >= 'a' && name[1] <= 'z')));
}

static const struct frame_unwind amd64dfly_trapframe_unwind = {
  "amd64 DragonFly kernel trap",
  SIGTRAMP_FRAME,
  amd64dfly_trapframe_stop_reason,
  amd64dfly_trapframe_this_id,
  amd64dfly_trapframe_prev_register,
  NULL,
  amd64dfly_trapframe_sniffer
};

static void
amd64dfly_kernel_init_abi(struct gdbarch_info info, struct gdbarch *gdbarch)
{

	amd64_init_abi(info, gdbarch,
		       amd64_target_description (X86_XSTATE_SSE_MASK, true));

	frame_unwind_prepend_unwinder(gdbarch, &amd64dfly_trapframe_unwind);

	set_gdbarch_so_ops(gdbarch, &kld_so_ops);

	dfly_vmcore_set_supply_pcb(gdbarch, amd64dfly_supply_pcb);
	dfly_vmcore_set_supply_switchframe(gdbarch,
	    amd64dfly_supply_switchframe);
}

void _initialize_amd64dfly_kgdb_tdep ();
void
_initialize_amd64dfly_kgdb_tdep ()
{
	gdbarch_register_osabi_sniffer(bfd_arch_i386,
				       bfd_target_elf_flavour,
				       dfly_kernel_osabi_sniffer);
	gdbarch_register_osabi (bfd_arch_i386, bfd_mach_x86_64,
				GDB_OSABI_DRAGONFLY_KERNEL,
				amd64dfly_kernel_init_abi);
}
