--- mono/metadata/w32process-unix-bsd.c.orig	2017-07-20 18:10:59 UTC
+++ mono/metadata/w32process-unix-bsd.c
@@ -8,7 +8,9 @@
 #ifdef USE_BSD_BACKEND
 
 #include <errno.h>
+#ifndef __DragonFly__
 #include <sys/proc.h>
+#endif
 #include <sys/sysctl.h>
 #if !defined(__OpenBSD__)
 #include <sys/utsname.h>
@@ -50,7 +52,11 @@ mono_w32process_get_name (pid_t pid)
 		return NULL;
 	}
 
+#ifdef __DragonFly__
+	ret = strlen (pi->kp_comm) > 0 ? g_strdup (pi->kp_comm) : NULL;
+#else
 	ret = strlen (pi->ki_comm) > 0 ? g_strdup (pi->ki_comm) : NULL;
+#endif
 
 	g_free (pi);
 #elif defined(__OpenBSD__)
