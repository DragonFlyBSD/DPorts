--- lib/plat/unix/unix-sockets.c.orig	2021-06-19 21:57:06.250431000 +0200
+++ lib/plat/unix/unix-sockets.c	2021-06-19 21:58:07.649016000 +0200
@@ -105,6 +105,7 @@
 	socklen_t optlen = sizeof(optval);
 
 #if defined(__APPLE__) || \
+	defined(__DragonFly__) || \
     defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
     defined(__NetBSD__) || \
     defined(__OpenBSD__) || \
@@ -122,6 +123,7 @@
 			return 1;
 
 #if defined(__APPLE__) || \
+	defined(__DragonFly__) || \
     defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || \
     defined(__NetBSD__) || \
     defined(__CYGWIN__) || defined(__OpenBSD__) || defined (__sun) || \
@@ -175,6 +177,7 @@
 	if (!unix_skt && setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, (const void *)&optval, optlen) < 0)
 		return 1;
 #elif !defined(__APPLE__) && \
+	  !defined(__DragonFly__) && \
       !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) &&        \
       !defined(__NetBSD__) && \
       !defined(__OpenBSD__) && \
@@ -221,6 +224,7 @@
 #endif
 
 #if !defined(__APPLE__) && \
+	  !defined(__DragonFly__) && \
       !defined(__FreeBSD__) && !defined(__FreeBSD_kernel__) &&        \
       !defined(__NetBSD__) && \
       !defined(__OpenBSD__) && \
