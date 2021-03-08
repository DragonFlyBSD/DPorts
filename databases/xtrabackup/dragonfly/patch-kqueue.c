No ENOTCAPABLE

--- extra/libevent/libevent-2.1.11-stable/kqueue.c.orig	2020-11-11 07:29:24 UTC
+++ extra/libevent/libevent-2.1.11-stable/kqueue.c
@@ -51,7 +51,7 @@
 /* Some platforms apparently define the udata field of struct kevent as
  * intptr_t, whereas others define it as void*.  There doesn't seem to be an
  * easy way to tell them apart via autoconf, so we need to use OS macros. */
-#if defined(EVENT__HAVE_INTTYPES_H) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__darwin__) && !defined(__APPLE__) && !defined(__CloudABI__)
+#if defined(EVENT__HAVE_INTTYPES_H) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__darwin__) && !defined(__APPLE__) && !defined(__CloudABI__) && !defined(__DragonFly__)
 #define PTR_TO_UDATA(x)	((intptr_t)(x))
 #define INT_TO_UDATA(x) ((intptr_t)(x))
 #else
@@ -343,7 +343,7 @@ kq_dispatch(struct event_base *base, str
 			 * on FreeBSD. */
 			case EINVAL:
 				continue;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
 			/*
 			 * This currently occurs if an FD is closed
 			 * before the EV_DELETE makes it out via kevent().
