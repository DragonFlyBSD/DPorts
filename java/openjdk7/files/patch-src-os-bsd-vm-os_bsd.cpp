--- hotspot/src/os/bsd/vm/os_bsd.cpp.orig	2012-12-28 09:28:25.057970000 +0100
+++ hotspot/src/os/bsd/vm/os_bsd.cpp	2012-12-28 09:31:16.085492000 +0100
@@ -131,7 +131,7 @@
 # include <inttypes.h>
 # include <sys/ioctl.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <elf.h>
 #endif
 
@@ -452,7 +452,7 @@
  *        7: The default directories, normally /lib and /usr/lib.
  */
 #ifndef DEFAULT_LIBPATH
-#define DEFAULT_LIBPATH "/lib:/usr/lib"
+#define DEFAULT_LIBPATH "/lib:/usr/lib:/usr/local/lib"
 #endif
 
 #define EXTENSIONS_DIR  "/lib/ext"
@@ -3668,7 +3668,7 @@
 #ifdef __OpenBSD__
   // OpenBSD pthread_setprio starves low priority threads
   return OS_OK;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   int ret = pthread_setprio(thread->osthread()->pthread_id(), newpri);
 #elif defined(__APPLE__) || defined(__NetBSD__)
   struct sched_param sp;
@@ -3696,7 +3696,7 @@
   }
 
   errno = 0;
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
   *priority_ptr = pthread_getprio(thread->osthread()->pthread_id());
 #elif defined(__APPLE__) || defined(__NetBSD__)
   int policy;
