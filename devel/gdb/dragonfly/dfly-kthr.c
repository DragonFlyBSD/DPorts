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
 * DragonFly kernel thread list, derived from FreeBSD's fbsd-kthr.c.
 *
 * DragonFly keeps every thread on the gd_tdallq list of the CPU it
 * belongs to, so the list is built by walking CPU_prvspace[0..ncpus-1]
 * rather than the process table.  Structure offsets come from the
 * kernel's debug info, or from this system's headers for a kernel
 * without any.  The members used here come before the ones that kernel
 * options (DEBUG_CRIT_SECTIONS, DEBUG_LOCKS) add to struct thread.
 */

#include "defs.h"
#include "gdbcore.h"
#include "inferior.h"
#include "objfiles.h"
#include "value.h"

#include <sys/user.h>
#include <sys/globaldata.h>
#include <machine/globaldata.h>
#include <stddef.h>
#include <unordered_set>

#include "dfly-kgdb.h"

static struct dfly_kthr *first, *last;
struct dfly_kthr *dfly_curkthr;
static bool have_list;		/* first..last came from the CPU lists */

static bool native_layout;	/* no debug info: use this system's */
static LONGEST off_gd, off_gd_tdallq, off_gd_curthread;
static LONGEST off_td_allq, off_td_proc, off_td_lwp, off_td_sp, off_td_pcb;
static LONGEST off_td_comm;
static LONGEST off_p_pid, off_p_comm, off_lwp_tid;
static LONGEST size_td_comm, size_p_comm;

CORE_ADDR
kgdb_lookup(const char *sym)
{
	struct bound_minimal_symbol msym;

	msym = lookup_minimal_symbol(sym, NULL, NULL);
	if (msym.minsym == NULL)
		return (0);
	return (msym.value_address ());
}

static LONGEST
field_offset(const char *type, const char *field, LONGEST native)
{
	if (native_layout)
		return (native);

	std::string expr = string_printf("(long)&((%s *)0)->%s", type, field);

	return (parse_and_eval_long(expr.c_str()));
}

static LONGEST
field_size(const char *type, const char *field, LONGEST native)
{
	if (native_layout)
		return (native);

	std::string expr = string_printf("sizeof(((%s *)0)->%s)", type, field);

	return (parse_and_eval_long(expr.c_str()));
}

/* Offset and size of member M of struct S in the kernel. */
#define	KOFFSET(s, m)	\
	field_offset("struct " #s, #m, offsetof(struct s, m))
#define	KSIZE(s, m)	\
	field_size("struct " #s, #m, sizeof(((struct s *)0)->m))

static CORE_ADDR
read_ptr(CORE_ADDR addr)
{
	struct gdbarch *gdbarch = current_inferior ()->arch ();

	return (read_memory_unsigned_integer(addr, gdbarch_ptr_bit(gdbarch) / 8,
	    gdbarch_byte_order(gdbarch)));
}

static int
read_int(CORE_ADDR addr)
{
	struct gdbarch *gdbarch = current_inferior ()->arch ();

	return (read_memory_integer(addr, 4, gdbarch_byte_order(gdbarch)));
}

/*
 * Return whether CPU is set in stopped_cpus, a cpumask_t of 64-bit words.
 */
static bool
cpu_stopped(CORE_ADDR stopped_cpus, int cpu)
{
	ULONGEST word;

	if (stopped_cpus == 0)
		return (false);
	try {
		word = read_memory_unsigned_integer(stopped_cpus + (cpu / 64) * 8,
		    8, gdbarch_byte_order(current_inferior ()->arch ()));
	} catch (const gdb_exception_error &e) {
		return (false);
	}
	return ((word & ((ULONGEST)1 << (cpu % 64))) != 0);
}

static void
free_list(void)
{
	struct dfly_kthr *kt;

	while (first != NULL) {
		kt = first;
		first = kt->next;
		xfree(kt);
	}
	last = NULL;
	dfly_curkthr = NULL;
}

static void
link_thread(struct dfly_kthr *kt)
{

	if (last == NULL)
		first = kt;
	else
		last->next = kt;
	last = kt;
}

static void
add_thread(CORE_ADDR td, int cpu, CORE_ADDR pcb, bool running)
{
	struct dfly_kthr *kt;
	CORE_ADDR paddr, lwp, sp, tdpcb;
	int pid, lwpid;

	/* Do all the reads, which can throw, before allocating. */
	pid = -1;
	lwpid = 0;
	sp = tdpcb = 0;
	paddr = read_ptr(td + off_td_proc);
	if (paddr != 0)
		pid = read_int(paddr + off_p_pid);
	lwp = read_ptr(td + off_td_lwp);
	if (lwp != 0)
		lwpid = read_int(lwp + off_lwp_tid);
	if (pcb == 0) {
		sp = read_ptr(td + off_td_sp);
		tdpcb = read_ptr(td + off_td_pcb);
	}

	kt = XCNEW(struct dfly_kthr);
	kt->kaddr = td;
	kt->tid = td;
	kt->cpu = cpu;
	kt->paddr = paddr;
	kt->pid = pid;
	kt->lwpid = lwpid;
	kt->pcb = pcb;
	kt->sp = sp;
	kt->td_pcb = tdpcb;
	kt->running = running;
	link_thread(kt);
}

struct dfly_kthr *
dfly_kthr_first(void)
{

	return (first);
}

struct dfly_kthr *
dfly_kthr_next(struct dfly_kthr *kt)
{

	return (kt->next);
}

struct dfly_kthr *
dfly_kthr_init(CORE_ADDR stoppcbs, LONGEST pcb_size)
{
	CORE_ADDR prvspace, dumppcb, dumptd, stopped_cpus, addr;
	std::unordered_set<CORE_ADDR> seen;
	struct dfly_kthr *kt;
	int cpu, ncpus, ptrsize;

	free_list();
	have_list = false;
	ptrsize = gdbarch_ptr_bit(current_inferior ()->arch ()) / 8;

	dumppcb = kgdb_lookup("dumppcb");
	if (dumppcb == 0)
		return (NULL);
	prvspace = kgdb_lookup("CPU_prvspace");
	stopped_cpus = kgdb_lookup("stopped_cpus");

	dumptd = 0;
	addr = kgdb_lookup("dumpthread");
	try {
		if (addr != 0)
			dumptd = read_ptr(addr);
	} catch (const gdb_exception_error &e) {
	}

	try {
		parse_and_eval_long("sizeof(struct thread)");
		native_layout = false;
	} catch (const gdb_exception_error &e) {
		warning(_("the kernel has no debug info; "
		    "assuming this system's structure layouts"));
		native_layout = true;
	}

	try {
		ncpus = 0;
		addr = kgdb_lookup("ncpus");
		if (prvspace != 0 && addr != 0)
			ncpus = read_int(addr);
		off_gd = KOFFSET(privatespace, mdglobaldata.mi);
		off_gd_tdallq = KOFFSET(globaldata, gd_tdallq.tqh_first);
		off_gd_curthread = KOFFSET(globaldata, gd_curthread);
		off_td_allq = KOFFSET(thread, td_allq.tqe_next);
		off_td_proc = KOFFSET(thread, td_proc);
		off_td_lwp = KOFFSET(thread, td_lwp);
		off_td_sp = KOFFSET(thread, td_sp);
		off_td_pcb = KOFFSET(thread, td_pcb);
		off_td_comm = KOFFSET(thread, td_comm);
		size_td_comm = KSIZE(thread, td_comm);
		off_p_pid = KOFFSET(proc, p_pid);
		off_p_comm = KOFFSET(proc, p_comm);
		size_p_comm = KSIZE(proc, p_comm);
		off_lwp_tid = KOFFSET(lwp, lwp_tid);
	} catch (const gdb_exception_error &e) {
		warning(_("kernel debug info lacks thread structures: %s"),
		    e.what());
		ncpus = 0;
	}

	for (cpu = 0; cpu < ncpus; cpu++) {
		CORE_ADDR gd, curtd, td;

		try {
			gd = read_ptr(prvspace + cpu * ptrsize) + off_gd;
			curtd = read_ptr(gd + off_gd_curthread);
			td = read_ptr(gd + off_gd_tdallq);
		} catch (const gdb_exception_error &e) {
			warning(_("cannot read globaldata of cpu %d"), cpu);
			continue;
		}
		while (td != 0) {
			CORE_ADDR pcb = 0;

			/*
			 * Each thread is on one list once; seeing it again
			 * means a corrupt list, or one that changed while a
			 * live system was being read.
			 */
			if (!seen.insert(td).second) {
				warning(_("thread list of cpu %d loops at %s"),
				    cpu, paddress(current_inferior ()->arch (),
				    td));
				break;
			}
			if (td == dumptd)
				pcb = dumppcb;
			else if (td == curtd && stoppcbs != 0 && pcb_size != 0 &&
			    cpu_stopped(stopped_cpus, cpu))
				pcb = stoppcbs + pcb_size * cpu;
			try {
				/*
				 * The current thread of a CPU that was not
				 * stopped (any CPU of a live system) has no
				 * saved state; its td_sp is stale.
				 */
				add_thread(td, cpu, pcb,
				    td == curtd && pcb == 0);
				td = read_ptr(td + off_td_allq);
			} catch (const gdb_exception_error &e) {
				warning(_("cannot read thread at %s on cpu %d"),
				    paddress(current_inferior ()->arch (), td),
				    cpu);
				break;
			}
		}
	}
	have_list = (first != NULL);

	/*
	 * Without a thread list, still offer the context of the dump, so
	 * that memory and the backtrace of the panic remain available.
	 */
	if (first == NULL) {
		kt = XCNEW(struct dfly_kthr);
		kt->kaddr = dumptd;
		kt->tid = dumptd != 0 ? dumptd : dumppcb;
		kt->pid = -1;
		kt->cpu = -1;
		kt->pcb = dumptd != 0 ? dumppcb : 0;
		kt->running = (dumptd == 0);
		link_thread(kt);
	}

	/*
	 * Start in the thread that dumped or, on a live system, in the
	 * first one that has a stack to show.
	 */
	for (kt = first; kt != NULL; kt = kt->next)
		if (kt->kaddr == dumptd)
			dfly_curkthr = kt;
	for (kt = first; kt != NULL && dfly_curkthr == NULL; kt = kt->next)
		if (!kt->running)
			dfly_curkthr = kt;
	if (dfly_curkthr == NULL)
		dfly_curkthr = first;
	return (first);
}

struct dfly_kthr *
dfly_kthr_lookup_tid(ULONGEST tid)
{
	struct dfly_kthr *kt;

	for (kt = first; kt != NULL && kt->tid != tid; kt = kt->next)
		;
	return (kt);
}

struct dfly_kthr *
dfly_kthr_lookup_pid(int pid)
{
	struct dfly_kthr *kt;

	for (kt = first; kt != NULL && kt->pid != pid; kt = kt->next)
		;
	return (kt);
}

struct dfly_kthr *
dfly_kthr_lookup_paddr(CORE_ADDR paddr)
{
	struct dfly_kthr *kt;

	for (kt = first; kt != NULL && kt->paddr != paddr; kt = kt->next)
		;
	return (kt);
}

/*
 * Name a thread the way the base system kgdb does: "pid 1/1, init" for
 * threads of a process and "kernel softclock 0" for kernel threads.
 */
const char *
dfly_kthr_extra_thread_info(ULONGEST tid)
{
	static char buf[96];
	char comm[64];
	struct dfly_kthr *kt;

	kt = dfly_kthr_lookup_tid(tid);
	if (kt == NULL)
		return (NULL);
	if (!have_list)
		return ("dump context, no thread list");

	memset(comm, 0, sizeof(comm));
	try {
		if (kt->paddr != 0)
			read_memory(kt->paddr + off_p_comm, (gdb_byte *)comm,
			    std::min<LONGEST>(size_p_comm, sizeof(comm) - 1));
		else
			read_memory(kt->kaddr + off_td_comm, (gdb_byte *)comm,
			    std::min<LONGEST>(size_td_comm, sizeof(comm) - 1));
	} catch (const gdb_exception_error &e) {
		comm[0] = '\0';
	}

	if (kt->paddr != 0)
		snprintf(buf, sizeof(buf), "pid %d/%d, %s", kt->pid, kt->lwpid,
		    comm);
	else
		snprintf(buf, sizeof(buf), "kernel %s", comm);
	if (kt->running)
		snprintf(buf + strlen(buf), sizeof(buf) - strlen(buf),
		    ", running on cpu %d", kt->cpu);
	return (buf);
}
