/* Target-dependent code for DragonFly, architecture-independent.

   Copyright (C) 2002-2019 Free Software Foundation, Inc.

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
#include "auxv.h"
#include "gdbcore.h"
#include "inferior.h"
#include "regcache.h"
#include "regset.h"
#include "gdbthread.h"
#include "objfiles.h"
#include "xml-syscall.h"
#include <sys/socket.h>
#include <arpa/inet.h>

#include "elf-bfd.h"
#include "dfly-tdep.h"

/* This enum is derived from FreeBSD's <sys/signal.h>.  */

enum
  {
    DRAGONFLY_SIGHUP = 1,
    DRAGONFLY_SIGINT = 2,
    DRAGONFLY_SIGQUIT = 3,
    DRAGONFLY_SIGILL = 4,
    DRAGONFLY_SIGTRAP = 5,
    DRAGONFLY_SIGABRT = 6,
    DRAGONFLY_SIGEMT = 7,
    DRAGONFLY_SIGFPE = 8,
    DRAGONFLY_SIGKILL = 9,
    DRAGONFLY_SIGBUS = 10,
    DRAGONFLY_SIGSEGV = 11,
    DRAGONFLY_SIGSYS = 12,
    DRAGONFLY_SIGPIPE = 13,
    DRAGONFLY_SIGALRM = 14,
    DRAGONFLY_SIGTERM = 15,
    DRAGONFLY_SIGURG = 16,
    DRAGONFLY_SIGSTOP = 17,
    DRAGONFLY_SIGTSTP = 18,
    DRAGONFLY_SIGCONT = 19,
    DRAGONFLY_SIGCHLD = 20,
    DRAGONFLY_SIGTTIN = 21,
    DRAGONFLY_SIGTTOU = 22,
    DRAGONFLY_SIGIO = 23,
    DRAGONFLY_SIGXCPU = 24,
    DRAGONFLY_SIGXFSZ = 25,
    DRAGONFLY_SIGVTALRM = 26,
    DRAGONFLY_SIGPROF = 27,
    DRAGONFLY_SIGWINCH = 28,
    DRAGONFLY_SIGINFO = 29,
    DRAGONFLY_SIGUSR1 = 30,
    DRAGONFLY_SIGUSR2 = 31,
    DRAGONFLY_SIGTHR = 32,
    DRAGONFLY_SIGCKPT = 33,
    DRAGONFLY_SIGCKPTEXIT = 34,
  };

#if 0
/* Flags in pl_flags.  */
#define	PL_FLAG_SI	0x20	/* siginfo is valid */

/* Sizes of siginfo_t.	*/
#define	SIZE64_SIGINFO_T	80
#define	SIZE32_SIGINFO_T	64

/* Offsets in data structure used in NT_FREEBSD_PROCSTAT_VMMAP core
   dump notes.  See <sys/user.h> for the definition of struct
   kinfo_vmentry.  This data structure should have the same layout on
   all architectures.

   Note that FreeBSD 7.0 used an older version of this structure
   (struct kinfo_ovmentry), but the NT_FREEBSD_PROCSTAT_VMMAP core
   dump note wasn't introduced until FreeBSD 9.2.  As a result, the
   core dump note has always used the 7.1 and later structure
   format.  */

#define	KVE_STRUCTSIZE		0x0
#define	KVE_START		0x8
#define	KVE_END			0x10
#define	KVE_OFFSET		0x18
#define	KVE_FLAGS		0x2c
#define	KVE_PROTECTION		0x38
#define	KVE_PATH		0x88

/* Flags in the 'kve_protection' field in struct kinfo_vmentry.  These
   match the KVME_PROT_* constants in <sys/user.h>.  */

#define	KINFO_VME_PROT_READ	0x00000001
#define	KINFO_VME_PROT_WRITE	0x00000002
#define	KINFO_VME_PROT_EXEC	0x00000004

/* Flags in the 'kve_flags' field in struct kinfo_vmentry.  These
   match the KVME_FLAG_* constants in <sys/user.h>.  */

#define	KINFO_VME_FLAG_COW		0x00000001
#define	KINFO_VME_FLAG_NEEDS_COPY	0x00000002
#define	KINFO_VME_FLAG_NOCOREDUMP	0x00000004
#define	KINFO_VME_FLAG_SUPER		0x00000008
#define	KINFO_VME_FLAG_GROWS_UP		0x00000010
#define	KINFO_VME_FLAG_GROWS_DOWN	0x00000020

/* Offsets in data structure used in NT_FREEBSD_PROCSTAT_FILES core
   dump notes.  See <sys/user.h> for the definition of struct
   kinfo_file.  This data structure should have the same layout on all
   architectures.

   Note that FreeBSD 7.0 used an older version of this structure
   (struct kinfo_ofile), but the NT_FREEBSD_PROCSTAT_FILES core dump
   note wasn't introduced until FreeBSD 9.2.  As a result, the core
   dump note has always used the 7.1 and later structure format.  */

#define	KF_STRUCTSIZE		0x0
#define	KF_TYPE			0x4
#define	KF_FD			0x8
#define	KF_FLAGS		0x10
#define	KF_OFFSET		0x18
#define	KF_VNODE_TYPE		0x20
#define	KF_SOCK_DOMAIN		0x24
#define	KF_SOCK_TYPE		0x28
#define	KF_SOCK_PROTOCOL	0x2c
#define	KF_SA_LOCAL		0x30
#define	KF_SA_PEER		0xb0
#define	KF_PATH			0x170

/* Constants for the 'kf_type' field in struct kinfo_file.  These
   match the KF_TYPE_* constants in <sys/user.h>.  */

#define	KINFO_FILE_TYPE_VNODE	1
#define	KINFO_FILE_TYPE_SOCKET	2
#define	KINFO_FILE_TYPE_PIPE	3
#define	KINFO_FILE_TYPE_FIFO	4
#define	KINFO_FILE_TYPE_KQUEUE	5
#define	KINFO_FILE_TYPE_CRYPTO	6
#define	KINFO_FILE_TYPE_MQUEUE	7
#define	KINFO_FILE_TYPE_SHM	8
#define	KINFO_FILE_TYPE_SEM	9
#define	KINFO_FILE_TYPE_PTS	10
#define	KINFO_FILE_TYPE_PROCDESC 11

/* Special values for the 'kf_fd' field in struct kinfo_file.  These
   match the KF_FD_TYPE_* constants in <sys/user.h>.  */

#define	KINFO_FILE_FD_TYPE_CWD	-1
#define	KINFO_FILE_FD_TYPE_ROOT	-2
#define	KINFO_FILE_FD_TYPE_JAIL	-3
#define	KINFO_FILE_FD_TYPE_TRACE -4
#define	KINFO_FILE_FD_TYPE_TEXT	-5
#define	KINFO_FILE_FD_TYPE_CTTY	-6

/* Flags in the 'kf_flags' field in struct kinfo_file.  These match
   the KF_FLAG_* constants in <sys/user.h>.  */

#define	KINFO_FILE_FLAG_READ		0x00000001
#define	KINFO_FILE_FLAG_WRITE		0x00000002
#define	KINFO_FILE_FLAG_APPEND		0x00000004
#define	KINFO_FILE_FLAG_ASYNC		0x00000008
#define	KINFO_FILE_FLAG_FSYNC		0x00000010
#define	KINFO_FILE_FLAG_NONBLOCK	0x00000020
#define	KINFO_FILE_FLAG_DIRECT		0x00000040
#define	KINFO_FILE_FLAG_HASLOCK		0x00000080
#define	KINFO_FILE_FLAG_EXEC		0x00004000

/* Constants for the 'kf_vnode_type' field in struct kinfo_file.
   These match the KF_VTYPE_* constants in <sys/user.h>.  */

#define	KINFO_FILE_VTYPE_VREG	1
#define	KINFO_FILE_VTYPE_VDIR	2
#define	KINFO_FILE_VTYPE_VCHR	4
#define	KINFO_FILE_VTYPE_VLNK	5
#define	KINFO_FILE_VTYPE_VSOCK	6
#define	KINFO_FILE_VTYPE_VFIFO	7
#endif

/* Constants for socket address families.  These match AF_* constants
   in <sys/socket.h>.  */

#define	DFLY_AF_UNIX		1
#define	DFLY_AF_INET		2
#define	DFLY_AF_INET6		28

/* Constants for socket types.  These match SOCK_* constants in
   <sys/socket.h>.  */

#define	DFLY_SOCK_STREAM	1
#define	DFLY_SOCK_DGRAM		2
#define	DFLY_SOCK_SEQPACKET	5

/* Constants for IP protocols.  These match IPPROTO_* constants in
   <netinet/in.h>.  */

#define	DFLY_IPPROTO_ICMP	1
#define	DFLY_IPPROTO_TCP	6
#define	DFLY_IPPROTO_UDP	17

/* Socket address structures.  These have the same layout on all
   DragonFly architectures.  In addition, multibyte fields such as IP
   addresses are always stored in network byte order.  */

struct dfly_sockaddr_in
{
  uint8_t sin_len;
  uint8_t sin_family;
  uint8_t sin_port[2];
  uint8_t sin_addr[4];
  char sin_zero[8];
};

struct dfly_sockaddr_in6
{
  uint8_t sin6_len;
  uint8_t sin6_family;
  uint8_t sin6_port[2];
  uint32_t sin6_flowinfo;
  uint8_t sin6_addr[16];
  uint32_t sin6_scope_id;
};

struct dfly_sockaddr_un
{
  uint8_t sun_len;
  uint8_t sun_family;
  char sun_path[104];
};

#if 0
/* Number of 32-bit words in a signal set.  This matches _SIG_WORDS in
   <sys/_sigset.h> and is the same value on all architectures.  */

#define	SIG_WORDS		4

/* Offsets in data structure used in NT_FREEBSD_PROCSTAT_PROC core
   dump notes.  See <sys/user.h> for the definition of struct
   kinfo_proc.  This data structure has different layouts on different
   architectures mostly due to ILP32 vs LP64.  However, FreeBSD/i386
   uses a 32-bit time_t while all other architectures use a 64-bit
   time_t.

   The core dump note actually contains one kinfo_proc structure for
   each thread, but all of the process-wide data can be obtained from
   the first structure.  One result of this note's format is that some
   of the process-wide status available in the native target method
   from the kern.proc.pid.<pid> sysctl such as ki_stat and ki_siglist
   is not available from a core dump.  Instead, the per-thread data
   structures contain the value of these fields for individual
   threads.  */

struct kinfo_proc_layout
{
  /* Offsets of struct kinfo_proc members.  */
  int ki_layout;
  int ki_pid;
  int ki_ppid;
  int ki_pgid;
  int ki_tpgid;
  int ki_sid;
  int ki_tdev_freebsd11;
  int ki_sigignore;
  int ki_sigcatch;
  int ki_uid;
  int ki_ruid;
  int ki_svuid;
  int ki_rgid;
  int ki_svgid;
  int ki_ngroups;
  int ki_groups;
  int ki_size;
  int ki_rssize;
  int ki_tsize;
  int ki_dsize;
  int ki_ssize;
  int ki_start;
  int ki_nice;
  int ki_comm;
  int ki_tdev;
  int ki_rusage;
  int ki_rusage_ch;

  /* Offsets of struct rusage members.  */
  int ru_utime;
  int ru_stime;
  int ru_maxrss;
  int ru_minflt;
  int ru_majflt;
};

const struct kinfo_proc_layout kinfo_proc_layout_64 =
  {
    .ki_layout = 0x4,
    .ki_pid = 0x48,
    .ki_ppid = 0x4c,
    .ki_pgid = 0x50,
    .ki_tpgid = 0x54,
    .ki_sid = 0x58,
    .ki_tdev_freebsd11 = 0x64,
    .ki_sigignore = 0x88,
    .ki_sigcatch = 0x98,
    .ki_uid = 0xa8,
    .ki_ruid = 0xac,
    .ki_svuid = 0xb0,
    .ki_rgid = 0xb4,
    .ki_svgid = 0xb8,
    .ki_ngroups = 0xbc,
    .ki_groups = 0xc0,
    .ki_size = 0x100,
    .ki_rssize = 0x108,
    .ki_tsize = 0x118,
    .ki_dsize = 0x120,
    .ki_ssize = 0x128,
    .ki_start = 0x150,
    .ki_nice = 0x185,
    .ki_comm = 0x1bf,
    .ki_tdev = 0x230,
    .ki_rusage = 0x260,
    .ki_rusage_ch = 0x2f0,

    .ru_utime = 0x0,
    .ru_stime = 0x10,
    .ru_maxrss = 0x20,
    .ru_minflt = 0x40,
    .ru_majflt = 0x48,
  };
#endif

static struct gdbarch_data *dfly_gdbarch_data_handle;

struct dfly_gdbarch_data
  {
    struct type *siginfo_type;
  };

static void *
init_dfly_gdbarch_data (struct gdbarch *gdbarch)
{
  return GDBARCH_OBSTACK_ZALLOC (gdbarch, struct dfly_gdbarch_data);
}

static struct dfly_gdbarch_data *
get_dfly_gdbarch_data (struct gdbarch *gdbarch)
{
  return ((struct dfly_gdbarch_data *)
	  gdbarch_data (gdbarch, dfly_gdbarch_data_handle));
}

/* Per-program-space data for DragonFly architectures.  */
static const struct program_space_data *dfly_pspace_data_handle;

struct dfly_pspace_data
{
  /* Offsets in the runtime linker's 'Obj_Entry' structure.  */
  LONGEST off_linkmap;
  LONGEST off_tlsindex;
  bool rtld_offsets_valid;
};

static struct dfly_pspace_data *
get_dfly_pspace_data (struct program_space *pspace)
{
  struct dfly_pspace_data *data;

  data = ((struct dfly_pspace_data *)
	  program_space_data (pspace, dfly_pspace_data_handle));
  if (data == NULL)
    {
      data = XCNEW (struct dfly_pspace_data);
      set_program_space_data (pspace, dfly_pspace_data_handle, data);
    }

  return data;
}

/* The cleanup callback for DragonFly architecture per-program-space data.  */

static void
dfly_pspace_data_cleanup (struct program_space *pspace, void *data)
{
  xfree (data);
}

/* This is how we want PTIDs from core files to be printed.  */

static std::string
dfly_core_pid_to_str (struct gdbarch *gdbarch, ptid_t ptid)
{
  static char buf[80];

  if (ptid.lwp () != 0)
    {
      xsnprintf (buf, sizeof buf, "LWP %ld", ptid.lwp ());
      return buf;
    }

  return normal_pid_to_str (ptid);
}

/* Extract the name assigned to a thread from a core.  Returns the
   string in a static buffer.  */

#if 0
static const char *
dfly_core_thread_name (struct gdbarch *gdbarch, struct thread_info *thr)
{
  static char buf[80];
  struct bfd_section *section;
  bfd_size_type size;

  if (thr->ptid.lwp () != 0)
    {
      /* FreeBSD includes a NT_FREEBSD_THRMISC note for each thread
	 whose contents are defined by a "struct thrmisc" declared in
	 <sys/procfs.h> on FreeBSD.  The per-thread name is stored as
	 a null-terminated string as the first member of the
	 structure.  Rather than define the full structure here, just
	 extract the null-terminated name from the start of the
	 note.  */
      thread_section_name section_name (".thrmisc", thr->ptid);

      section = bfd_get_section_by_name (core_bfd, section_name.c_str ());
      if (section != NULL && bfd_section_size (core_bfd, section) > 0)
	{
	  /* Truncate the name if it is longer than "buf".  */
	  size = bfd_section_size (core_bfd, section);
	  if (size > sizeof buf - 1)
	    size = sizeof buf - 1;
	  if (bfd_get_section_contents (core_bfd, section, buf, (file_ptr) 0,
					size)
	      && buf[0] != '\0')
	    {
	      buf[size] = '\0';

	      /* Note that each thread will report the process command
		 as its thread name instead of an empty name if a name
		 has not been set explicitly.  Return a NULL name in
		 that case.  */
	      if (strcmp (buf, elf_tdata (core_bfd)->core->program) != 0)
		return buf;
	    }
	}
    }

  return NULL;
}
#endif

/* Implement the "core_xfer_siginfo" gdbarch method.  */

#if 0
static LONGEST
dfly_core_xfer_siginfo (struct gdbarch *gdbarch, gdb_byte *readbuf,
			ULONGEST offset, ULONGEST len)
{
  size_t siginfo_size;

  if (gdbarch_long_bit (gdbarch) == 32)
    siginfo_size = SIZE32_SIGINFO_T;
  else
    siginfo_size = SIZE64_SIGINFO_T;
  if (offset > siginfo_size)
    return -1;

  thread_section_name section_name (".note.freebsdcore.lwpinfo", inferior_ptid);
  asection *section = bfd_get_section_by_name (core_bfd, section_name.c_str ());
  if (section == NULL)
    return -1;

  gdb_byte buf[4];
  if (!bfd_get_section_contents (core_bfd, section, buf,
				 LWPINFO_OFFSET + LWPINFO_PL_FLAGS, 4))
    return -1;

  int pl_flags = extract_signed_integer (buf, 4, gdbarch_byte_order (gdbarch));
  if (!(pl_flags & PL_FLAG_SI))
    return -1;

  if (offset + len > siginfo_size)
    len = siginfo_size - offset;

  ULONGEST siginfo_offset;
  if (gdbarch_long_bit (gdbarch) == 32)
    siginfo_offset = LWPINFO_OFFSET + LWPINFO32_PL_SIGINFO;
  else
    siginfo_offset = LWPINFO_OFFSET + LWPINFO64_PL_SIGINFO;

  if (!bfd_get_section_contents (core_bfd, section, readbuf,
				 siginfo_offset + offset, len))
    return -1;

  return len;
}
#endif

#if 0
static int
find_signalled_thread (struct thread_info *info, void *data)
{
  if (info->suspend.stop_signal != GDB_SIGNAL_0
      && info->ptid.pid () == inferior_ptid.pid ())
    return 1;

  return 0;
}
#endif

/* Structure for passing information from
   dfly_collect_thread_registers via an iterator to
   dfly_collect_regset_section_cb. */

#if 0
struct dfly_collect_regset_section_cb_data
{
  const struct regcache *regcache;
  bfd *obfd;
  char *note_data;
  int *note_size;
  unsigned long lwp;
  enum gdb_signal stop_signal;
  int abort_iteration;
};
#endif

#if 0
static void
dfly_collect_regset_section_cb (const char *sect_name, int supply_size,
				int collect_size, const struct regset *regset,
				const char *human_name, void *cb_data)
{
  char *buf;
  struct dfly_collect_regset_section_cb_data *data
    = (struct dfly_collect_regset_section_cb_data *) cb_data;

  if (data->abort_iteration)
    return;

  gdb_assert (regset->collect_regset);

  buf = (char *) xmalloc (collect_size);
  regset->collect_regset (regset, data->regcache, -1, buf, collect_size);

  /* PRSTATUS still needs to be treated specially.  */
  if (strcmp (sect_name, ".reg") == 0)
    data->note_data = (char *) elfcore_write_prstatus
      (data->obfd, data->note_data, data->note_size, data->lwp,
       gdb_signal_to_host (data->stop_signal), buf);
  else
    data->note_data = (char *) elfcore_write_register_note
      (data->obfd, data->note_data, data->note_size,
       sect_name, buf, collect_size);
  xfree (buf);

  if (data->note_data == NULL)
    data->abort_iteration = 1;
}
#endif

/* Records the thread's register state for the corefile note
   section.  */

#if 0
static char *
dfly_collect_thread_registers (const struct regcache *regcache,
			       ptid_t ptid, bfd *obfd,
			       char *note_data, int *note_size,
			       enum gdb_signal stop_signal)
{
  struct gdbarch *gdbarch = regcache->arch ();
  struct dfly_collect_regset_section_cb_data data;

  data.regcache = regcache;
  data.obfd = obfd;
  data.note_data = note_data;
  data.note_size = note_size;
  data.stop_signal = stop_signal;
  data.abort_iteration = 0;
  data.lwp = ptid.lwp ();

  gdbarch_iterate_over_regset_sections (gdbarch,
					dfly_collect_regset_section_cb,
					&data, regcache);
  return data.note_data;
}
#endif

#if 0
struct dfly_corefile_thread_data
{
  struct gdbarch *gdbarch;
  bfd *obfd;
  char *note_data;
  int *note_size;
  enum gdb_signal stop_signal;
};
#endif

/* Records the thread's register state for the corefile note
   section.  */

#if 0
static void
dfly_corefile_thread (struct thread_info *info,
		      struct dfly_corefile_thread_data *args)
{
  struct regcache *regcache;

  regcache = get_thread_arch_regcache (info->ptid, args->gdbarch);

  target_fetch_registers (regcache, -1);

  args->note_data = dfly_collect_thread_registers
    (regcache, info->ptid, args->obfd, args->note_data,
     args->note_size, args->stop_signal);
}
#endif

/* Return a byte_vector containing the contents of a core dump note
   for the target object of type OBJECT.  If STRUCTSIZE is non-zero,
   the data is prefixed with a 32-bit integer size to match the format
   used in FreeBSD NT_PROCSTAT_* notes.  */

#if 0
static gdb::optional<gdb::byte_vector>
dfly_make_note_desc (enum target_object object, uint32_t structsize)
{
  gdb::optional<gdb::byte_vector> buf =
    target_read_alloc (current_top_target (), object, NULL);
  if (!buf || buf->empty ())
    return {};

  if (structsize == 0)
    return buf;

  gdb::byte_vector desc (sizeof (structsize) + buf->size ());
  memcpy (desc.data (), &structsize, sizeof (structsize));
  memcpy (desc.data () + sizeof (structsize), buf->data (), buf->size ());
  return desc;
}
#endif

/* Create appropriate note sections for a corefile, returning them in
   allocated memory.  */

#if 0
static char *
dfly_make_corefile_notes (struct gdbarch *gdbarch, bfd *obfd, int *note_size)
{
  struct dfly_corefile_thread_data thread_args;
  char *note_data = NULL;
  Elf_Internal_Ehdr *i_ehdrp;
  struct thread_info *curr_thr, *signalled_thr;

  gdb_assert (gdbarch_iterate_over_regset_sections_p (gdbarch));

  if (get_exec_file (0))
    {
      const char *fname = lbasename (get_exec_file (0));
      char *psargs = xstrdup (fname);

      if (get_inferior_args ())
	psargs = reconcat (psargs, psargs, " ", get_inferior_args (),
			   (char *) NULL);

      note_data = elfcore_write_prpsinfo (obfd, note_data, note_size,
					  fname, psargs);
    }

  /* Thread register information.  */
  TRY
    {
      update_thread_list ();
    }
  CATCH (e, RETURN_MASK_ERROR)
    {
      exception_print (gdb_stderr, e);
    }
  END_CATCH

  /* Like the kernel, prefer dumping the signalled thread first.
     "First thread" is what tools use to infer the signalled thread.
     In case there's more than one signalled thread, prefer the
     current thread, if it is signalled.  */
  curr_thr = inferior_thread ();
  if (curr_thr->suspend.stop_signal != GDB_SIGNAL_0)
    signalled_thr = curr_thr;
  else
    {
      signalled_thr = iterate_over_threads (find_signalled_thread, NULL);
      if (signalled_thr == NULL)
	signalled_thr = curr_thr;
    }

  thread_args.gdbarch = gdbarch;
  thread_args.obfd = obfd;
  thread_args.note_data = note_data;
  thread_args.note_size = note_size;
  thread_args.stop_signal = signalled_thr->suspend.stop_signal;

  dfly_corefile_thread (signalled_thr, &thread_args);
  for (thread_info *thr : current_inferior ()->non_exited_threads ())
    {
      if (thr == signalled_thr)
	continue;

      dfly_corefile_thread (thr, &thread_args);
    }

  note_data = thread_args.note_data;

  /* Auxiliary vector.  */
  uint32_t structsize = gdbarch_ptr_bit (gdbarch) / 4; /* Elf_Auxinfo  */
  gdb::optional<gdb::byte_vector> note_desc =
    dfly_make_note_desc (TARGET_OBJECT_AUXV, structsize);
  if (note_desc && !note_desc->empty ())
    {
      note_data = elfcore_write_note (obfd, note_data, note_size, "FreeBSD",
				      NT_FREEBSD_PROCSTAT_AUXV,
				      note_desc->data (), note_desc->size ());
      if (!note_data)
	return NULL;
    }

  /* Virtual memory mappings.  */
  note_desc = dfly_make_note_desc (TARGET_OBJECT_FREEBSD_VMMAP, 0);
  if (note_desc && !note_desc->empty ())
    {
      note_data = elfcore_write_note (obfd, note_data, note_size, "FreeBSD",
				      NT_FREEBSD_PROCSTAT_VMMAP,
				      note_desc->data (), note_desc->size ());
      if (!note_data)
	return NULL;
    }

  note_desc = dfly_make_note_desc (TARGET_OBJECT_FREEBSD_PS_STRINGS, 0);
  if (note_desc && !note_desc->empty ())
    {
      note_data = elfcore_write_note (obfd, note_data, note_size, "FreeBSD",
				      NT_FREEBSD_PROCSTAT_PSSTRINGS,
				      note_desc->data (), note_desc->size ());
      if (!note_data)
	return NULL;
    }

  return note_data;
}
#endif

/* Helper function to generate the file descriptor description for a
   single open file in 'info proc files'.  */

#if 0
static const char *
dfly_file_fd (int kf_fd)
{
  switch (kf_fd)
    {
    case KINFO_FILE_FD_TYPE_CWD:
      return "cwd";
    case KINFO_FILE_FD_TYPE_ROOT:
      return "root";
    case KINFO_FILE_FD_TYPE_JAIL:
      return "jail";
    case KINFO_FILE_FD_TYPE_TRACE:
      return "trace";
    case KINFO_FILE_FD_TYPE_TEXT:
      return "text";
    case KINFO_FILE_FD_TYPE_CTTY:
      return "ctty";
    default:
      return int_string (kf_fd, 10, 1, 0, 0);
    }
}
#endif

/* Helper function to generate the file type for a single open file in
   'info proc files'.  */

#if 0
static const char *
dfly_file_type (int kf_type, int kf_vnode_type)
{
  switch (kf_type)
    {
    case KINFO_FILE_TYPE_VNODE:
      switch (kf_vnode_type)
	{
	case KINFO_FILE_VTYPE_VREG:
	  return "file";
	case KINFO_FILE_VTYPE_VDIR:
	  return "dir";
	case KINFO_FILE_VTYPE_VCHR:
	  return "chr";
	case KINFO_FILE_VTYPE_VLNK:
	  return "link";
	case KINFO_FILE_VTYPE_VSOCK:
	  return "socket";
	case KINFO_FILE_VTYPE_VFIFO:
	  return "fifo";
	default:
	  {
	    char *str = get_print_cell ();

	    xsnprintf (str, PRINT_CELL_SIZE, "vn:%d", kf_vnode_type);
	    return str;
	  }
	}
    case KINFO_FILE_TYPE_SOCKET:
      return "socket";
    case KINFO_FILE_TYPE_PIPE:
      return "pipe";
    case KINFO_FILE_TYPE_FIFO:
      return "fifo";
    case KINFO_FILE_TYPE_KQUEUE:
      return "kqueue";
    case KINFO_FILE_TYPE_CRYPTO:
      return "crypto";
    case KINFO_FILE_TYPE_MQUEUE:
      return "mqueue";
    case KINFO_FILE_TYPE_SHM:
      return "shm";
    case KINFO_FILE_TYPE_SEM:
      return "sem";
    case KINFO_FILE_TYPE_PTS:
      return "pts";
    case KINFO_FILE_TYPE_PROCDESC:
      return "proc";
    default:
      return int_string (kf_type, 10, 1, 0, 0);
    }
}
#endif

/* Helper function to generate the file flags for a single open file in
   'info proc files'.  */

#if 0
static const char *
dfly_file_flags (int kf_flags)
{
  static char file_flags[10];

  file_flags[0] = (kf_flags & KINFO_FILE_FLAG_READ) ? 'r' : '-';
  file_flags[1] = (kf_flags & KINFO_FILE_FLAG_WRITE) ? 'w' : '-';
  file_flags[2] = (kf_flags & KINFO_FILE_FLAG_EXEC) ? 'x' : '-';
  file_flags[3] = (kf_flags & KINFO_FILE_FLAG_APPEND) ? 'a' : '-';
  file_flags[4] = (kf_flags & KINFO_FILE_FLAG_ASYNC) ? 's' : '-';
  file_flags[5] = (kf_flags & KINFO_FILE_FLAG_FSYNC) ? 'f' : '-';
  file_flags[6] = (kf_flags & KINFO_FILE_FLAG_NONBLOCK) ? 'n' : '-';
  file_flags[7] = (kf_flags & KINFO_FILE_FLAG_DIRECT) ? 'd' : '-';
  file_flags[8] = (kf_flags & KINFO_FILE_FLAG_HASLOCK) ? 'l' : '-';
  file_flags[9] = '\0';

  return file_flags;
}
#endif

/* Helper function to generate the name of an IP protocol.  */

static const char *
dfly_ipproto (int protocol)
{
  switch (protocol)
    {
    case DFLY_IPPROTO_ICMP:
      return "icmp";
    case DFLY_IPPROTO_TCP:
      return "tcp";
    case DFLY_IPPROTO_UDP:
      return "udp";
    default:
      {
	char *str = get_print_cell ();

	xsnprintf (str, PRINT_CELL_SIZE, "ip<%d>", protocol);
	return str;
      }
    }
}

/* Helper function to print out an IPv4 socket address.  */

static void
dfly_print_sockaddr_in (const void *sockaddr)
{
  const struct dfly_sockaddr_in *sin =
    reinterpret_cast<const struct dfly_sockaddr_in *> (sockaddr);
  char buf[INET_ADDRSTRLEN];

  if (inet_ntop (AF_INET, sin->sin_addr, buf, sizeof buf) == nullptr)
    error (_("Failed to format IPv4 address"));
  printf_filtered ("%s:%u", buf,
		   (sin->sin_port[0] << 8) | sin->sin_port[1]);
}

/* Helper function to print out an IPv6 socket address.  */

static void
dfly_print_sockaddr_in6 (const void *sockaddr)
{
  const struct dfly_sockaddr_in6 *sin6 =
    reinterpret_cast<const struct dfly_sockaddr_in6 *> (sockaddr);
  char buf[INET6_ADDRSTRLEN];

  if (inet_ntop (AF_INET6, sin6->sin6_addr, buf, sizeof buf) == nullptr)
    error (_("Failed to format IPv6 address"));
  printf_filtered ("%s.%u", buf,
		   (sin6->sin6_port[0] << 8) | sin6->sin6_port[1]);
}

/* See dfly-tdep.h.  */

#if 0
void
dfly_info_proc_files_header ()
{
  printf_filtered (_("Open files:\n\n"));
  printf_filtered ("  %6s %6s %10s %9s %s\n",
		   "FD", "Type", "Offset", "Flags  ", "Name");
}
#endif

/* See dfly-tdep.h.  */

#if 0
void
dfly_info_proc_files_entry (int kf_type, int kf_fd, int kf_flags,
			    LONGEST kf_offset, int kf_vnode_type,
			    int kf_sock_domain, int kf_sock_type,
			    int kf_sock_protocol, const void *kf_sa_local,
			    const void *kf_sa_peer, const void *kf_path)
{
  printf_filtered ("  %6s %6s %10s %8s ",
		   dfly_file_fd (kf_fd),
		   dfly_file_type (kf_type, kf_vnode_type),
		   kf_offset > -1 ? hex_string (kf_offset) : "-",
		   dfly_file_flags (kf_flags));
  if (kf_type == KINFO_FILE_TYPE_SOCKET)
    {
      switch (kf_sock_domain)
	{
	case DFLY_AF_UNIX:
	  {
	    switch (kf_sock_type)
	      {
	      case DFLY_SOCK_STREAM:
		printf_filtered ("unix stream:");
		break;
	      case DFLY_SOCK_DGRAM:
		printf_filtered ("unix dgram:");
		break;
	      case DFLY_SOCK_SEQPACKET:
		printf_filtered ("unix seqpacket:");
		break;
	      default:
		printf_filtered ("unix <%d>:", kf_sock_type);
		break;
	      }

	    /* For local sockets, print out the first non-nul path
	       rather than both paths.  */
	    const struct dfly_sockaddr_un *sun
	      = reinterpret_cast<const struct dfly_sockaddr_un *> (kf_sa_local);
	    if (sun->sun_path[0] == 0)
	      sun = reinterpret_cast<const struct dfly_sockaddr_un *>
		(kf_sa_peer);
	    printf_filtered ("%s", sun->sun_path);
	    break;
	  }
	case DFLY_AF_INET:
	  printf_filtered ("%s4 ", dfly_ipproto (kf_sock_protocol));
	  dfly_print_sockaddr_in (kf_sa_local);
	  printf_filtered (" -> ");
	  dfly_print_sockaddr_in (kf_sa_peer);
	  break;
	case DFLY_AF_INET6:
	  printf_filtered ("%s6 ", dfly_ipproto (kf_sock_protocol));
	  dfly_print_sockaddr_in6 (kf_sa_local);
	  printf_filtered (" -> ");
	  dfly_print_sockaddr_in6 (kf_sa_peer);
	  break;
	}
    }
  else
    printf_filtered ("%s", reinterpret_cast<const char *> (kf_path));
  printf_filtered ("\n");
}
#endif

/* Implement "info proc files" for a corefile.  */

#if 0
static void
dfly_core_info_proc_files (struct gdbarch *gdbarch)
{
  asection *section
    = bfd_get_section_by_name (core_bfd, ".note.freebsdcore.files");
  if (section == NULL)
    {
      warning (_("unable to find open files in core file"));
      return;
    }

  size_t note_size = bfd_get_section_size (section);
  if (note_size < 4)
    error (_("malformed core note - too short for header"));

  gdb::def_vector<unsigned char> contents (note_size);
  if (!bfd_get_section_contents (core_bfd, section, contents.data (),
				 0, note_size))
    error (_("could not get core note contents"));

  unsigned char *descdata = contents.data ();
  unsigned char *descend = descdata + note_size;

  /* Skip over the structure size.  */
  descdata += 4;

  dfly_info_proc_files_header ();

  while (descdata + KF_PATH < descend)
    {
      ULONGEST structsize = bfd_get_32 (core_bfd, descdata + KF_STRUCTSIZE);
      if (structsize < KF_PATH)
	error (_("malformed core note - file structure too small"));

      LONGEST type = bfd_get_signed_32 (core_bfd, descdata + KF_TYPE);
      LONGEST fd = bfd_get_signed_32 (core_bfd, descdata + KF_FD);
      LONGEST flags = bfd_get_signed_32 (core_bfd, descdata + KF_FLAGS);
      LONGEST offset = bfd_get_signed_64 (core_bfd, descdata + KF_OFFSET);
      LONGEST vnode_type = bfd_get_signed_32 (core_bfd,
					      descdata + KF_VNODE_TYPE);
      LONGEST sock_domain = bfd_get_signed_32 (core_bfd,
					       descdata + KF_SOCK_DOMAIN);
      LONGEST sock_type = bfd_get_signed_32 (core_bfd, descdata + KF_SOCK_TYPE);
      LONGEST sock_protocol = bfd_get_signed_32 (core_bfd,
						 descdata + KF_SOCK_PROTOCOL);
      dfly_info_proc_files_entry (type, fd, flags, offset, vnode_type,
				  sock_domain, sock_type, sock_protocol,
				  descdata + KF_SA_LOCAL, descdata + KF_SA_PEER,
				  descdata + KF_PATH);

      descdata += structsize;
    }
}
#endif

/* Helper function to generate mappings flags for a single VM map
   entry in 'info proc mappings'.  */

#if 0
static const char *
dfly_vm_map_entry_flags (int kve_flags, int kve_protection)
{
  static char vm_flags[9];

  vm_flags[0] = (kve_protection & KINFO_VME_PROT_READ) ? 'r' : '-';
  vm_flags[1] = (kve_protection & KINFO_VME_PROT_WRITE) ? 'w' : '-';
  vm_flags[2] = (kve_protection & KINFO_VME_PROT_EXEC) ? 'x' : '-';
  vm_flags[3] = ' ';
  vm_flags[4] = (kve_flags & KINFO_VME_FLAG_COW) ? 'C' : '-';
  vm_flags[5] = (kve_flags & KINFO_VME_FLAG_NEEDS_COPY) ? 'N' : '-';
  vm_flags[6] = (kve_flags & KINFO_VME_FLAG_SUPER) ? 'S' : '-';
  vm_flags[7] = (kve_flags & KINFO_VME_FLAG_GROWS_UP) ? 'U'
    : (kve_flags & KINFO_VME_FLAG_GROWS_DOWN) ? 'D' : '-';
  vm_flags[8] = '\0';

  return vm_flags;
}
#endif

/* See dfly-tdep.h.  */

#if 0
void
dfly_info_proc_mappings_header (int addr_bit)
{
  printf_filtered (_("Mapped address spaces:\n\n"));
  if (addr_bit == 64)
    {
      printf_filtered ("  %18s %18s %10s %10s %9s %s\n",
		       "Start Addr",
		       "  End Addr",
		       "      Size", "    Offset", "Flags  ", "File");
    }
  else
    {
      printf_filtered ("\t%10s %10s %10s %10s %9s %s\n",
		       "Start Addr",
		       "  End Addr",
		       "      Size", "    Offset", "Flags  ", "File");
    }
}
#endif

/* See dfly-tdep.h.  */

#if 0
void
dfly_info_proc_mappings_entry (int addr_bit, ULONGEST kve_start,
			       ULONGEST kve_end, ULONGEST kve_offset,
			       int kve_flags, int kve_protection,
			       const void *kve_path)
{
  if (addr_bit == 64)
    {
      printf_filtered ("  %18s %18s %10s %10s %9s %s\n",
		       hex_string (kve_start),
		       hex_string (kve_end),
		       hex_string (kve_end - kve_start),
		       hex_string (kve_offset),
		       dfly_vm_map_entry_flags (kve_flags, kve_protection),
		       reinterpret_cast<const char *> (kve_path));
    }
  else
    {
      printf_filtered ("\t%10s %10s %10s %10s %9s %s\n",
		       hex_string (kve_start),
		       hex_string (kve_end),
		       hex_string (kve_end - kve_start),
		       hex_string (kve_offset),
		       dfly_vm_map_entry_flags (kve_flags, kve_protection),
		       reinterpret_cast<const char *> (kve_path));
    }
}
#endif

/* Implement "info proc mappings" for a corefile.  */

#if 0
static void
dfly_core_info_proc_mappings (struct gdbarch *gdbarch)
{
  asection *section;
  unsigned char *descdata, *descend;
  size_t note_size;

  section = bfd_get_section_by_name (core_bfd, ".note.freebsdcore.vmmap");
  if (section == NULL)
    {
      warning (_("unable to find mappings in core file"));
      return;
    }

  note_size = bfd_get_section_size (section);
  if (note_size < 4)
    error (_("malformed core note - too short for header"));

  gdb::def_vector<unsigned char> contents (note_size);
  if (!bfd_get_section_contents (core_bfd, section, contents.data (),
				 0, note_size))
    error (_("could not get core note contents"));

  descdata = contents.data ();
  descend = descdata + note_size;

  /* Skip over the structure size.  */
  descdata += 4;

  dfly_info_proc_mappings_header (gdbarch_addr_bit (gdbarch));
  while (descdata + KVE_PATH < descend)
    {
      ULONGEST structsize = bfd_get_32 (core_bfd, descdata + KVE_STRUCTSIZE);
      if (structsize < KVE_PATH)
	error (_("malformed core note - vmmap entry too small"));

      ULONGEST start = bfd_get_64 (core_bfd, descdata + KVE_START);
      ULONGEST end = bfd_get_64 (core_bfd, descdata + KVE_END);
      ULONGEST offset = bfd_get_64 (core_bfd, descdata + KVE_OFFSET);
      LONGEST flags = bfd_get_signed_32 (core_bfd, descdata + KVE_FLAGS);
      LONGEST prot = bfd_get_signed_32 (core_bfd, descdata + KVE_PROTECTION);
      dfly_info_proc_mappings_entry (gdbarch_addr_bit (gdbarch), start, end,
				     offset, flags, prot, descdata + KVE_PATH);

      descdata += structsize;
    }
}
#endif

/* Fetch the pathname of a vnode for a single file descriptor from the
   file table core note.  */

#if 0
static gdb::unique_xmalloc_ptr<char>
dfly_core_vnode_path (struct gdbarch *gdbarch, int fd)
{
  asection *section;
  unsigned char *descdata, *descend;
  size_t note_size;

  section = bfd_get_section_by_name (core_bfd, ".note.freebsdcore.files");
  if (section == NULL)
    return nullptr;

  note_size = bfd_get_section_size (section);
  if (note_size < 4)
    error (_("malformed core note - too short for header"));

  gdb::def_vector<unsigned char> contents (note_size);
  if (!bfd_get_section_contents (core_bfd, section, contents.data (),
				 0, note_size))
    error (_("could not get core note contents"));

  descdata = contents.data ();
  descend = descdata + note_size;

  /* Skip over the structure size.  */
  descdata += 4;

  while (descdata + KF_PATH < descend)
    {
      ULONGEST structsize;

      structsize = bfd_get_32 (core_bfd, descdata + KF_STRUCTSIZE);
      if (structsize < KF_PATH)
	error (_("malformed core note - file structure too small"));

      if (bfd_get_32 (core_bfd, descdata + KF_TYPE) == KINFO_FILE_TYPE_VNODE
	  && bfd_get_signed_32 (core_bfd, descdata + KF_FD) == fd)
	{
	  char *path = (char *) descdata + KF_PATH;
	  return gdb::unique_xmalloc_ptr<char> (xstrdup (path));
	}

      descdata += structsize;
    }
  return nullptr;
}
#endif

/* Helper function to read a struct timeval.  */

#if 0
static void
dfly_core_fetch_timeval (struct gdbarch *gdbarch, unsigned char *data,
			 LONGEST &sec, ULONGEST &usec)
{
  if (gdbarch_addr_bit (gdbarch) == 64)
    {
      sec = bfd_get_signed_64 (core_bfd, data);
      usec = bfd_get_64 (core_bfd, data + 8);
    }
  else if (bfd_get_arch (core_bfd) == bfd_arch_i386)
    {
      sec = bfd_get_signed_32 (core_bfd, data);
      usec = bfd_get_32 (core_bfd, data + 4);
    }
  else
    {
      sec = bfd_get_signed_64 (core_bfd, data);
      usec = bfd_get_32 (core_bfd, data + 8);
    }
}
#endif

/* Print out the contents of a signal set.  */

#if 0
static void
dfly_print_sigset (const char *descr, unsigned char *sigset)
{
  printf_filtered ("%s: ", descr);
  for (int i = 0; i < SIG_WORDS; i++)
    printf_filtered ("%08x ",
		     (unsigned int) bfd_get_32 (core_bfd, sigset + i * 4));
  printf_filtered ("\n");
}
#endif

/* Implement "info proc status" for a corefile.  */

#if 0
static void
dfly_core_info_proc_status (struct gdbarch *gdbarch)
{
  const struct kinfo_proc_layout *kp;
  asection *section;
  unsigned char *descdata;
  int addr_bit, long_bit;
  size_t note_size;
  ULONGEST value;
  LONGEST sec;

  section = bfd_get_section_by_name (core_bfd, ".note.freebsdcore.proc");
  if (section == NULL)
    {
      warning (_("unable to find process info in core file"));
      return;
    }

  addr_bit = gdbarch_addr_bit (gdbarch);
  if (addr_bit == 64)
    kp = &kinfo_proc_layout_64;
  else if (bfd_get_arch (core_bfd) == bfd_arch_i386)
    kp = &kinfo_proc_layout_i386;
  else
    kp = &kinfo_proc_layout_32;
  long_bit = gdbarch_long_bit (gdbarch);

  /*
   * Ensure that the note is large enough for all of the fields fetched
   * by this function.  In particular, the note must contain the 32-bit
   * structure size, then it must be long enough to access the last
   * field used (ki_rusage_ch.ru_majflt) which is the size of a long.
   */
  note_size = bfd_get_section_size (section);
  if (note_size < (4 + kp->ki_rusage_ch + kp->ru_majflt
		   + long_bit / TARGET_CHAR_BIT))
    error (_("malformed core note - too short"));

  gdb::def_vector<unsigned char> contents (note_size);
  if (!bfd_get_section_contents (core_bfd, section, contents.data (),
				 0, note_size))
    error (_("could not get core note contents"));

  descdata = contents.data ();

  /* Skip over the structure size.  */
  descdata += 4;

  /* Verify 'ki_layout' is 0.  */
  if (bfd_get_32 (core_bfd, descdata + kp->ki_layout) != 0)
    {
      warning (_("unsupported process information in core file"));
      return;
    }

  printf_filtered ("Name: %.19s\n", descdata + kp->ki_comm);
  printf_filtered ("Process ID: %s\n",
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_pid)));
  printf_filtered ("Parent process: %s\n",
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_ppid)));
  printf_filtered ("Process group: %s\n",
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_pgid)));
  printf_filtered ("Session id: %s\n",
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_sid)));

  /* FreeBSD 12.0 and later store a 64-bit dev_t at 'ki_tdev'.  Older
     kernels store a 32-bit dev_t at 'ki_tdev_freebsd11'.  In older
     kernels the 64-bit 'ki_tdev' field is in a reserved section of
     the structure that is cleared to zero.  Assume that a zero value
     in ki_tdev indicates a core dump from an older kernel and use the
     value in 'ki_tdev_freebsd11' instead.  */
  value = bfd_get_64 (core_bfd, descdata + kp->ki_tdev);
  if (value == 0)
    value = bfd_get_32 (core_bfd, descdata + kp->ki_tdev_freebsd11);
  printf_filtered ("TTY: %s\n", pulongest (value));
  printf_filtered ("TTY owner process group: %s\n",
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_tpgid)));
  printf_filtered ("User IDs (real, effective, saved): %s %s %s\n",
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_ruid)),
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_uid)),
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_svuid)));
  printf_filtered ("Group IDs (real, effective, saved): %s %s %s\n",
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_rgid)),
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_groups)),
		   pulongest (bfd_get_32 (core_bfd, descdata + kp->ki_svgid)));
  printf_filtered ("Groups: ");
  uint16_t ngroups = bfd_get_16 (core_bfd, descdata + kp->ki_ngroups);
  for (int i = 0; i < ngroups; i++)
    printf_filtered ("%s ",
		     pulongest (bfd_get_32 (core_bfd,
					    descdata + kp->ki_groups + i * 4)));
  printf_filtered ("\n");
  value = bfd_get (long_bit, core_bfd,
		   descdata + kp->ki_rusage + kp->ru_minflt);
  printf_filtered ("Minor faults (no memory page): %s\n", pulongest (value));
  value = bfd_get (long_bit, core_bfd,
		   descdata + kp->ki_rusage_ch + kp->ru_minflt);
  printf_filtered ("Minor faults, children: %s\n", pulongest (value));
  value = bfd_get (long_bit, core_bfd,
		   descdata + kp->ki_rusage + kp->ru_majflt);
  printf_filtered ("Major faults (memory page faults): %s\n",
		   pulongest (value));
  value = bfd_get (long_bit, core_bfd,
		   descdata + kp->ki_rusage_ch + kp->ru_majflt);
  printf_filtered ("Major faults, children: %s\n", pulongest (value));
  dfly_core_fetch_timeval (gdbarch,
			   descdata + kp->ki_rusage + kp->ru_utime,
			   sec, value);
  printf_filtered ("utime: %s.%06d\n", plongest (sec), (int) value);
  dfly_core_fetch_timeval (gdbarch,
			   descdata + kp->ki_rusage + kp->ru_stime,
			   sec, value);
  printf_filtered ("stime: %s.%06d\n", plongest (sec), (int) value);
  dfly_core_fetch_timeval (gdbarch,
			   descdata + kp->ki_rusage_ch + kp->ru_utime,
			   sec, value);
  printf_filtered ("utime, children: %s.%06d\n", plongest (sec), (int) value);
  dfly_core_fetch_timeval (gdbarch,
			   descdata + kp->ki_rusage_ch + kp->ru_stime,
			   sec, value);
  printf_filtered ("stime, children: %s.%06d\n", plongest (sec), (int) value);
  printf_filtered ("'nice' value: %d\n",
		   bfd_get_signed_8 (core_bfd, descdata + kp->ki_nice));
  dfly_core_fetch_timeval (gdbarch, descdata + kp->ki_start, sec, value);
  printf_filtered ("Start time: %s.%06d\n", plongest (sec), (int) value);
  printf_filtered ("Virtual memory size: %s kB\n",
		   pulongest (bfd_get (addr_bit, core_bfd,
				       descdata + kp->ki_size) / 1024));
  printf_filtered ("Data size: %s pages\n",
		   pulongest (bfd_get (addr_bit, core_bfd,
				       descdata + kp->ki_dsize)));
  printf_filtered ("Stack size: %s pages\n",
		   pulongest (bfd_get (addr_bit, core_bfd,
				       descdata + kp->ki_ssize)));
  printf_filtered ("Text size: %s pages\n",
		   pulongest (bfd_get (addr_bit, core_bfd,
				       descdata + kp->ki_tsize)));
  printf_filtered ("Resident set size: %s pages\n",
		   pulongest (bfd_get (addr_bit, core_bfd,
				       descdata + kp->ki_rssize)));
  printf_filtered ("Maximum RSS: %s pages\n",
		   pulongest (bfd_get (long_bit, core_bfd,
				       descdata + kp->ki_rusage
				       + kp->ru_maxrss)));
  dfly_print_sigset ("Ignored Signals", descdata + kp->ki_sigignore);
  dfly_print_sigset ("Caught Signals", descdata + kp->ki_sigcatch);
}
#endif

/* Implement the "core_info_proc" gdbarch method.  */

#if 0
static void
dfly_core_info_proc (struct gdbarch *gdbarch, const char *args,
		     enum info_proc_what what)
{
  bool do_cmdline = false;
  bool do_cwd = false;
  bool do_exe = false;
  bool do_files = false;
  bool do_mappings = false;
  bool do_status = false;
  int pid;

  switch (what)
    {
    case IP_MINIMAL:
      do_cmdline = true;
      do_cwd = true;
      do_exe = true;
      break;
    case IP_MAPPINGS:
      do_mappings = true;
      break;
    case IP_STATUS:
    case IP_STAT:
      do_status = true;
      break;
    case IP_CMDLINE:
      do_cmdline = true;
      break;
    case IP_EXE:
      do_exe = true;
      break;
    case IP_CWD:
      do_cwd = true;
      break;
    case IP_FILES:
      do_files = true;
      break;
    case IP_ALL:
      do_cmdline = true;
      do_cwd = true;
      do_exe = true;
      do_files = true;
      do_mappings = true;
      do_status = true;
      break;
    default:
      return;
    }

  pid = bfd_core_file_pid (core_bfd);
  if (pid != 0)
    printf_filtered (_("process %d\n"), pid);

  if (do_cmdline)
    {
      const char *cmdline;

      cmdline = bfd_core_file_failing_command (core_bfd);
      if (cmdline)
	printf_filtered ("cmdline = '%s'\n", cmdline);
      else
	warning (_("Command line unavailable"));
    }
  if (do_cwd)
    {
      gdb::unique_xmalloc_ptr<char> cwd =
	dfly_core_vnode_path (gdbarch, KINFO_FILE_FD_TYPE_CWD);
      if (cwd)
	printf_filtered ("cwd = '%s'\n", cwd.get ());
      else
	warning (_("unable to read current working directory"));
    }
  if (do_exe)
    {
      gdb::unique_xmalloc_ptr<char> exe =
	dfly_core_vnode_path (gdbarch, KINFO_FILE_FD_TYPE_TEXT);
      if (exe)
	printf_filtered ("exe = '%s'\n", exe.get ());
      else
	warning (_("unable to read executable path name"));
    }
  if (do_files)
    dfly_core_info_proc_files (gdbarch);
  if (do_mappings)
    dfly_core_info_proc_mappings (gdbarch);
  if (do_status)
    dfly_core_info_proc_status (gdbarch);
}
#endif

/* Print descriptions of FreeBSD-specific AUXV entries to FILE.  */

#if 0
static void
dfly_print_auxv_entry (struct gdbarch *gdbarch, struct ui_file *file,
		       CORE_ADDR type, CORE_ADDR val)
{
  const char *name = "???";
  const char *description = "";
  enum auxv_format format = AUXV_FORMAT_HEX;

  switch (type)
    {
    case AT_NULL:
    case AT_IGNORE:
    case AT_EXECFD:
    case AT_PHDR:
    case AT_PHENT:
    case AT_PHNUM:
    case AT_PAGESZ:
    case AT_BASE:
    case AT_FLAGS:
    case AT_ENTRY:
    case AT_NOTELF:
    case AT_UID:
    case AT_EUID:
    case AT_GID:
    case AT_EGID:
      default_print_auxv_entry (gdbarch, file, type, val);
      return;
#define _TAGNAME(tag) #tag
#define TAGNAME(tag) _TAGNAME(AT_##tag)
#define TAG(tag, text, kind) \
      case AT_FREEBSD_##tag: name = TAGNAME(tag); description = text; format = kind; break
      TAG (EXECPATH, _("Executable path"), AUXV_FORMAT_STR);
      TAG (CANARY, _("Canary for SSP"), AUXV_FORMAT_HEX);
      TAG (CANARYLEN, ("Length of the SSP canary"), AUXV_FORMAT_DEC);
      TAG (OSRELDATE, _("OSRELDATE"), AUXV_FORMAT_DEC);
      TAG (NCPUS, _("Number of CPUs"), AUXV_FORMAT_DEC);
      TAG (PAGESIZES, _("Pagesizes"), AUXV_FORMAT_HEX);
      TAG (PAGESIZESLEN, _("Number of pagesizes"), AUXV_FORMAT_DEC);
      TAG (TIMEKEEP, _("Pointer to timehands"), AUXV_FORMAT_HEX);
      TAG (STACKPROT, _("Initial stack protection"), AUXV_FORMAT_HEX);
      TAG (EHDRFLAGS, _("ELF header e_flags"), AUXV_FORMAT_HEX);
      TAG (HWCAP, _("Machine-dependent CPU capability hints"), AUXV_FORMAT_HEX);
      TAG (HWCAP2, _("Extension of AT_HWCAP"), AUXV_FORMAT_HEX);
    }

  fprint_auxv_entry (file, name, description, format, type, val);
}
#endif

/* Implement the "get_siginfo_type" gdbarch method.  */

#if 0
static struct type *
dfly_get_siginfo_type (struct gdbarch *gdbarch)
{
  struct dfly_gdbarch_data *dfly_gdbarch_data;
  struct type *int_type, *int32_type, *uint32_type, *long_type, *void_ptr_type;
  struct type *uid_type, *pid_type;
  struct type *sigval_type, *reason_type;
  struct type *siginfo_type;
  struct type *type;

  dfly_gdbarch_data = get_dfly_gdbarch_data (gdbarch);
  if (dfly_gdbarch_data->siginfo_type != NULL)
    return dfly_gdbarch_data->siginfo_type;

  int_type = arch_integer_type (gdbarch, gdbarch_int_bit (gdbarch),
				0, "int");
  int32_type = arch_integer_type (gdbarch, 32, 0, "int32_t");
  uint32_type = arch_integer_type (gdbarch, 32, 1, "uint32_t");
  long_type = arch_integer_type (gdbarch, gdbarch_long_bit (gdbarch),
				 0, "long");
  void_ptr_type = lookup_pointer_type (builtin_type (gdbarch)->builtin_void);

  /* union sigval */
  sigval_type = arch_composite_type (gdbarch, NULL, TYPE_CODE_UNION);
  TYPE_NAME (sigval_type) = xstrdup ("sigval");
  append_composite_type_field (sigval_type, "sival_int", int_type);
  append_composite_type_field (sigval_type, "sival_ptr", void_ptr_type);

  /* __pid_t */
  pid_type = arch_type (gdbarch, TYPE_CODE_TYPEDEF,
			TYPE_LENGTH (int32_type) * TARGET_CHAR_BIT, "__pid_t");
  TYPE_TARGET_TYPE (pid_type) = int32_type;
  TYPE_TARGET_STUB (pid_type) = 1;

  /* __uid_t */
  uid_type = arch_type (gdbarch, TYPE_CODE_TYPEDEF,
			TYPE_LENGTH (uint32_type) * TARGET_CHAR_BIT,
			"__uid_t");
  TYPE_TARGET_TYPE (uid_type) = uint32_type;
  TYPE_TARGET_STUB (uid_type) = 1;

  /* _reason */
  reason_type = arch_composite_type (gdbarch, NULL, TYPE_CODE_UNION);

  /* _fault */
  type = arch_composite_type (gdbarch, NULL, TYPE_CODE_STRUCT);
  append_composite_type_field (type, "si_trapno", int_type);
  append_composite_type_field (reason_type, "_fault", type);

  /* _timer */
  type = arch_composite_type (gdbarch, NULL, TYPE_CODE_STRUCT);
  append_composite_type_field (type, "si_timerid", int_type);
  append_composite_type_field (type, "si_overrun", int_type);
  append_composite_type_field (reason_type, "_timer", type);

  /* _mesgq */
  type = arch_composite_type (gdbarch, NULL, TYPE_CODE_STRUCT);
  append_composite_type_field (type, "si_mqd", int_type);
  append_composite_type_field (reason_type, "_mesgq", type);

  /* _poll */
  type = arch_composite_type (gdbarch, NULL, TYPE_CODE_STRUCT);
  append_composite_type_field (type, "si_band", long_type);
  append_composite_type_field (reason_type, "_poll", type);

  /* __spare__ */
  type = arch_composite_type (gdbarch, NULL, TYPE_CODE_STRUCT);
  append_composite_type_field (type, "__spare1__", long_type);
  append_composite_type_field (type, "__spare2__",
			       init_vector_type (int_type, 7));
  append_composite_type_field (reason_type, "__spare__", type);

  /* struct siginfo */
  siginfo_type = arch_composite_type (gdbarch, NULL, TYPE_CODE_STRUCT);
  TYPE_NAME (siginfo_type) = xstrdup ("siginfo");
  append_composite_type_field (siginfo_type, "si_signo", int_type);
  append_composite_type_field (siginfo_type, "si_errno", int_type);
  append_composite_type_field (siginfo_type, "si_code", int_type);
  append_composite_type_field (siginfo_type, "si_pid", pid_type);
  append_composite_type_field (siginfo_type, "si_uid", uid_type);
  append_composite_type_field (siginfo_type, "si_status", int_type);
  append_composite_type_field (siginfo_type, "si_addr", void_ptr_type);
  append_composite_type_field (siginfo_type, "si_value", sigval_type);
  append_composite_type_field (siginfo_type, "_reason", reason_type);

  dfly_gdbarch_data->siginfo_type = siginfo_type;

  return siginfo_type;
}
#endif

/* Implement the "gdb_signal_from_target" gdbarch method.  */

static enum gdb_signal
dfly_gdb_signal_from_target (struct gdbarch *gdbarch, int signal)
{
  switch (signal)
    {
    case 0:
      return GDB_SIGNAL_0;

    case DRAGONFLY_SIGHUP:
      return GDB_SIGNAL_HUP;

    case DRAGONFLY_SIGINT:
      return GDB_SIGNAL_INT;

    case DRAGONFLY_SIGQUIT:
      return GDB_SIGNAL_QUIT;

    case DRAGONFLY_SIGILL:
      return GDB_SIGNAL_ILL;

    case DRAGONFLY_SIGTRAP:
      return GDB_SIGNAL_TRAP;

    case DRAGONFLY_SIGABRT:
      return GDB_SIGNAL_ABRT;

    case DRAGONFLY_SIGEMT:
      return GDB_SIGNAL_EMT;

    case DRAGONFLY_SIGFPE:
      return GDB_SIGNAL_FPE;

    case DRAGONFLY_SIGKILL:
      return GDB_SIGNAL_KILL;

    case DRAGONFLY_SIGBUS:
      return GDB_SIGNAL_BUS;

    case DRAGONFLY_SIGSEGV:
      return GDB_SIGNAL_SEGV;

    case DRAGONFLY_SIGSYS:
      return GDB_SIGNAL_SYS;

    case DRAGONFLY_SIGPIPE:
      return GDB_SIGNAL_PIPE;

    case DRAGONFLY_SIGALRM:
      return GDB_SIGNAL_ALRM;

    case DRAGONFLY_SIGTERM:
      return GDB_SIGNAL_TERM;

    case DRAGONFLY_SIGURG:
      return GDB_SIGNAL_URG;

    case DRAGONFLY_SIGSTOP:
      return GDB_SIGNAL_STOP;

    case DRAGONFLY_SIGTSTP:
      return GDB_SIGNAL_TSTP;

    case DRAGONFLY_SIGCONT:
      return GDB_SIGNAL_CONT;

    case DRAGONFLY_SIGCHLD:
      return GDB_SIGNAL_CHLD;

    case DRAGONFLY_SIGTTIN:
      return GDB_SIGNAL_TTIN;

    case DRAGONFLY_SIGTTOU:
      return GDB_SIGNAL_TTOU;

    case DRAGONFLY_SIGIO:
      return GDB_SIGNAL_IO;

    case DRAGONFLY_SIGXCPU:
      return GDB_SIGNAL_XCPU;

    case DRAGONFLY_SIGXFSZ:
      return GDB_SIGNAL_XFSZ;

    case DRAGONFLY_SIGVTALRM:
      return GDB_SIGNAL_VTALRM;

    case DRAGONFLY_SIGPROF:
      return GDB_SIGNAL_PROF;

    case DRAGONFLY_SIGWINCH:
      return GDB_SIGNAL_WINCH;

    case DRAGONFLY_SIGINFO:
      return GDB_SIGNAL_INFO;

    case DRAGONFLY_SIGUSR1:
      return GDB_SIGNAL_USR1;

    case DRAGONFLY_SIGUSR2:
      return GDB_SIGNAL_USR2;

#if 0
    /* SIGTHR is the same as SIGLWP on FreeBSD. */
    case FREEBSD_SIGTHR:
      return GDB_SIGNAL_LWP;

    case FREEBSD_SIGLIBRT:
      return GDB_SIGNAL_LIBRT;
#endif
    }

#if 0
  if (signal >= FREEBSD_SIGRTMIN && signal <= FREEBSD_SIGRTMAX)
    {
      int offset = signal - FREEBSD_SIGRTMIN;

      return (enum gdb_signal) ((int) GDB_SIGNAL_REALTIME_65 + offset);
    }
#endif

  return GDB_SIGNAL_UNKNOWN;
}

/* Implement the "gdb_signal_to_target" gdbarch method.  */

static int
dfly_gdb_signal_to_target (struct gdbarch *gdbarch,
                enum gdb_signal signal)
{
  switch (signal)
    {
    case GDB_SIGNAL_0:
      return 0;

    case GDB_SIGNAL_HUP:
      return DRAGONFLY_SIGHUP;

    case GDB_SIGNAL_INT:
      return DRAGONFLY_SIGINT;

    case GDB_SIGNAL_QUIT:
      return DRAGONFLY_SIGQUIT;

    case GDB_SIGNAL_ILL:
      return DRAGONFLY_SIGILL;

    case GDB_SIGNAL_TRAP:
      return DRAGONFLY_SIGTRAP;

    case GDB_SIGNAL_ABRT:
      return DRAGONFLY_SIGABRT;

    case GDB_SIGNAL_EMT:
      return DRAGONFLY_SIGEMT;

    case GDB_SIGNAL_FPE:
      return DRAGONFLY_SIGFPE;

    case GDB_SIGNAL_KILL:
      return DRAGONFLY_SIGKILL;

    case GDB_SIGNAL_BUS:
      return DRAGONFLY_SIGBUS;

    case GDB_SIGNAL_SEGV:
      return DRAGONFLY_SIGSEGV;

    case GDB_SIGNAL_SYS:
      return DRAGONFLY_SIGSYS;

    case GDB_SIGNAL_PIPE:
      return DRAGONFLY_SIGPIPE;

    case GDB_SIGNAL_ALRM:
      return DRAGONFLY_SIGALRM;

    case GDB_SIGNAL_TERM:
      return DRAGONFLY_SIGTERM;

    case GDB_SIGNAL_URG:
      return DRAGONFLY_SIGURG;

    case GDB_SIGNAL_STOP:
      return DRAGONFLY_SIGSTOP;

    case GDB_SIGNAL_TSTP:
      return DRAGONFLY_SIGTSTP;

    case GDB_SIGNAL_CONT:
      return DRAGONFLY_SIGCONT;

    case GDB_SIGNAL_CHLD:
      return DRAGONFLY_SIGCHLD;

    case GDB_SIGNAL_TTIN:
      return DRAGONFLY_SIGTTIN;

    case GDB_SIGNAL_TTOU:
      return DRAGONFLY_SIGTTOU;

    case GDB_SIGNAL_IO:
      return DRAGONFLY_SIGIO;

    case GDB_SIGNAL_XCPU:
      return DRAGONFLY_SIGXCPU;

    case GDB_SIGNAL_XFSZ:
      return DRAGONFLY_SIGXFSZ;

    case GDB_SIGNAL_VTALRM:
      return DRAGONFLY_SIGVTALRM;

    case GDB_SIGNAL_PROF:
      return DRAGONFLY_SIGPROF;

    case GDB_SIGNAL_WINCH:
      return DRAGONFLY_SIGWINCH;

    case GDB_SIGNAL_INFO:
      return DRAGONFLY_SIGINFO;

    case GDB_SIGNAL_USR1:
      return DRAGONFLY_SIGUSR1;

    case GDB_SIGNAL_USR2:
      return DRAGONFLY_SIGUSR2;

#if 0
    case GDB_SIGNAL_LWP:
      return FREEBSD_SIGTHR;

    case GDB_SIGNAL_LIBRT:
      return FREEBSD_SIGLIBRT;
#endif
    }

#if 0
  if (signal >= GDB_SIGNAL_REALTIME_65
      && signal <= GDB_SIGNAL_REALTIME_126)
    {
      int offset = signal - GDB_SIGNAL_REALTIME_65;

      return FREEBSD_SIGRTMIN + offset;
    }
#endif

  return -1;
}

#if 0
/* Implement the "get_syscall_number" gdbarch method.  */

static LONGEST
dfly_get_syscall_number (struct gdbarch *gdbarch, thread_info *thread)
{

  /* FreeBSD doesn't use gdbarch_get_syscall_number since FreeBSD
     native targets fetch the system call number from the
     'pl_syscall_code' member of struct ptrace_lwpinfo in dfly_wait.
     However, system call catching requires this function to be
     set.  */

  internal_error (__FILE__, __LINE__, _("dfly_get_sycall_number called"));
}
#endif

/* Read an integer symbol value from the current target.  */

#if 0
static LONGEST
dfly_read_integer_by_name (struct gdbarch *gdbarch, const char *name)
{
  bound_minimal_symbol ms = lookup_minimal_symbol (name, NULL, NULL);
  if (ms.minsym == NULL)
    error (_("Unable to resolve symbol '%s'"), name);

  gdb_byte buf[4];
  if (target_read_memory (BMSYMBOL_VALUE_ADDRESS (ms), buf, sizeof buf) != 0)
    error (_("Unable to read value of '%s'"), name);

  return extract_signed_integer (buf, sizeof buf, gdbarch_byte_order (gdbarch));
}
#endif

/* Lookup offsets of fields in the runtime linker's 'Obj_Entry'
   structure needed to determine the TLS index of an object file.  */

#if 0
static void
dfly_fetch_rtld_offsets (struct gdbarch *gdbarch, struct dfly_pspace_data *data)
{
  TRY
    {
      /* Fetch offsets from debug symbols in rtld.  */
      struct symbol *obj_entry_sym
	= lookup_symbol_in_language ("Struct_Obj_Entry", NULL, STRUCT_DOMAIN,
				     language_c, NULL).symbol;
      if (obj_entry_sym == NULL)
	error (_("Unable to find Struct_Obj_Entry symbol"));
      data->off_linkmap = lookup_struct_elt (SYMBOL_TYPE(obj_entry_sym),
					     "linkmap", 0).offset / 8;
      data->off_tlsindex = lookup_struct_elt (SYMBOL_TYPE(obj_entry_sym),
					      "tlsindex", 0).offset / 8;
      data->rtld_offsets_valid = true;
      return;
    }
  CATCH (e, RETURN_MASK_ERROR)
    {
      data->off_linkmap = -1;
    }
  END_CATCH

  TRY
    {
      /* Fetch offsets from global variables in libthr.  Note that
	 this does not work for single-threaded processes that are not
	 linked against libthr.  */
      data->off_linkmap = dfly_read_integer_by_name (gdbarch,
						     "_thread_off_linkmap");
      data->off_tlsindex = dfly_read_integer_by_name (gdbarch,
						      "_thread_off_tlsindex");
      data->rtld_offsets_valid = true;
      return;
    }
  CATCH (e, RETURN_MASK_ERROR)
    {
      data->off_linkmap = -1;
    }
  END_CATCH
}
#endif

/* Helper function to read the TLS index of an object file associated
   with a link map entry at LM_ADDR.  */

#if 0
static LONGEST
dfly_get_tls_index (struct gdbarch *gdbarch, CORE_ADDR lm_addr)
{
  struct dfly_pspace_data *data = get_dfly_pspace_data (current_program_space);

  if (!data->rtld_offsets_valid)
    dfly_fetch_rtld_offsets (gdbarch, data);

  if (data->off_linkmap == -1)
    throw_error (TLS_GENERIC_ERROR,
		 _("Cannot fetch runtime linker structure offsets"));

  /* Simulate container_of to convert from LM_ADDR to the Obj_Entry
     pointer and then compute the offset of the tlsindex member.  */
  CORE_ADDR tlsindex_addr = lm_addr - data->off_linkmap + data->off_tlsindex;

  gdb_byte buf[4];
  if (target_read_memory (tlsindex_addr, buf, sizeof buf) != 0)
    throw_error (TLS_GENERIC_ERROR,
		 _("Cannot find thread-local variables on this target"));

  return extract_signed_integer (buf, sizeof buf, gdbarch_byte_order (gdbarch));
}
#endif

/* See dfly-tdep.h.  */

#if 0
CORE_ADDR
dfly_get_thread_local_address (struct gdbarch *gdbarch, CORE_ADDR dtv_addr,
			       CORE_ADDR lm_addr, CORE_ADDR offset)
{
  LONGEST tls_index = dfly_get_tls_index (gdbarch, lm_addr);

  gdb_byte buf[gdbarch_ptr_bit (gdbarch) / TARGET_CHAR_BIT];
  if (target_read_memory (dtv_addr, buf, sizeof buf) != 0)
    throw_error (TLS_GENERIC_ERROR,
		 _("Cannot find thread-local variables on this target"));

  const struct builtin_type *builtin = builtin_type (gdbarch);
  CORE_ADDR addr = gdbarch_pointer_to_address (gdbarch,
					       builtin->builtin_data_ptr, buf);

  addr += (tls_index + 1) * TYPE_LENGTH (builtin->builtin_data_ptr);
  if (target_read_memory (addr, buf, sizeof buf) != 0)
    throw_error (TLS_GENERIC_ERROR,
		 _("Cannot find thread-local variables on this target"));

  addr = gdbarch_pointer_to_address (gdbarch, builtin->builtin_data_ptr, buf);
  return addr + offset;
}
#endif

/* To be called from GDB_OSABI_DRAGONFLY handlers. */

void
dfly_init_abi (struct gdbarch_info info, struct gdbarch *gdbarch)
{
#if 0
  set_gdbarch_core_pid_to_str (gdbarch, dfly_core_pid_to_str);
  set_gdbarch_core_thread_name (gdbarch, dfly_core_thread_name);
  set_gdbarch_core_xfer_siginfo (gdbarch, dfly_core_xfer_siginfo);
  set_gdbarch_make_corefile_notes (gdbarch, dfly_make_corefile_notes);
  set_gdbarch_core_info_proc (gdbarch, dfly_core_info_proc);
  set_gdbarch_print_auxv_entry (gdbarch, dfly_print_auxv_entry);
  set_gdbarch_get_siginfo_type (gdbarch, dfly_get_siginfo_type);
#endif
  set_gdbarch_gdb_signal_from_target (gdbarch, dfly_gdb_signal_from_target);
  set_gdbarch_gdb_signal_to_target (gdbarch, dfly_gdb_signal_to_target);

#if 0
  /* `catch syscall' */
  set_xml_syscall_file_name (gdbarch, "syscalls/dragonfly.xml");
  set_gdbarch_get_syscall_number (gdbarch, dfly_get_syscall_number);
#endif
}

void
_initialize_dfly_tdep (void)
{
  dfly_gdbarch_data_handle =
    gdbarch_data_register_post_init (init_dfly_gdbarch_data);
  dfly_pspace_data_handle
    = register_program_space_data_with_cleanup (NULL, dfly_pspace_data_cleanup);
}
