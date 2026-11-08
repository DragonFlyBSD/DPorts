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
 * DragonFly kgdb, derived from FreeBSD's kgdb.h in devel/gdb.
 *
 * DragonFly threads have no global thread id, so the address of
 * struct thread is used as the tid, as the base system kgdb does.
 * Registers come either from a pcb filled by savectx() (dumppcb, or
 * stoppcbs[] for CPUs stopped by Xcpustop), or from the state a
 * switched-out thread left at td_sp (and in td_pcb for user threads,
 * which switch with cpu_heavy_switch()).
 */

#ifndef DFLY_KGDB_H
#define DFLY_KGDB_H

struct dfly_kthr {
	struct dfly_kthr *next;
	CORE_ADDR	paddr;		/* struct proc, or 0 for kernel threads */
	CORE_ADDR	kaddr;		/* struct thread */
	CORE_ADDR	pcb;		/* savectx() pcb, or 0 */
	CORE_ADDR	sp;		/* td_sp, used when pcb is 0 */
	CORE_ADDR	td_pcb;		/* td_pcb, used when pcb is 0 */
	ULONGEST	tid;		/* == kaddr */
	int		pid;		/* -1 for kernel threads */
	int		lwpid;
	int		cpu;
	bool		running;	/* on its CPU, no saved state */
};

extern struct dfly_kthr *dfly_curkthr;
extern int kgdb_quiet;

CORE_ADDR kgdb_lookup(const char *sym);

struct dfly_kthr *dfly_kthr_init(CORE_ADDR stoppcbs, LONGEST pcb_size);
struct dfly_kthr *dfly_kthr_first(void);
struct dfly_kthr *dfly_kthr_next(struct dfly_kthr *);
struct dfly_kthr *dfly_kthr_lookup_tid(ULONGEST);
struct dfly_kthr *dfly_kthr_lookup_pid(int);
struct dfly_kthr *dfly_kthr_lookup_paddr(CORE_ADDR);
const char *dfly_kthr_extra_thread_info(ULONGEST);

enum gdb_osabi dfly_kernel_osabi_sniffer(bfd *abfd);

void dfly_vmcore_set_supply_pcb(struct gdbarch *gdbarch,
    void (*supply_pcb)(struct regcache *, CORE_ADDR));
void dfly_vmcore_set_supply_switchframe(struct gdbarch *gdbarch,
    void (*supply_switchframe)(struct regcache *, CORE_ADDR, CORE_ADDR));

#endif /* DFLY_KGDB_H */
