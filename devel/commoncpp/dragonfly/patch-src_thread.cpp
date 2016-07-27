--- src/thread.cpp.intermediate	2016-07-21 15:57:15 UTC
+++ src/thread.cpp
@@ -241,7 +241,7 @@ void Thread::suspend(void)
 #endif // WIN32
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define AUTOSTACK   0x10000
 #endif
 
@@ -631,7 +631,7 @@ _cancel(cancelDefault), _start(NULL), pr
     }
 #endif
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__) 
 #ifdef  _POSIX_THREAD_PRIORITY_SCHEDULING
 #ifdef HAVE_SCHED_GETSCHEDULER
 #define __HAS_PRIORITY_SCHEDULING__
