--- vendor/libbase/file.cpp.orig	2022-06-10 23:11:16 UTC
+++ vendor/libbase/file.cpp
@@ -32,8 +32,9 @@
 #include <string>
 #include <vector>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
+#include <sys/syslimits.h>
 #endif
 #if defined(__APPLE__)
 #include <mach-o/dyld.h>
@@ -446,7 +447,7 @@ std::string GetExecutablePath() {
   std::string path;
   android::base::Readlink("/proc/self/exe", &path);
   return path;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   int mib[4];
   mib[0] = CTL_KERN;
   mib[1] = KERN_PROC;
