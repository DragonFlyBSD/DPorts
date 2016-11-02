--- mono/io-layer/processes.c.orig	2016-10-11 12:53:47 UTC
+++ mono/io-layer/processes.c
@@ -68,7 +68,9 @@
 #endif
 
 #if defined(USE_OSX_LOADER) || defined(USE_BSD_LOADER)
+#ifndef __DragonFly__
 #include <sys/proc.h>
+#endif
 #include <sys/sysctl.h>
 #  if !defined(__OpenBSD__)
 #    include <sys/utsname.h>
@@ -1951,8 +1953,13 @@ get_process_name_from_proc (pid_t pid)
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
