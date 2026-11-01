--- libobs/util/platform-nix.c.orig
+++ libobs/util/platform-nix.c
@@ -35,14 +35,14 @@
 #include <sys/times.h>
 #include <sys/wait.h>
 #include <libgen.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/queue.h>
 #include <sys/socket.h>
 #include <sys/sysctl.h>
 #include <sys/user.h>
 #include <unistd.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <libprocstat.h>
 #endif
 #else
@@ -969,8 +969,8 @@
 	if (!os_get_proc_memory_usage_internal(&kinfo))
 		return false;
 
-	usage->resident_size = (uint64_t)kinfo.ki_rssize * sysconf(_SC_PAGESIZE);
-	usage->virtual_size = (uint64_t)kinfo.ki_size;
+	usage->resident_size = (uint64_t)kinfo.kp_vm_rssize * sysconf(_SC_PAGESIZE);
+	usage->virtual_size = (uint64_t)kinfo.kp_vm_map_size;
 	return true;
 }
 
@@ -979,7 +979,7 @@
 	struct kinfo_proc kinfo;
 	if (!os_get_proc_memory_usage_internal(&kinfo))
 		return 0;
-	return (uint64_t)kinfo.ki_rssize * sysconf(_SC_PAGESIZE);
+	return (uint64_t)kinfo.kp_vm_rssize * sysconf(_SC_PAGESIZE);
 }
 
 uint64_t os_get_proc_virtual_size(void)
@@ -987,7 +987,7 @@
 	struct kinfo_proc kinfo;
 	if (!os_get_proc_memory_usage_internal(&kinfo))
 		return 0;
-	return (uint64_t)kinfo.ki_size;
+	return (uint64_t)kinfo.kp_vm_map_size;
 }
 #else
 typedef struct {
