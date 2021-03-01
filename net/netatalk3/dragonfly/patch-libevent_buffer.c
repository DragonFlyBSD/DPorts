--- libevent/buffer.c.orig	2017-07-09 06:59:09 UTC
+++ libevent/buffer.c
@@ -100,7 +100,7 @@
 #if defined(_EVENT_HAVE_SYS_SENDFILE_H) && defined(_EVENT_HAVE_SENDFILE) && defined(__linux__)
 #define USE_SENDFILE		1
 #define SENDFILE_IS_LINUX	1
-#elif defined(_EVENT_HAVE_SENDFILE) && defined(__FreeBSD__)
+#elif defined(_EVENT_HAVE_SENDFILE) && (defined(__FreeBSD__) || defined(__DragonFly__))
 #define USE_SENDFILE		1
 #define SENDFILE_IS_FREEBSD	1
 #elif defined(_EVENT_HAVE_SENDFILE) && defined(__APPLE__)
