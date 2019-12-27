--- libradius/md5c.c.orig	2004-09-20 12:57:37 UTC
+++ libradius/md5c.c
@@ -35,7 +35,7 @@
 #include "md5.h"
 
 #ifndef BYTE_ORDER
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/endian.h>
 #include <sys/endian.h>
 #elif defined(__linux__)
