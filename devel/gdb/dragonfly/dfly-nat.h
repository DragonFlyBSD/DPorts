/* Native-dependent code for DragonFly.

   Copyright (C) 2004-2019 Free Software Foundation, Inc.

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

#ifndef DFLY_NAT_H
#define DFLY_NAT_H

#include "inf-ptrace.h"
#include <sys/user.h>

/* A prototype DragonFly target. */

class dfly_nat_target : public inf_ptrace_target
{
public:
  const char *pid_to_exec_file (int pid) override;

  int find_memory_regions (find_memory_region_ftype func, void *data) override;

};

#ifdef OLDCODE
/* Register the customized DragonFly target.  This should be used
   instead of calling add_target directly.  */
extern void dfly_nat_add_target (struct target_ops *);
#endif

#endif /* dfly-nat.h */
