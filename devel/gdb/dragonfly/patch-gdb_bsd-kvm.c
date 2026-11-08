--- gdb/bsd-kvm.c.orig
+++ gdb/bsd-kvm.c
@@ -40,10 +40,10 @@
 #include <paths.h>
 #include "readline/readline.h"
 #include <sys/param.h>
-#include <sys/proc.h>
 #ifdef HAVE_SYS_USER_H
 #include <sys/user.h>
 #endif
+#include <sys/proc.h>
 
 #include "bsd-kvm.h"
 
@@ -131,6 +131,16 @@
   current_inferior ()->unpush_target (&bsd_kvm_ops);
   core_kd = temp_kd;
   current_inferior ()->push_target (&bsd_kvm_ops);
+
+  /* add_thread_silent needs an inferior with the thread's pid.  Give the
+     current one bsd_kvm_ptid's pid, as fbsd-kvm.c does; close () resets
+     it through exit_inferior.  */
+  inferior *inf = current_inferior ();
+  if (inf->pid == 0)
+    {
+      inferior_appeared (inf, bsd_kvm_ptid.pid ());
+      inf->fake_pid_p = true;
+    }
 
   thread_info *thr = add_thread_silent (&bsd_kvm_ops, bsd_kvm_ptid);
   switch_to_thread (thr);
@@ -235,7 +245,7 @@
   /* On dumping core, BSD kernels store the faulting context (PCB)
      in the variable "dumppcb".  */
   memset (nl, 0, sizeof nl);
-  nl[0].n_name = (char *) "_dumppcb";
+  nl[0].n_name = (char *) "dumppcb";
 
   if (kvm_nlist (core_kd, nl) == -1)
     error (("%s"), kvm_geterr (core_kd));
@@ -253,7 +263,7 @@
      "proc0paddr".  */
 
   memset (nl, 0, sizeof nl);
-  nl[0].n_name = (char *) "_proc0paddr";
+  nl[0].n_name = (char *) "proc0paddr";
 
   if (kvm_nlist (core_kd, nl) == -1)
     error (("%s"), kvm_geterr (core_kd));
@@ -277,7 +287,7 @@
      variable "thread0".  */
 
   memset (nl, 0, sizeof nl);
-  nl[0].n_name = (char *) "_thread0";
+  nl[0].n_name = (char *) "thread0";
 
   if (kvm_nlist (core_kd, nl) == -1)
     error (("%s"), kvm_geterr (core_kd));
@@ -327,8 +337,10 @@
 #ifdef HAVE_STRUCT_LWP
   addr += offsetof (struct lwp, l_addr);
 #else
+#ifndef __DragonFly__  /* XXX FIXME */
   addr += offsetof (struct proc, p_addr);
 #endif
+#endif
 
   if (kvm_read (core_kd, addr, &bsd_kvm_paddr, sizeof bsd_kvm_paddr) == -1)
     error (("%s"), kvm_geterr (core_kd));
