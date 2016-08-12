--- src/include/ndpi_includes.h.orig	2016-06-27 12:19:47.000000000 +0300
+++ src/include/ndpi_includes.h
@@ -46,11 +46,11 @@
 #include <netinet/tcp.h>
 #include <netinet/udp.h>
 
-#if !defined __APPLE__ && !defined __FreeBSD__ && !defined __NetBSD__ && !defined __OpenBSD__
+#if !defined __APPLE__ && !defined __FreeBSD__ && !defined __NetBSD__ && !defined __OpenBSD__ && !defined __DragonFly__
 #include <endian.h>
 #include <byteswap.h>
 
-#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__
+#if defined __FreeBSD__ || defined __NetBSD__ || defined __OpenBSD__ || defined __DragonFly__
 #include <netinet/in.h>
 
 #if defined __NetBSD__ || defined __OpenBSD__
