--- vendor/libbase/file.cpp.orig
+++ vendor/libbase/file.cpp
@@ -36,7 +36,7 @@
 #if defined(__APPLE__)
 #include <mach-o/dyld.h>
 #endif
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif
 #if defined(_WIN32)
@@ -518,7 +518,7 @@
   if (result == 0 || result == sizeof(path) - 1) return "";
   path[PATH_MAX - 1] = 0;
   return path;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
   char path[PATH_MAX + 1];
   size_t path_len = sizeof(path);
