--- hotspot/src/os/bsd/vm/os_bsd.cpp.orig	2015-03-18 10:12:26 UTC
+++ hotspot/src/os/bsd/vm/os_bsd.cpp
@@ -113,7 +113,7 @@
 # include <vm/vm_param.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <elf.h>
 #endif
 
@@ -2850,7 +2850,7 @@ OSReturn os::set_native_priority(Thread*
 #ifdef __OpenBSD__
   // OpenBSD pthread_setprio starves low priority threads
   return OS_OK;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   int ret = pthread_setprio(thread->osthread()->pthread_id(), newpri);
   return (ret == 0) ? OS_OK : OS_ERR;
 #elif defined(__APPLE__) || defined(__NetBSD__)
@@ -2879,7 +2879,7 @@ OSReturn os::get_native_priority(const T
   }
 
   errno = 0;
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
   *priority_ptr = pthread_getprio(thread->osthread()->pthread_id());
 #elif defined(__APPLE__) || defined(__NetBSD__)
   int policy;
