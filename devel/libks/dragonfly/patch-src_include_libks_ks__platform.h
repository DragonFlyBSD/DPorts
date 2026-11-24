--- src/include/libks/ks_platform.h.orig
+++ src/include/libks/ks_platform.h
@@ -43,7 +43,7 @@
 #endif
 #endif
 
-#if !defined(_XOPEN_SOURCE) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__APPLE__)
+#if !defined(_XOPEN_SOURCE) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && !defined(__APPLE__)
 #define _XOPEN_SOURCE 600
 #endif
 
