--- src/include/ndpi_unix.h.orig	2016-06-27 12:19:47.000000000 +0300
+++ src/include/ndpi_unix.h
@@ -24,7 +24,7 @@
 #ifndef __NDPI_UNIX_INCLUDE_FILE__
 #define __NDPI_UNIX_INCLUDE_FILE__
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #if defined(__NetBSD__) || defined(__OpenBSD__)
 #include <netinet/in_systm.h>
