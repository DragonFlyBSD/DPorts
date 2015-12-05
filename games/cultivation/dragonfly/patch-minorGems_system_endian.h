--- ../minorGems/system/endian.h.orig	2004-01-12 19:01:05.000000000 +0200
+++ ../minorGems/system/endian.h
@@ -25,6 +25,9 @@
 #ifdef __FreeBSD__
 #include <machine/endian.h>
 
+#elif defined(__DragonFly__)
+#include <sys/endian.h>
+
 #elif defined(__NetBSD__)
 #include <sys/endian.h>
 
