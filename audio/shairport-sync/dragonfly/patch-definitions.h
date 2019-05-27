--- definitions.h.orig	2018-10-14 13:35:43 UTC
+++ definitions.h
@@ -19,7 +19,7 @@
 #endif
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__DragonFly__)
 #define COMPILE_FOR_LINUX_AND_FREEBSD_AND_CYGWIN_AND_OPENBSD 1
 #endif
 
