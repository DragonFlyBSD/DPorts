--- hotspot/src/os/bsd/vm/os_bsd.cpp.orig	2014-11-10 18:55:08.160395000 +0000
+++ hotspot/src/os/bsd/vm/os_bsd.cpp
@@ -112,7 +112,7 @@
 # include <vm/vm_param.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <elf.h>
 #endif
 
@@ -1236,7 +1236,7 @@ pid_t os::Bsd::gettid() {
   guarantee(retval != 0, "just checking");
   return retval;
 
-#elif __FreeBSD__
+#elif defined(__FreeBSD__)
 #if __FreeBSD_version > 900030
   return ::pthread_getthreadid_np();
 #else
@@ -1244,9 +1244,9 @@ pid_t os::Bsd::gettid() {
   thr_self(&tid);
   return (pid_t)tid;
 #endif
-#elif __OpenBSD__
+#elif defined(__OpenBSD__)
   retval = syscall(SYS_getthrid);
-#elif __NetBSD__
+#elif defined(__NetBSD__)
   retval = (pid_t) syscall(SYS__lwp_self);
 #endif
 
@@ -2843,7 +2843,7 @@ OSReturn os::set_native_priority(Thread*
 #ifdef __OpenBSD__
   // OpenBSD pthread_setprio starves low priority threads
   return OS_OK;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   int ret = pthread_setprio(thread->osthread()->pthread_id(), newpri);
   return (ret == 0) ? OS_OK : OS_ERR;
 #elif defined(__APPLE__) || defined(__NetBSD__)
@@ -2872,7 +2872,7 @@ OSReturn os::get_native_priority(const T
   }
 
   errno = 0;
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
   *priority_ptr = pthread_getprio(thread->osthread()->pthread_id());
 #elif defined(__APPLE__) || defined(__NetBSD__)
   int policy;
