--- common.h.orig	2008-03-20 18:49:38.000000000 +0200
+++ common.h
@@ -25,7 +25,7 @@
 #ifndef COMMON_H
 #define COMMON_H
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 # define bswap_16 bswap16
 # define bswap_32 bswap32
