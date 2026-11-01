--- frontend/utility/platform-x11.cpp.orig
+++ frontend/utility/platform-x11.cpp
@@ -43,7 +43,9 @@
 #include <sys/param.h>
 #include <sys/queue.h>
 #include <sys/socket.h>
+#ifndef __DragonFly__
 #include <libprocstat.h>
+#endif
 #include <pthread_np.h>
 #endif
 #if defined(__FreeBSD__) || defined(__DragonFly__)
@@ -156,6 +158,7 @@
 
 	already_running = false;
 
+#ifndef __DragonFly__
 	procstat *ps = procstat_open_sysctl();
 	unsigned int count;
 	auto procs = procstat_getprocs(ps, KERN_PROC_UID | KERN_PROC_INC_THREAD, geteuid(), &count);
@@ -167,6 +170,7 @@
 	}
 	procstat_freeprocs(ps, procs);
 	procstat_close(ps);
+#endif
 
 	RO.thr = std::thread(std::mem_fn(&RunOnce::thr_proc), &RO);
 
