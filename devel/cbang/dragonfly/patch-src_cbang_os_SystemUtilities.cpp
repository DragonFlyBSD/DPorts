--- src/cbang/os/SystemUtilities.cpp.orig
+++ src/cbang/os/SystemUtilities.cpp
@@ -73,7 +73,7 @@
 #include <grp.h>
 #endif // _WIN32
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif // __FeeBSD__
 
@@ -381,7 +381,7 @@
       if (_NSGetExecutablePath(path, &size) == 0) return (char *)path;
       THROW("Failed to get executable path: " << SysError());
 
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
       static int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
 
       char path[PATH_MAX + 1];
