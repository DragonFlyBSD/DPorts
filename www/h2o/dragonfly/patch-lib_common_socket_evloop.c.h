--- lib/common/socket/evloop.c.h.orig	2016-06-01 04:03:13.000000000 +0300
+++ lib/common/socket/evloop.c.h
@@ -33,6 +33,8 @@
 #define H2O_USE_ACCEPT4 1
 #elif __FreeBSD__ >= 10
 #define H2O_USE_ACCEPT4 1
+#elif defined(__DragonFly__)
+#define H2O_USE_ACCEPT4 1
 #else
 #define H2O_USE_ACCEPT4 0
 #endif
@@ -70,7 +72,7 @@ static void evloop_do_on_socket_export(s
 #if H2O_USE_POLL || H2O_USE_EPOLL || H2O_USE_KQUEUE
 /* explicitly specified */
 #else
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
 #define H2O_USE_KQUEUE 1
 #elif defined(__linux)
 #define H2O_USE_EPOLL 1
