--- libclamav/clamav.h.orig	2022-01-11 00:35:04 UTC
+++ libclamav/clamav.h
@@ -32,7 +32,7 @@
 #include <openssl/err.h>
 
 /* Certain OSs already use 64bit variables in their stat struct */
-#if (!defined(__FreeBSD__) && !defined(__APPLE__))
+#if (!defined(__FreeBSD__) && !defined(__APPLE__) && !defined(__DragonFly__))
 #define STAT64_OK 1
 #else
 #define STAT64_OK 0
