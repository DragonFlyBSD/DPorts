--- hotspot/src/os/bsd/vm/os_bsd.cpp.orig	2013-05-13 10:51:23.798105000 +0000
+++ hotspot/src/os/bsd/vm/os_bsd.cpp
@@ -131,7 +131,7 @@
 # include <inttypes.h>
 # include <sys/ioctl.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <elf.h>
 #endif
 
@@ -3668,7 +3668,7 @@ OSReturn os::set_native_priority(Thread*
 #ifdef __OpenBSD__
   // OpenBSD pthread_setprio starves low priority threads
   return OS_OK;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   int ret = pthread_setprio(thread->osthread()->pthread_id(), newpri);
 #elif defined(__APPLE__) || defined(__NetBSD__)
   struct sched_param sp;
@@ -3696,7 +3696,7 @@ OSReturn os::get_native_priority(const T
   }
 
   errno = 0;
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
   *priority_ptr = pthread_getprio(thread->osthread()->pthread_id());
 #elif defined(__APPLE__) || defined(__NetBSD__)
   int policy;
