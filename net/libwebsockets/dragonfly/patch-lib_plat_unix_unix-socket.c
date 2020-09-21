--- lib/plat/unix/unix-sockets.c.orig	2020-09-21 17:52:01.688244000 +0200
+++ lib/plat/unix/unix-sockets.c	2020-09-21 17:52:56.817904000 +0200
@@ -84,7 +84,7 @@
 	socklen_t optlen = sizeof(optval);
 
 #if defined(__APPLE__) || \
-    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
     defined(__NetBSD__) || \
     defined(__OpenBSD__) || \
     defined(__HAIKU__)
@@ -101,7 +101,7 @@
 			return 1;
 
 #if defined(__APPLE__) || \
-    defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
+    defined(__DragonFly__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
     defined(__NetBSD__) || \
     defined(__CYGWIN__) || defined(__OpenBSD__) || defined (__sun) || \
     defined(__HAIKU__)
@@ -154,7 +154,7 @@
 	if (!unix_skt && setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, (const void *)&optval, optlen) < 0)
 		return 1;
 #elif !defined(__APPLE__) && \
-      !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) &&        \
+      !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) &&        \
       !defined(__NetBSD__) && \
       !defined(__OpenBSD__) && \
       !defined(__HAIKU__)
