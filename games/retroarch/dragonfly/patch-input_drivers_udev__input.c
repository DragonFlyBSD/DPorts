--- input/drivers/udev_input.c.orig	2020-03-20 16:34:45 UTC
+++ input/drivers/udev_input.c
@@ -23,7 +23,7 @@
 #define HAVE_EPOLL 1
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined (__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined (__NetBSD__) || defined(__DragonFly__)
 #define HAVE_KQUEUE 1
 #endif
 #endif
