--- libobs/util/platform-nix.c.orig	2023-06-18 22:05:22 UTC
+++ libobs/util/platform-nix.c
@@ -26,7 +26,15 @@
 #include <errno.h>
 #include <sys/types.h>
 #include <sys/stat.h>
+#ifdef __DragonFly__
+/* XXX uuid_t name conflict <sys/uuid.h> vs "uuid/uuid.h" from libuuid from ports */
+#define uuid_t dfly_uuid_t
+#include <sys/uuid.h>
 #include <sys/statvfs.h>
+#undef uuid_t
+#else
+#include <sys/statvfs.h>
+#endif
 #include <dirent.h>
 #include <stdlib.h>
 #include <limits.h>
@@ -41,14 +49,14 @@
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
@@ -1021,8 +1029,8 @@ bool os_get_proc_memory_usage(os_proc_me
 		return false;
 
 	usage->resident_size =
-		(uint64_t)kinfo.ki_rssize * sysconf(_SC_PAGESIZE);
-	usage->virtual_size = (uint64_t)kinfo.ki_size;
+		(uint64_t)kinfo.kp_vm_rssize * sysconf(_SC_PAGESIZE);
+	usage->virtual_size = (uint64_t)kinfo.kp_vm_map_size;
 	return true;
 }
 
@@ -1031,7 +1039,7 @@ uint64_t os_get_proc_resident_size(void)
 	struct kinfo_proc kinfo;
 	if (!os_get_proc_memory_usage_internal(&kinfo))
 		return 0;
-	return (uint64_t)kinfo.ki_rssize * sysconf(_SC_PAGESIZE);
+	return (uint64_t)kinfo.kp_vm_rssize * sysconf(_SC_PAGESIZE);
 }
 
 uint64_t os_get_proc_virtual_size(void)
@@ -1039,7 +1047,7 @@ uint64_t os_get_proc_virtual_size(void)
 	struct kinfo_proc kinfo;
 	if (!os_get_proc_memory_usage_internal(&kinfo))
 		return 0;
-	return (uint64_t)kinfo.ki_size;
+	return (uint64_t)kinfo.kp_vm_map_size;
 }
 #else
 uint64_t os_get_sys_free_size(void)
