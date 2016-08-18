--- sql/threadpool_unix.cc.orig	2016-06-30 14:33:20.000000000 +0300
+++ sql/threadpool_unix.cc
@@ -32,7 +32,7 @@
 #include <sys/epoll.h>
 typedef struct epoll_event native_event;
 #endif
-#if defined (__FreeBSD__) || defined (__APPLE__)
+#if defined (__FreeBSD__) || defined (__APPLE__) || defined(__DragonFly__)
 #include <sys/event.h>
 typedef struct kevent native_event;
 #endif
@@ -301,7 +301,7 @@ static void *native_event_get_userdata(n
   return event->data.ptr;
 }
 
-#elif defined (__FreeBSD__) || defined (__APPLE__)
+#elif defined (__FreeBSD__) || defined (__APPLE__) || defined(__DragonFly__)
 static int io_poll_create()
 {
   return kqueue();
