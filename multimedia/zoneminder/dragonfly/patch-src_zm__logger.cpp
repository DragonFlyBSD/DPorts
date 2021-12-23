--- src/zm_logger.cpp.orig	2021-06-22 18:35:13 UTC
+++ src/zm_logger.cpp
@@ -26,7 +26,7 @@
 #include <sys/time.h>
 #include <unistd.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/thr.h>
 #endif
 #include <cerrno>
@@ -451,7 +451,7 @@ void Logger::logPrint(bool hex, const ch
 #endif
 
   pid_t tid;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
   long lwpid;
   thr_self(&lwpid);
   tid = lwpid;
