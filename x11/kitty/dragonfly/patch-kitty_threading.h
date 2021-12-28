--- kitty/threading.h.orig	2021-08-17 06:07:24 UTC
+++ kitty/threading.h
@@ -8,7 +8,7 @@
 
 #include <stdio.h>
 #include <pthread.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define FREEBSD_SET_NAME
 #endif
 #if defined(__APPLE__)
