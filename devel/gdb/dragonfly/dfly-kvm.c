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
 * DragonFly vmcore target, derived from FreeBSD's fbsd-kvm.c.
 *
 * As on FreeBSD, the dump is a single inferior (pid 1) whose threads
 * are ptid (1, 1, tid), so there is one program space for all threads.
 */

#include "defs.h"
#include "command.h"
#include "elf-bfd.h"
#include "filenames.h"
#include "gdbcore.h"
#include "gdbthread.h"
#include "gdbsupport/gdb_obstack.h"
#include "inferior.h"
#include "objfiles.h"
#include "osabi.h"
#include "process-stratum-target.h"
#include "solib.h"
#include "target.h"
#include "value.h"
#include "readline/tilde.h"
#include "gdbsupport/buildargv.h"
#include "gdbsupport/byte-vector.h"
#include "gdbsupport/pathstuff.h"
#include "gdbsupport/gdb_tilde_expand.h"

#include <sys/user.h>
#include <sys/msgbuf.h>
#include <machine/pcb.h>
#include <fcntl.h>
#include <kvm.h>

#include "dfly-kgdb.h"

static CORE_ADDR stoppcbs;
static LONGEST pcb_size;

static std::string vmcore;

struct dfly_vmcore_ops
{
  /* Supply registers from a pcb filled by savectx().  */
  void (*supply_pcb)(struct regcache *, CORE_ADDR) = nullptr;

  /* Supply registers of a switched-out thread from td_sp and td_pcb.  */
  void (*supply_switchframe)(struct regcache *, CORE_ADDR, CORE_ADDR) =
    nullptr;
};

/* Per-architecture data key.  */
static const registry<gdbarch>::key<struct dfly_vmcore_ops> dfly_vmcore_data;

static struct dfly_vmcore_ops *
get_dfly_vmcore_ops (struct gdbarch *gdbarch)
{
  struct dfly_vmcore_ops *ops = dfly_vmcore_data.get (gdbarch);
  if (ops == nullptr)
    ops = dfly_vmcore_data.emplace (gdbarch);
  return ops;
}

void
dfly_vmcore_set_supply_pcb (struct gdbarch *gdbarch,
			    void (*supply_pcb) (struct regcache *, CORE_ADDR))
{
  get_dfly_vmcore_ops (gdbarch)->supply_pcb = supply_pcb;
}

void
dfly_vmcore_set_supply_switchframe (struct gdbarch *gdbarch,
				    void (*supply_switchframe) (struct regcache *,
								CORE_ADDR, CORE_ADDR))
{
  get_dfly_vmcore_ops (gdbarch)->supply_switchframe = supply_switchframe;
}

/*
 * Kernel addresses are in the upper half of the canonical x86_64
 * address space; anything below is a pid for the "proc" command.
 */
static const CORE_ADDR kernstart = (CORE_ADDR)1 << 63;
static kvm_t *kvm;
int kgdb_quiet;

static ptid_t
dfly_vmcore_ptid(ULONGEST tid)
{

	return ptid_t(1, 1, tid);
}

/*
 * Read the fields of *msgbufp, from the kernel's debug info or, for a
 * kernel without any, with this system's struct msgbuf.
 */
static bool
msgbuf_fields(CORE_ADDR *bufp, uint32_t *size, uint32_t *rindex,
    uint32_t *windex)
{
	struct gdbarch *gdbarch = current_inferior ()->arch ();
	struct msgbuf mb;
	CORE_ADDR addr;

	try {
		*bufp = parse_and_eval_address("msgbufp->msg_ptr");
		*size = parse_and_eval_long("msgbufp->msg_size");
		*rindex = parse_and_eval_long("msgbufp->msg_bufr");
		*windex = parse_and_eval_long("msgbufp->msg_bufx");
		return (true);
	} catch (const gdb_exception_error &e) {
	}

	addr = kgdb_lookup("msgbufp");
	if (addr == 0)
		return (false);
	try {
		addr = read_memory_unsigned_integer(addr,
		    gdbarch_ptr_bit(gdbarch) / 8, gdbarch_byte_order(gdbarch));
	} catch (const gdb_exception_error &e) {
		return (false);
	}
	if (addr == 0 ||
	    target_read_memory(addr, (gdb_byte *)&mb, sizeof(mb)) != 0)
		return (false);
	*bufp = (CORE_ADDR)(uintptr_t)mb.msg_ptr;
	*size = mb.msg_size;
	*rindex = mb.msg_bufr;
	*windex = mb.msg_bufx;
	return (true);
}

/*
 * Print the kernel message buffer.  DragonFly's msgbuf has a base
 * index (msg_bufr) and a write index (msg_bufx): 32-bit counters that
 * are never masked, so positions are taken modulo msg_size and the
 * distance between them is computed in 32 bits, as the kernel does.
 */
static void
kgdb_dmesg(void)
{
	CORE_ADDR bufp;
	uint32_t size, rindex, windex;
	gdb_byte c = '\n';

	if (kgdb_quiet)
		return;
	if (!msgbuf_fields(&bufp, &size, &rindex, &windex))
		return;
	if (size == 0 || rindex == windex)
		return;
	if (windex - rindex > size)
		rindex = windex - size;

	gdb::byte_vector buf(size);
	if (target_read_memory(bufp, buf.data(), size) != 0) {
		warning(_("cannot read the kernel message buffer at %s"),
		    paddress(current_inferior ()->arch (), bufp));
		return;
	}

	printf("\nKernel message buffer:\n");
	for (; rindex != windex; rindex++) {
		c = buf[rindex % size];
		putchar(c);
	}
	if (c != '\n')
		putchar('\n');
	putchar('\n');
}

#define	KERNEL_INTERP		"/red/herring"

/*
 * DragonFly kernels are plain ELFOSABI_NONE objects without the
 * DragonFly ABI note that userland carries, but like FreeBSD kernels
 * they are linked with an interpreter of "/red/herring".  Accept those
 * that have no FreeBSD marking.
 */
enum gdb_osabi
dfly_kernel_osabi_sniffer(bfd *abfd)
{
	enum gdb_osabi osabi = GDB_OSABI_UNKNOWN;
	asection *s;
	bfd_byte buf[sizeof(KERNEL_INTERP)];
	bfd_byte *bufp;

	if (elf_elfheader(abfd)->e_ident[EI_OSABI] != ELFOSABI_NONE)
		return (GDB_OSABI_UNKNOWN);
	for (asection *sect : gdb_bfd_sections (abfd))
		generic_elf_osabi_sniff_abi_tag_sections (abfd, sect, &osabi);
	if (osabi != GDB_OSABI_UNKNOWN && osabi != GDB_OSABI_DRAGONFLY)
		return (GDB_OSABI_UNKNOWN);

	bufp = buf;
	s = bfd_get_section_by_name(abfd, ".interp");
	if (s != NULL && bfd_section_size(s) == sizeof(buf) &&
	    bfd_get_full_section_contents(abfd, s, &bufp) &&
	    memcmp(buf, KERNEL_INTERP, sizeof(buf)) == 0)
		return (GDB_OSABI_DRAGONFLY_KERNEL);

	return (GDB_OSABI_UNKNOWN);
}

/* The DragonFly libkvm target.  */

static const target_info dfly_kvm_target_info = {
  "vmcore",
  N_("Kernel core dump file"),
  N_("Use a vmcore file as a target.\n\
target vmcore [-w] filename")
};

class dfly_kvm_target final : public process_stratum_target
{
public:
  dfly_kvm_target () = default;

  const target_info &info () const override
  { return dfly_kvm_target_info; }

  void close () override;

  void fetch_registers (struct regcache *, int) override;
  enum target_xfer_status xfer_partial (enum target_object object,
					const char *annex,
					gdb_byte *readbuf,
					const gdb_byte *writebuf,
					ULONGEST offset, ULONGEST len,
					ULONGEST *xfered_len) override;

  void files_info () override;
  bool thread_alive (ptid_t ptid) override;
  std::string pid_to_str (ptid_t) override;
  const char *extra_thread_info (thread_info *) override;

  bool has_all_memory () override { return false; }
  bool has_memory () override;
  bool has_stack () override;
  bool has_registers () override;
  bool has_execution (inferior *inf) override { return false; }
};

/* Target ops for libkvm interface.  */
static dfly_kvm_target dfly_kvm_ops;

static void
dfly_kvm_target_open (const char *args, int from_tty)
{
	struct dfly_vmcore_ops *ops = get_dfly_vmcore_ops (current_inferior ()->arch ());
	char kvm_err[_POSIX2_LINE_MAX];
	struct inferior *inf;
	struct dfly_kthr *kt;
	kvm_t *nkvm;
	const char *kernel;
	std::string filename;
	bool writeable;

	if (ops == NULL || ops->supply_pcb == NULL ||
	    ops->supply_switchframe == NULL)
		error ("ABI doesn't support a vmcore target; \
try \"set osabi DragonFly/kernel\"");

	target_preopen (from_tty);
	kernel = get_exec_file (0);
	if (kernel == NULL)
		error ("Can't open a vmcore without a kernel");

	writeable = false;
	if (args != NULL) {
		gdb_argv built_argv (args);

		for (char **argv = built_argv.get (); *argv != NULL; argv++) {
			if (**argv == '-') {
				if (strcmp (*argv, "-w") == 0)
					writeable = true;
				else
					error (_("Invalid argument"));
			} else {
				if (!filename.empty ())
					error (_("Invalid argument"));

				filename = gdb_tilde_expand (*argv);
				if (!IS_ABSOLUTE_PATH (filename))
					filename = gdb_abspath (filename.c_str ());
			}
		}
	}
	if (filename.empty ())
		error (_("No vmcore file specified"));

	nkvm = kvm_openfiles(kernel, filename.c_str (), NULL,
	    writeable ? O_RDWR : O_RDONLY, kvm_err);
	if (nkvm == NULL)
		error ("Failed to open vmcore: %s", kvm_err);

	/* Don't free the filename now and close any previous vmcore. */
	current_inferior ()->unpush_target (&dfly_kvm_ops);

	kvm = nkvm;
	vmcore = std::move(filename);
	target_unpush_up unpusher;
	inf = current_inferior();
	inf->push_target (&dfly_kvm_ops);

	if (inf->pid == 0) {
		inferior_appeared(inf, 1);
		inf->fake_pid_p = 1;
	}

	/* stoppcbs[] holds the context of CPUs stopped by Xcpustop. */
	stoppcbs = kgdb_lookup("stoppcbs");
	try {
		pcb_size = parse_and_eval_long("sizeof(struct pcb)");
	} catch (const gdb_exception_error &e) {
		pcb_size = sizeof(struct pcb);
	}

	kgdb_dmesg();

	kt = dfly_kthr_init(stoppcbs, pcb_size);
	if (kt == NULL)
		error (_("Cannot find any kernel threads in %s"), vmcore.c_str ());
	thread_info *curthr = nullptr;
	while (kt != NULL) {
		thread_info *thr = add_thread_silent(&dfly_kvm_ops,
		    dfly_vmcore_ptid(kt->tid));
		if (kt == dfly_curkthr)
			curthr = thr;
		kt = dfly_kthr_next(kt);
	}
	switch_to_thread (curthr);

	unpusher.release ();

	post_create_inferior (from_tty);

	target_fetch_registers (get_thread_regcache (curthr), -1);

	reinit_frame_cache ();
	print_stack_frame (get_selected_frame (NULL), 0, SRC_AND_LOC, 1);
}

void
dfly_kvm_target::close()
{

	if (kvm != NULL) {
		switch_to_no_thread ();
		exit_inferior (current_inferior ());

		clear_solib (current_program_space);
		if (kvm_close(kvm) != 0)
			warning("cannot close \"%s\": %s", vmcore.c_str (),
			    kvm_geterr(kvm));
		kvm = NULL;
		vmcore.clear ();
	}
}

const char *
dfly_kvm_target::extra_thread_info(thread_info *ti)
{

	return (dfly_kthr_extra_thread_info(ti->ptid.tid()));
}

bool
dfly_kvm_target::has_memory ()
{
  return (kvm != NULL);
}

bool
dfly_kvm_target::has_stack ()
{
  return (kvm != NULL);
}

bool
dfly_kvm_target::has_registers ()
{
  return (kvm != NULL);
}

void
dfly_kvm_target::files_info()
{

	gdb_printf ("\t`%s', ", vmcore.c_str ());
	gdb_stdout->wrap_here (8);
	gdb_printf ("file type %s.\n", "DragonFly kernel vmcore");
}

std::string
dfly_kvm_target::pid_to_str(ptid_t ptid)
{
  return string_printf (_("Thread %s"), hex_string (ptid.tid ()));
}

bool
dfly_kvm_target::thread_alive(ptid_t ptid)
{
	return (dfly_kthr_lookup_tid(ptid.tid()) != NULL);
}

void
dfly_kvm_target::fetch_registers(struct regcache *regcache, int regnum)
{
	struct dfly_vmcore_ops *ops = get_dfly_vmcore_ops (regcache->arch ());
	struct dfly_kthr *kt;

	kt = dfly_kthr_lookup_tid(regcache->ptid().tid());
	if (kt == NULL)
		return;
	if (kt->pcb != 0) {
		if (ops->supply_pcb != NULL)
			ops->supply_pcb(regcache, kt->pcb);
	} else if (kt->running) {
		/* No saved state; don't make up a stack from td_sp. */
		regcache->raw_supply_zeroed(gdbarch_pc_regnum(regcache->arch()));
	} else {
		if (ops->supply_switchframe != NULL)
			ops->supply_switchframe(regcache, kt->sp, kt->td_pcb);
	}
}

enum target_xfer_status
dfly_kvm_target::xfer_partial(enum target_object object,
		       const char *annex, gdb_byte *readbuf,
		       const gdb_byte *writebuf,
		       ULONGEST offset, ULONGEST len, ULONGEST *xfered_len)
{
	ssize_t nbytes;

	gdb_assert(kvm != NULL);
	switch (object) {
	case TARGET_OBJECT_MEMORY:
		nbytes = len;
		if (readbuf != NULL)
			nbytes = kvm_read(kvm, offset, readbuf, len);
		if (writebuf != NULL && len > 0)
			nbytes = kvm_write(kvm, offset, writebuf, len);
		if (nbytes < 0)
			return TARGET_XFER_E_IO;
		if (nbytes == 0)
			return TARGET_XFER_EOF;
		*xfered_len = nbytes;
		return TARGET_XFER_OK;
	default:
		return TARGET_XFER_E_IO;
	}
}

static void
kgdb_switch_to_thread(const char *arg, ULONGEST tid)
{
  struct thread_info *tp = dfly_kvm_ops.find_thread (dfly_vmcore_ptid (tid));
  if (tp == NULL)
    error ("invalid tid");
  thread_select (arg, tp);
}

static void
kgdb_set_proc_cmd (const char *arg, int from_tty)
{
	CORE_ADDR addr;
	struct dfly_kthr *thr;

	if (!arg)
		error_no_arg ("pid or proc address for the new context");

	if (kvm == NULL)
		error ("only supported for core file target");

	addr = parse_and_eval_address (arg);

	if (addr < kernstart) {
		thr = dfly_kthr_lookup_pid((int)addr);
		if (thr == NULL)
			error ("invalid pid");
	} else {
		thr = dfly_kthr_lookup_paddr(addr);
		if (thr == NULL)
			error("invalid proc address");
	}
	kgdb_switch_to_thread(arg, thr->tid);
}

static void
kgdb_set_tid_cmd (const char *arg, int from_tty)
{

	if (!arg)
		error_no_arg ("thread address for the new context");

	kgdb_switch_to_thread(arg, parse_and_eval_address (arg));
}

void _initialize_kgdb_target ();
void
_initialize_kgdb_target ()
{

	add_target(dfly_kvm_target_info, dfly_kvm_target_open,
	    filename_completer);

	add_com ("proc", class_obscure, kgdb_set_proc_cmd,
	   "Set current process context by pid or struct proc address");
	add_com ("tid", class_obscure, kgdb_set_tid_cmd,
	   "Set current thread context by struct thread address");
}
