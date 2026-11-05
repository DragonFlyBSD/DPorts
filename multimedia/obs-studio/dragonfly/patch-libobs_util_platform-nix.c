--- libobs/util/platform-nix.c.orig
+++ libobs/util/platform-nix.c
@@ -27,7 +27,12 @@
 #include <glob.h>
 #include <time.h>
 #include <signal.h>
+#ifdef __DragonFly__
+/* sys/statvfs.h already has the base uuid_t, which libuuid's clashes with */
+#include <uuid.h>
+#else
 #include <uuid/uuid.h>
+#endif
 
 #include "obsconfig.h"
 
@@ -35,14 +40,14 @@
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
@@ -969,8 +974,8 @@
 	if (!os_get_proc_memory_usage_internal(&kinfo))
 		return false;
 
-	usage->resident_size = (uint64_t)kinfo.ki_rssize * sysconf(_SC_PAGESIZE);
-	usage->virtual_size = (uint64_t)kinfo.ki_size;
+	usage->resident_size = (uint64_t)kinfo.kp_vm_rssize * sysconf(_SC_PAGESIZE);
+	usage->virtual_size = (uint64_t)kinfo.kp_vm_map_size;
 	return true;
 }
 
@@ -979,7 +984,7 @@
 	struct kinfo_proc kinfo;
 	if (!os_get_proc_memory_usage_internal(&kinfo))
 		return 0;
-	return (uint64_t)kinfo.ki_rssize * sysconf(_SC_PAGESIZE);
+	return (uint64_t)kinfo.kp_vm_rssize * sysconf(_SC_PAGESIZE);
 }
 
 uint64_t os_get_proc_virtual_size(void)
@@ -987,7 +992,7 @@
 	struct kinfo_proc kinfo;
 	if (!os_get_proc_memory_usage_internal(&kinfo))
 		return 0;
-	return (uint64_t)kinfo.ki_size;
+	return (uint64_t)kinfo.kp_vm_map_size;
 }
 #else
 typedef struct {
@@ -1099,10 +1104,25 @@
 
 char *os_generate_uuid(void)
 {
+#ifdef __DragonFly__
 	uuid_t uuid;
+	uint32_t status;
+	char *str = NULL;
+	char *out;
+
+	uuid_create(&uuid, &status);
+	uuid_to_string(&uuid, &str, &status);
+	if (status != uuid_s_ok)
+		return NULL;
+	out = bstrdup(str);
+	free(str);
+	return out;
+#else
+	uuid_t uuid;
 	// 36 char UUID + NULL
 	char *out = bmalloc(37);
 	uuid_generate(uuid);
 	uuid_unparse_lower(uuid, out);
 	return out;
+#endif
 }
