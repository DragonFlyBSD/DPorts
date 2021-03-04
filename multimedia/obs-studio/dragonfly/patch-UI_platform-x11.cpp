--- UI/platform-x11.cpp.orig	2021-01-08 23:43:39 UTC
+++ UI/platform-x11.cpp
@@ -40,7 +40,9 @@
 #include <fcntl.h>
 #include <sys/sysctl.h>
 #include <sys/user.h>
+#ifndef __DragonFly__
 #include <libprocstat.h>
+#endif
 #include <pthread_np.h>
 
 #include <condition_variable>
@@ -146,6 +148,8 @@ void PIDFileCheck(bool &already_running)
 
 	already_running = false;
 
+#ifndef __DragonFly__
+	/* XXX what is this??? */
 	procstat *ps = procstat_open_sysctl();
 	unsigned int count;
 	auto procs = procstat_getprocs(ps, KERN_PROC_UID | KERN_PROC_INC_THREAD,
@@ -159,6 +163,7 @@ void PIDFileCheck(bool &already_running)
 	}
 	procstat_freeprocs(ps, procs);
 	procstat_close(ps);
+#endif
 
 	RO.thr = std::thread(std::mem_fn(&RunOnce::thr_proc), &RO);
 
