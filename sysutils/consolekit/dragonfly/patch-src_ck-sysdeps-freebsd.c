--- src/ck-sysdeps-freebsd.c.intermediate	2012-12-21 17:10:49.246511000 +0100
+++ src/ck-sysdeps-freebsd.c	2012-12-21 17:27:59.801021000 +0100
@@ -137,6 +137,67 @@
         return TRUE;
 }
 
+#ifdef __DragonFly__
+/* return 1 if it works, or 0 for failure */
+static gboolean
+stat2proc (pid_t        pid,
+           CkProcessStat *P)
+{
+        struct kinfo_proc p;
+        char              *ttname;
+        int               num;
+        int               tty_maj;
+        int               tty_min;
+
+        if (! get_kinfo_proc (pid, &p)) {
+                return FALSE;
+        }
+
+        num = MAXCOMLEN;
+        if (num >= sizeof P->cmd) {
+                num = sizeof P->cmd - 1;
+        }
+
+        memcpy (P->cmd, p.kp_comm, num);
+
+        P->cmd[num]   = '\0';
+        P->pid        = p.kp_pid;
+        P->ppid       = p.kp_ppid;
+        P->pgrp       = p.kp_pgid;
+        P->session    = p.kp_sid;
+        P->rss        = p.kp_vm_rssize;
+        P->vsize      = p.kp_vm_map_size;
+        P->start_time = p.kp_start.tv_sec;
+        P->wchan      = (unsigned long) p.kp_lwp.kl_wchan;
+        P->state      = p.kp_stat;
+        P->nice       = p.kp_nice;
+        P->flags      = p.kp_flags;
+        P->tpgid      = p.kp_tpgid;
+        P->processor  = p.kp_lwp.kl_cpuid;
+        P->nlwp       = p.kp_nthreads;
+
+        /* we like it Linux-encoded :-) */
+        tty_maj = major (p.kp_tdev);
+        tty_min = minor (p.kp_tdev);
+        P->tty = DEV_ENCODE (tty_maj,tty_min);
+
+        snprintf (P->tty_text, sizeof P->tty_text, "%3d,%-3d", tty_maj, tty_min);
+
+        if (p.kp_tdev != NODEV && (ttname = devname (p.kp_tdev, S_IFCHR)) != NULL) {
+                memcpy (P->tty_text, ttname, sizeof P->tty_text);
+        }
+
+        if (p.kp_tdev == NODEV) {
+                memcpy (P->tty_text, "   ?   ", sizeof P->tty_text);
+        }
+
+        if (P->pid != pid) {
+                return FALSE;
+        }
+
+        return TRUE;
+}
+#else
 /* return 1 if it works, or 0 for failure */
 static gboolean
 stat2proc (pid_t        pid,
@@ -196,6 +257,7 @@
 
         return TRUE;
 }
+#endif
 
 gboolean
 ck_process_stat_new_for_unix_pid (pid_t           pid,
@@ -314,7 +376,11 @@
         res = get_kinfo_proc (pid, &p);
 
         if (res) {
+#ifdef __DragonFly__
+                uid = p.kp_uid;
+#else
                 uid = p.ki_uid;
+#endif
         }
 
         return uid;
