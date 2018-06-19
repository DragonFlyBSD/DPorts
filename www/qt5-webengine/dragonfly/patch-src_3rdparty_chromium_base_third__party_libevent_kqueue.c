--- src/3rdparty/chromium/base/third_party/libevent/kqueue.c.orig	2018-04-10 14:05:55.000000000 +0000
+++ src/3rdparty/chromium/base/third_party/libevent/kqueue.c
@@ -54,7 +54,7 @@
 /* Some platforms apparently define the udata field of struct kevent as
  * intptr_t, whereas others define it as void*.  There doesn't seem to be an
  * easy way to tell them apart via autoconf, so we need to use OS macros. */
-#if defined(HAVE_INTTYPES_H) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__darwin__) && !defined(__APPLE__)
+#if defined(HAVE_INTTYPES_H) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__darwin__) && !defined(__APPLE__) && !defined(__DragonFly__)
 #define PTR_TO_UDATA(x)	((intptr_t)(x))
 #else
 #define PTR_TO_UDATA(x)	(x)
