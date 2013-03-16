--- sql/threadpool_unix.cc.orig	2013-02-26 16:56:37.000000000 +0000
+++ sql/threadpool_unix.cc
@@ -30,7 +30,7 @@
 #include <sys/epoll.h>
 typedef struct epoll_event native_event;
 #endif
-#if defined (__FreeBSD__) || defined (__APPLE__)
+#if defined (__FreeBSD__) || defined (__APPLE__) || defined(__DragonFly__)
 #include <sys/event.h>
 typedef struct kevent native_event;
 #endif
@@ -286,7 +286,7 @@ static void *native_event_get_userdata(n
   return event->data.ptr;
 }
 
-#elif defined (__FreeBSD__) || defined (__APPLE__)
+#elif defined (__FreeBSD__) || defined (__APPLE__) || defined(__DragonFly__)
 int io_poll_create()
 {
   return kqueue();
