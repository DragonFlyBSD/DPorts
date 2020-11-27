No ENOTCAPABLE

--- extra/libevent/kqueue.c.orig	2020-04-10 19:45:19 UTC
+++ extra/libevent/kqueue.c
@@ -333,7 +333,7 @@ kq_dispatch(struct event_base *base, str
 			 * on FreeBSD. */
 			case EINVAL:
 				continue;
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
 			/*
 			 * This currently occurs if an FD is closed
 			 * before the EV_DELETE makes it out via kevent().
