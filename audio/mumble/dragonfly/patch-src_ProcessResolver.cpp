--- src/ProcessResolver.cpp.orig
+++ src/ProcessResolver.cpp
@@ -191,7 +191,7 @@
 		}
 	}
 }
-#elif defined(Q_OS_FREEBSD)
+#elif defined(Q_OS_FREEBSD) && !defined(__DragonFly__)
 // Implementation for FreeBSD
 #	include <libutil.h>
 #	include <sys/types.h>
@@ -250,7 +250,7 @@
 	}
 
 	int n_procs;
-#	if defined(__NetBSD__)
+#	if defined(__NetBSD__) || defined(__DragonFly__)
 	struct kinfo_proc *procs_info = kvm_getprocs(kd, KERN_PROC_ALL, 0, &n_procs);
 #	elif defined(__OpenBSD__)
 	struct kinfo_proc *procs_info = kvm_getprocs(kd, KERN_PROC_ALL, 0, sizeof(*procs_info), &n_procs);
@@ -269,6 +269,8 @@
 	for (int i = 0; i < n_procs; ++i) {
 #	if defined(__NetBSD__) || defined(__OpenBSD__)
 		addEntry(procs_info[i].p_pid, procs_info[i].p_comm, m_processMap);
+#	elif defined(__DragonFly__)
+		addEntry(static_cast< std::uint64_t >(procs_info[i].kp_pid), procs_info[i].kp_comm, m_processMap);
 #	else
 		addEntry(procs_info[i].ki_pid, procs_info[i].ki_comm, m_processMap);
 #	endif
