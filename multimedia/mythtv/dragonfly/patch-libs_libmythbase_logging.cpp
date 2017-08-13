--- libs/libmythbase/logging.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythbase/logging.cpp
@@ -44,7 +44,7 @@ using namespace std;
 #include <signal.h>
 
 // Various ways to get to thread's tid
-#if defined(linux)
+#if defined(linux) || defined(__DragonFly__)
 #include <sys/syscall.h>
 #elif defined(__FreeBSD__)
 extern "C" {
@@ -233,6 +233,8 @@ void LoggingItem::setThreadTid(void)
 
 #if defined(linux)
         m_tid = (int64_t)syscall(SYS_gettid);
+#elif defined(__DragonFly__)
+        m_tid = (int64_t)syscall(SYS_lwp_gettid);
 #elif defined(__FreeBSD__)
         long lwpid;
         int dummy = thr_self( &lwpid );
