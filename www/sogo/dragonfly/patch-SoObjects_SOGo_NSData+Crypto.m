--- SoObjects/SOGo/NSData+Crypto.m.orig	2020-10-07 15:11:26 UTC
+++ SoObjects/SOGo/NSData+Crypto.m
@@ -27,7 +27,7 @@
 
 #include <fcntl.h>
 #include <unistd.h>
-#if !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <crypt.h>
 #endif
 
