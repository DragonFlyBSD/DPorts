--- src/ssl.c.orig	Wed Jan  8 20:55:23 2025
+++ src/ssl.c	Sat Nov
@@ -1,5 +1,5 @@
 //getaddrinfo is an extension (not C99)
-#if !defined(_WIN32) && !defined(__sun) && !defined(_POSIX_C_SOURCE)
+#if !defined(_WIN32) && !defined(__sun) && !defined(_POSIX_C_SOURCE) && !defined(__DragonFly__)
 #define _POSIX_C_SOURCE 200112L
 #endif
 
@@ -9,7 +9,7 @@
 #endif
 
 //see https://github.com/jeroen/openssl/issues/41
-#if defined(__FreeBSD__) || defined(__DragonFly__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
 #if !defined(__BSD_VISIBLE)
 #define __BSD_VISIBLE 1
 #endif
