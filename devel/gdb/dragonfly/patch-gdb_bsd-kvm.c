--- gdb/bsd-kvm.c.orig	2019-05-11 18:19:02 UTC
+++ gdb/bsd-kvm.c
@@ -38,10 +38,10 @@
 #include <paths.h>
 #include "readline/readline.h"
 #include <sys/param.h>
-#include <sys/proc.h>
 #ifdef HAVE_SYS_USER_H
 #include <sys/user.h>
 #endif
+#include <sys/proc.h>
 
 #include "bsd-kvm.h"
 
@@ -330,8 +330,10 @@ bsd_kvm_proc_cmd (const char *arg, int f
 #ifdef HAVE_STRUCT_LWP
   addr += offsetof (struct lwp, l_addr);
 #else
+#ifndef __DragonFly__  /* XXX FIXME */
   addr += offsetof (struct proc, p_addr);
 #endif
+#endif
 
   if (kvm_read (core_kd, addr, &bsd_kvm_paddr, sizeof bsd_kvm_paddr) == -1)
     error (("%s"), kvm_geterr (core_kd));
