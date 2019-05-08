--- lib/plat/lws-plat-unix.c.orig	2018-03-08 10:28:37 UTC
+++ lib/plat/lws-plat-unix.c
@@ -236,7 +236,7 @@ lws_plat_set_socket_options(struct lws_v
 	socklen_t optlen = sizeof(optval);
 
 #if defined(__APPLE__) || \
-    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__) || \
     defined(__NetBSD__) || \
     defined(__OpenBSD__) || \
     defined(__HAIKU__)
@@ -251,7 +251,7 @@ lws_plat_set_socket_options(struct lws_v
 			return 1;
 
 #if defined(__APPLE__) || \
-    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__) || \
     defined(__NetBSD__) || \
     defined(__CYGWIN__) || defined(__OpenBSD__) || defined (__sun) || \
     defined(__HAIKU__)
@@ -296,7 +296,7 @@ lws_plat_set_socket_options(struct lws_v
 	if (setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, (const void *)&optval, optlen) < 0)
 		return 1;
 #elif !defined(__APPLE__) && \
-      !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) &&        \
+      !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) && !defined(__DragonFly__) && \
       !defined(__NetBSD__) && \
       !defined(__OpenBSD__) && \
       !defined(__HAIKU__)
