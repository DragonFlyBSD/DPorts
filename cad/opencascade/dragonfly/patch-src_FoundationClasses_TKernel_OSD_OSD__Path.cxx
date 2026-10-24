--- src/FoundationClasses/TKernel/OSD/OSD_Path.cxx.orig
+++ src/FoundationClasses/TKernel/OSD/OSD_Path.cxx
@@ -19,7 +19,7 @@
 static OSD_SysType whereAmI()
 {
 #if defined(__digital__) || defined(__FreeBSD__) || defined(SUNOS) || defined(__APPLE__)           \
-  || defined(__QNX__) || defined(__FreeBSD_kernel__)
+  || defined(__QNX__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
   return OSD_UnixBSD;
 #elif defined(sgi) || defined(IRIX) || defined(__sun) || defined(SOLARIS) || defined(__sco__)      \
   || defined(__hpux) || defined(HPUX)
