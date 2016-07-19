/* Native-dependent code for DragonFly/amd64.

   Copyright (C) 2003-2016 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include "defs.h"
#include "inferior.h"
#include "regcache.h"
#include "target.h"
#include "gregset.h"

#include "gdb_assert.h"
#include <signal.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/procfs.h>
#include <sys/ptrace.h>
#include <sys/sysctl.h>
#include <machine/reg.h>
#include <machine/segments.h>

#include "fbsd-nat.h"
#include "amd64-tdep.h"
#include "amd64-nat.h"
#include "x86bsd-nat.h"
#include "x86-nat.h"


/* Offset in `struct reg' where MEMBER is stored.  */
#define REG_OFFSET(member) offsetof (struct reg, member)

/* At amd64dfly64_r_reg_offset[REGNUM] you'll find the offset in
   `struct reg' location where the GDB register REGNUM is stored.
   Unsupported registers are marked with `-1'.  */
static int amd64dfly64_r_reg_offset[] =
{
  REG_OFFSET (r_rax),
  REG_OFFSET (r_rbx),
  REG_OFFSET (r_rcx),
  REG_OFFSET (r_rdx),
  REG_OFFSET (r_rsi),
  REG_OFFSET (r_rdi),
  REG_OFFSET (r_rbp),
  REG_OFFSET (r_rsp),
  REG_OFFSET (r_r8),
  REG_OFFSET (r_r9),
  REG_OFFSET (r_r10),
  REG_OFFSET (r_r11),
  REG_OFFSET (r_r12),
  REG_OFFSET (r_r13),
  REG_OFFSET (r_r14),
  REG_OFFSET (r_r15),
  REG_OFFSET (r_rip),
  REG_OFFSET (r_rflags),
  REG_OFFSET (r_cs),
  REG_OFFSET (r_ss),
  -1,
  -1,
  -1,
  -1
};


/* Mapping between the general-purpose registers in DragonFly/amd64
   `struct reg' format and GDB's register cache layout for
   DragonFly/x86.

   Note that most DragonFly/amd64 registers are 64-bit, while the
   DragonFly/x86 registers are all 32-bit, but since we're
   little-endian we get away with that.  */

/* From <machine/reg.h>.  */
static int amd64dfly32_r_reg_offset[I386_NUM_GREGS] =
{
  14 * 8, 13 * 8,		/* %eax, %ecx */
  12 * 8, 11 * 8,		/* %edx, %ebx */
  20 * 8, 10 * 8,		/* %esp, %ebp */
  9 * 8, 8 * 8,			/* %esi, %edi */
  17 * 8, 19 * 8,		/* %eip, %eflags */
  18 * 8, 21 * 8,		/* %cs, %ss */
  -1, -1, -1, -1		/* %ds, %es, %fs, %gs */
};


#ifdef DFLY_PCB_SUPPLY
/* Transfering the registers between GDB, inferiors and core files.  */

/* Fill GDB's register array with the general-purpose register values
   in *GREGSETP.  */

void
supply_gregset (struct regcache *regcache, const gregset_t *gregsetp)
{
  amd64_supply_native_gregset (regcache, gregsetp, -1);
}

/* Fill register REGNUM (if it is a general-purpose register) in
   *GREGSETPS with the value in GDB's register array.  If REGNUM is -1,
   do this for all registers.  */

void
fill_gregset (const struct regcache *regcache, gdb_gregset_t *gregsetp, int regnum)
{
  amd64_collect_native_gregset (regcache, gregsetp, regnum);
}

/* Fill GDB's register array with the floating-point register values
   in *FPREGSETP.  */

void
supply_fpregset (struct regcache *regcache, const fpregset_t *fpregsetp)
{
  amd64_supply_fxsave (regcache, -1, fpregsetp);
}

/* Fill register REGNUM (if it is a floating-point register) in
   *FPREGSETP with the value in GDB's register array.  If REGNUM is -1,
   do this for all registers.  */

void
fill_fpregset (const struct regcache *regcache, gdb_fpregset_t *fpregsetp, int regnum)
{
  amd64_collect_fxsave (regcache, regnum, fpregsetp);
}

/* Support for debugging kernel virtual memory images.  */

#include <sys/types.h>
#include <machine/pcb.h>
#include <osreldate.h>

#include "bsd-kvm.h"

static int
amd64dfly_supply_pcb (struct regcache *regcache, struct pcb *pcb)
{
  /* The following is true for FreeBSD 5.2:

     The pcb contains %rip, %rbx, %rsp, %rbp, %r12, %r13, %r14, %r15,
     %ds, %es, %fs and %gs.  This accounts for all callee-saved
     registers specified by the psABI and then some.  Here %esp
     contains the stack pointer at the point just after the call to
     cpu_switch().  From this information we reconstruct the register
     state as it would like when we just returned from cpu_switch().  */

  /* The stack pointer shouldn't be zero.  */
  if (pcb->pcb_rsp == 0)
    return 0;

  pcb->pcb_rsp += 8;
  regcache_raw_supply (regcache, AMD64_RIP_REGNUM, &pcb->pcb_rip);
  regcache_raw_supply (regcache, AMD64_RBX_REGNUM, &pcb->pcb_rbx);
  regcache_raw_supply (regcache, AMD64_RSP_REGNUM, &pcb->pcb_rsp);
  regcache_raw_supply (regcache, AMD64_RBP_REGNUM, &pcb->pcb_rbp);
  regcache_raw_supply (regcache, 12, &pcb->pcb_r12);
  regcache_raw_supply (regcache, 13, &pcb->pcb_r13);
  regcache_raw_supply (regcache, 14, &pcb->pcb_r14);
  regcache_raw_supply (regcache, 15, &pcb->pcb_r15);
#if (__FreeBSD_version < 800075) && (__FreeBSD_kernel_version < 800075)
  /* struct pcb provides the pcb_ds/pcb_es/pcb_fs/pcb_gs fields only
     up until __FreeBSD_version 800074: The removal of these fields
     occurred on 2009-04-01 while the __FreeBSD_version number was
     bumped to 800075 on 2009-04-06.  So 800075 is the closest version
     number where we should not try to access these fields.  */
  regcache_raw_supply (regcache, AMD64_DS_REGNUM, &pcb->pcb_ds);
  regcache_raw_supply (regcache, AMD64_ES_REGNUM, &pcb->pcb_es);
  regcache_raw_supply (regcache, AMD64_FS_REGNUM, &pcb->pcb_fs);
  regcache_raw_supply (regcache, AMD64_GS_REGNUM, &pcb->pcb_gs);
#endif

  return 1;
}
#endif /* DFLY_PCB_SUPPLY */


/* Implement the to_read_description method.  */

static const struct target_desc *
amd64fbsd_read_description (struct target_ops *ops)
{
#ifdef PT_GETXSTATE_INFO
  static int xsave_probed;
  static uint64_t xcr0;
#endif
  struct reg regs;
  int is64;

  if (ptrace (PT_GETREGS, ptid_get_pid (inferior_ptid),
	      (PTRACE_TYPE_ARG3) &regs, 0) == -1)
    perror_with_name (_("Couldn't get registers"));
  is64 = (regs.r_cs == GSEL (GUCODE_SEL, SEL_UPL));
#ifdef PT_GETXSTATE_INFO
  if (!xsave_probed)
    {
      struct ptrace_xstate_info info;

      if (ptrace (PT_GETXSTATE_INFO, ptid_get_pid (inferior_ptid),
		  (PTRACE_TYPE_ARG3) &info, sizeof (info)) == 0)
	{
	  x86bsd_xsave_len = info.xsave_len;
	  xcr0 = info.xsave_mask;
	}
      xsave_probed = 1;
    }

  if (x86bsd_xsave_len != 0)
    {
      if (is64)
	return amd64_target_description (xcr0);
      else
	return i386_target_description (xcr0);
    }
#endif
  if (is64)
    return tdesc_amd64;
  else
    return tdesc_i386;
}

/* Provide a prototype to silence -Wmissing-prototypes.  */
void _initialize_amd64dfly_nat (void);

void
_initialize_amd64dfly_nat (void)
{
  struct target_ops *t;
  int offset;

  amd64_native_gregset32_reg_offset = amd64dfly32_r_reg_offset;
  amd64_native_gregset64_reg_offset = amd64dfly64_r_reg_offset;

  /* Add some extra features to the common *BSD/x86 target.  */
  t = amd64bsd_target ();
  t->to_read_description = amd64fbsd_read_description;

  dfly_nat_add_target (t);

#ifdef DFLY_PCB_SUPPLY
  /* Support debugging kernel virtual memory images.  */
  bsd_kvm_add_target (amd64dfly_supply_pcb);
#endif

  /* To support the recognition of signal handlers, i386bsd-tdep.c
     hardcodes some constants.  Inclusion of this file means that we
     are compiling a native debugger, which means that we can use the
     system header files and sysctl(3) to get at the relevant
     information.  */

#define SC_REG_OFFSET amd64dfly_sc_reg_offset

  /* We only check the program counter, stack pointer and frame
     pointer since these members of `struct sigcontext' are essential
     for providing backtraces.  */

#define SC_RIP_OFFSET SC_REG_OFFSET[AMD64_RIP_REGNUM]
#define SC_RSP_OFFSET SC_REG_OFFSET[AMD64_RSP_REGNUM]
#define SC_RBP_OFFSET SC_REG_OFFSET[AMD64_RBP_REGNUM]

  /* Override the default value for the offset of the program counter
     in the sigcontext structure.  */
  offset = offsetof (struct sigcontext, sc_rip);

  if (SC_RIP_OFFSET != offset)
    {
      warning (_("\
offsetof (struct sigcontext, sc_rip) yields %d instead of %d.\n\
Please report this to <bug-gdb@gnu.org>."),
	       offset, SC_RIP_OFFSET);
    }

  SC_RIP_OFFSET = offset;

  /* Likewise for the stack pointer.  */
  offset = offsetof (struct sigcontext, sc_rsp);

  if (SC_RSP_OFFSET != offset)
    {
      warning (_("\
offsetof (struct sigcontext, sc_rsp) yields %d instead of %d.\n\
Please report this to <bug-gdb@gnu.org>."),
	       offset, SC_RSP_OFFSET);
    }

  SC_RSP_OFFSET = offset;

  /* And the frame pointer.  */
  offset = offsetof (struct sigcontext, sc_rbp);

  if (SC_RBP_OFFSET != offset)
    {
      warning (_("\
offsetof (struct sigcontext, sc_rbp) yields %d instead of %d.\n\
Please report this to <bug-gdb@gnu.org>."),
	       offset, SC_RBP_OFFSET);
    }

  SC_RBP_OFFSET = offset;

  /* DragonFly provides a kern.ps_strings sysctl that we can use to
     locate the sigtramp.  That way we can still recognize a sigtramp
     if its location is changed in a new kernel.  Of course this is
     still based on the assumption that the sigtramp is placed
     directly under the location where the program arguments and
     environment can be found.  */
  {
    int mib[2];
    long ps_strings;
    size_t len;

    mib[0] = CTL_KERN;
    mib[1] = KERN_PS_STRINGS;
    len = sizeof (ps_strings);
    if (sysctl (mib, 2, &ps_strings, &len, NULL, 0) == 0)
      {
	amd64dfly_sigtramp_start_addr = ps_strings - 32;
	amd64dfly_sigtramp_end_addr = ps_strings;
      }
  }
}
