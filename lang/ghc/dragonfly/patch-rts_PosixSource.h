--- rts/PosixSource.h.orig	2012-06-06 17:10:25.000000000 +0000
+++ rts/PosixSource.h
@@ -11,7 +11,7 @@
 
 #include <ghcplatform.h>
 
-#if defined(freebsd_HOST_OS)
+#if defined(freebsd_HOST_OS) || defined(dragonfly_HOST_OS)
 #define _POSIX_C_SOURCE 200112L
 #define _XOPEN_SOURCE   600
 #else
