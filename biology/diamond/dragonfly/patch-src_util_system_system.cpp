--- src/util/system/system.cpp.orig	2021-02-12 11:50:56 UTC
+++ src/util/system/system.cpp
@@ -16,7 +16,7 @@
   #include <fcntl.h>
   #include <unistd.h>
   #ifndef  __APPLE__
-    #ifdef __FreeBSD__
+    #if defined(__FreeBSD__) || defined(__DragonFly__)
       #include <sys/types.h>
       #include <sys/sysctl.h>
     #else
@@ -139,8 +139,12 @@ void reset_color(bool err) {
 double total_ram() {
 #if defined(WIN32) || defined(__APPLE__)
 	return 0.0;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
+#ifdef __DragonFly__
+	int mib[2] = { CTL_HW, HW_USERMEM };
+#else
 	int mib[2] = { CTL_HW, HW_REALMEM };
+#endif
 	u_int namelen = sizeof(mib) / sizeof(mib[0]);
 	uint64_t oldp;
 	size_t oldlenp = sizeof(oldp);
@@ -192,4 +196,4 @@ void unmap_file(char* ptr, size_t size,
 	munmap((void*)ptr, size);
 	close(fd);
 #endif
-}
\ No newline at end of file
+}
