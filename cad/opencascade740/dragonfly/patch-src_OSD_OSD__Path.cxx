--- src/OSD/OSD_Path.cxx.orig
+++ src/OSD/OSD_Path.cxx
@@ -23,7 +23,7 @@
 
 static OSD_SysType whereAmI()
 {
-#if defined(__digital__) || defined(__FreeBSD__) || defined(SUNOS) || defined(__APPLE__) || defined(__QNX__) || defined(__FreeBSD_kernel__)
+#if defined(__digital__) || defined(__FreeBSD__) || defined(SUNOS) || defined(__APPLE__) || defined(__QNX__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
   return OSD_UnixBSD;
 #elif defined(sgi)  || defined(IRIX) || defined(__sun)  || defined(SOLARIS) ||  defined(__sco__) || defined(__hpux) || defined(HPUX)
   return OSD_UnixSystemV;
