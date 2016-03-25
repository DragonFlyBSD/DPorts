--- mono/io-layer/processes.c.orig	2015-11-12 11:00:29.000000000 +0200
+++ mono/io-layer/processes.c
@@ -55,7 +55,9 @@
 #endif
 
 #if defined(PLATFORM_MACOSX) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#ifndef __DragonFly__
 #include <sys/proc.h>
+#endif
 #include <sys/sysctl.h>
 #  if !defined(__OpenBSD__)
 #    include <sys/utsname.h>
@@ -1929,8 +1931,13 @@ get_process_name_from_proc (pid_t pid)
 		return(ret);
 	}
 
+#ifdef __DragonFly__
+	if (strlen (pi->kp_comm) > 0)
+		ret = g_strdup (pi->kp_comm);
+#else
 	if (strlen (pi->ki_comm) > 0)
 		ret = g_strdup (pi->ki_comm);
+#endif
 	free(pi);
 #elif defined(__OpenBSD__)
 	mib [0] = CTL_KERN;
@@ -1963,6 +1970,9 @@ retry:
 #if defined(__OpenBSD__)
 	if (strlen (pi->p_comm) > 0)
 		ret = g_strdup (pi->p_comm);
+#elif defined(__DragonFly__)
+	if (strlen (pi->kp_comm) > 0)
+		ret = g_strdup (pi->kp_comm);
 #elif defined(__FreeBSD__)
 	if (strlen (pi->ki_comm) > 0)
 		ret = g_strdup (pi->ki_comm);
