/* Native-dependent code for DragonFly.

   Copyright (C) 2002-2016 Free Software Foundation, Inc.

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
#include "gdbsupport/byte-vector.h"
#include "gdbcore.h"
#include "inferior.h"
#include "regcache.h"
#include "regset.h"
#include "gdbarch.h"
#include "gdbcmd.h"
#include "gdbthread.h"
#include "gdbsupport/gdb_wait.h"
#include "inf-ptrace.h"
#include <sys/types.h>
#include <sys/procfs.h>
#include <sys/ptrace.h>
#include <sys/signal.h>
#include <sys/sysctl.h>
#include <sys/user.h>
#ifdef HAVE_KINFO_GETVMMAP
#include <libutil.h>
#endif
#include "gdbsupport/filestuff.h"

#include "elf-bfd.h"
#include "dfly-nat.h"
#include "dfly-tdep.h"

#include <list>

/* Return the name of a file that can be opened to get the symbols for
   the child process identified by PID.  */

char *
dfly_nat_target::pid_to_exec_file (int pid)
{
  ssize_t len;
  static char buf[PATH_MAX];
  char name[PATH_MAX];

#ifdef KERN_PROC_PATHNAME
  size_t buflen;
  int mib[4];

  mib[0] = CTL_KERN;
  mib[1] = KERN_PROC;
  mib[2] = KERN_PROC_PATHNAME;
  mib[3] = pid;
  buflen = sizeof buf;
  if (sysctl (mib, 4, buf, &buflen, NULL, 0) == 0)
    /* The kern.proc.pathname.<pid> sysctl returns a length of zero
       for processes without an associated executable such as kernel
       processes.  */
    return buflen == 0 ? NULL : buf;
#endif

  xsnprintf (name, PATH_MAX, "/proc/%d/exe", pid);
  len = readlink (name, buf, PATH_MAX - 1);
  if (len != -1)
    {
      buf[len] = '\0';
      return buf;
    }

  return NULL;
}

static int
dfly_read_mapping (FILE *mapfile, unsigned long *start, unsigned long *end,
		   char *protection)
{
  /* FreeBSD 5.1-RELEASE uses a 256-byte buffer.  */
  char buf[256];
  int resident, privateresident;
  unsigned long obj;
  int ret = EOF;

  /* As of FreeBSD 5.0-RELEASE, the layout is described in
     /usr/src/sys/fs/procfs/procfs_map.c.  Somewhere in 5.1-CURRENT a
     new column was added to the procfs map.  Therefore we can't use
     fscanf since we need to support older releases too.  */
  if (fgets (buf, sizeof buf, mapfile) != NULL)
    ret = sscanf (buf, "%lx %lx %d %d %lx %s", start, end,
		  &resident, &privateresident, &obj, protection);

  return (ret != 0 && ret != EOF);
}

/* Iterate over all the memory regions in the current inferior,
   calling FUNC for each memory region.  OBFD is passed as the last
   argument to FUNC.  */

int
dfly_nat_target::find_memory_regions (find_memory_region_ftype func,
				      void *obfd)
{
  pid_t pid = inferior_ptid.pid ();
  unsigned long start, end, size;
  char protection[4];
  int read, write, exec;

  std::string mapfilename = string_printf ("/proc/%ld/map", (long) pid);
  gdb_file_up mapfile (fopen (mapfilename.c_str (), "r"));
  if (mapfile == NULL)
    error (_("Couldn't open %s."), mapfilename.c_str ());

  if (info_verbose)
    fprintf_filtered (gdb_stdout, 
		      "Reading memory regions from %s\n", mapfilename.c_str ());

  /* Now iterate until end-of-file.  */
  while (dfly_read_mapping (mapfile.get (), &start, &end, &protection[0]))
    {
      size = end - start;

      read = (strchr (protection, 'r') != 0);
      write = (strchr (protection, 'w') != 0);
      exec = (strchr (protection, 'x') != 0);

      if (info_verbose)
	{
	  fprintf_filtered (gdb_stdout, 
			    "Save segment, %ld bytes at %s (%c%c%c)\n",
			    size, paddress (target_gdbarch (), start),
			    read ? 'r' : '-',
			    write ? 'w' : '-',
			    exec ? 'x' : '-');
	}

      /* Invoke the callback function to create the corefile segment.
	 Pass MODIFIED as true, we do not know the real modification state.  */
      func (start, size, read, write, exec, 1, obfd);
    }

  return 0;
}

#ifdef OLDCODE
void
dfly_nat_add_target (struct target_ops *t)
{
  t->to_pid_to_exec_file = dfly_pid_to_exec_file;
  t->to_find_memory_regions = dfly_find_memory_regions;
  /* XXX: thread vfork support */
  add_target (t);
}
#endif

/* Provide a prototype to silence -Wmissing-prototypes.  */
extern initialize_file_ftype _initialize_dfly_nat;

void
_initialize_dfly_nat (void)
{
/* XXX: todo add_setshow_boolean_cmd() */
}
