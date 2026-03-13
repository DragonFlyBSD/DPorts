--- src/core/core-crypto.c.orig	2025-06-09 14:07:51.489659000 +0200
+++ src/core/core-crypto.c	2025-06-09 14:08:52.810303000 +0200
@@ -32,7 +32,7 @@
 #include <gcrypt.h>
 
 /* Bring in htobe64 */
-#ifdef __ANDROID__
+#if defined(__ANDROID__) || defined(__DragonFly__)
 #define _BSD_SOURCE
 #include <endian.h>
 #elif defined(__APPLE__)
