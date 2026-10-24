--- src/Corrade/Utility/Path.cpp.orig
+++ src/Corrade/Utility/Path.cpp
@@ -72,7 +72,7 @@
 #endif
 
 /* For executableLocation() on FreeBSD */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -646,7 +646,7 @@
     return path;
 
     /* FreeBSD */
-    #elif defined(__FreeBSD__)
+    #elif defined(__FreeBSD__) || defined(__DragonFly__)
     /* Get path size, it's returned excluding the null terminator */
     std::size_t size;
     constexpr int mib[4]{CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
