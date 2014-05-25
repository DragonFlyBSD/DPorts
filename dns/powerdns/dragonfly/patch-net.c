--- ./pdns/ext/polarssl-1.1.2/library/net.c.orig	2013-12-17 13:48:15.000000000 +0000
+++ ./pdns/ext/polarssl-1.1.2/library/net.c	2014-05-23 22:36:46.991151000 +0100
@@ -59,7 +59,7 @@
 #include <netdb.h>
 #include <errno.h>
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__)
 #include <sys/endian.h>
 #elif defined(__APPLE__)
 #include <machine/endian.h>

