--- hotspot/src/os/bsd/vm/os_bsd.cpp.orig	2014-07-09 03:09:28.560950000 +0000
+++ hotspot/src/os/bsd/vm/os_bsd.cpp	2014-07-09 03:18:02.719599000 +0000
@@ -112,7 +112,7 @@
 # include <vm/vm_param.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <elf.h>
 #endif
 
@@ -1197,7 +1197,7 @@ pid_t os::Bsd::gettid() {
   guarantee(retval != 0, "just checking");
   return retval;
 
-#elif __FreeBSD__
+#elif defined(__FreeBSD__)
 #if __FreeBSD_version > 900030
   return ::pthread_getthreadid_np();
 #else
@@ -1205,9 +1205,9 @@ pid_t os::Bsd::gettid() {
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
 
@@ -2811,7 +2811,7 @@ OSReturn os::set_native_priority(Thread*
 #ifdef __OpenBSD__
   // OpenBSD pthread_setprio starves low priority threads
   return OS_OK;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   int ret = pthread_setprio(thread->osthread()->pthread_id(), newpri);
   return (ret == 0) ? OS_OK : OS_ERR;
 #elif defined(__APPLE__) || defined(__NetBSD__)
@@ -2840,7 +2840,7 @@ OSReturn os::get_native_priority(const T
   }
 
   errno = 0;
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
   *priority_ptr = pthread_getprio(thread->osthread()->pthread_id());
 #elif defined(__APPLE__) || defined(__NetBSD__)
   int policy;
@@ -3303,7 +3303,7 @@ void os::Bsd::set_signal_handler(int sig
     sigAct.sa_sigaction = signalHandler;
     sigAct.sa_flags = SA_SIGINFO|SA_RESTART;
   }
-#if __APPLE__
+#if defined(__APPLE__)
   // Needed for main thread as XNU (Mac OS X kernel) will only deliver SIGSEGV
   // (which starts as SIGBUS) on main thread with faulting address inside "stack+guard pages"
   // if the signal handler declares it will handle it on alternate stack.
