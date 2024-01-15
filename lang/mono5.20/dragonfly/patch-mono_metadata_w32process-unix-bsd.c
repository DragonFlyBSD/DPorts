--- mono/metadata/w32process-unix-bsd.c.orig	2019-07-16 18:16:12 UTC
+++ mono/metadata/w32process-unix-bsd.c
@@ -9,7 +9,9 @@
 
 #include <errno.h>
 #include <signal.h>
+#ifndef __DragonFly__
 #include <sys/proc.h>
+#endif
 #include <sys/sysctl.h>
 #if !defined(__OpenBSD__)
 #include <sys/utsname.h>
@@ -51,7 +53,11 @@ mono_w32process_get_name (pid_t pid)
 		return NULL;
 	}
 
+#ifdef __DragonFly__
+	ret = strlen (pi->kp_comm) > 0 ? g_strdup (pi->kp_comm) : NULL;
+#else
 	ret = strlen (pi->ki_comm) > 0 ? g_strdup (pi->ki_comm) : NULL;
+#endif
 
 	g_free (pi);
 #elif defined(__OpenBSD__)
