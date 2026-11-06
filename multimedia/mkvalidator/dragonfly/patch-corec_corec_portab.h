--- corec/corec/portab.h.orig	2026-11-06 08:39:14 UTC
+++ corec/corec/portab.h
@@ -87,9 +87,9 @@
 #define ARM
 #endif
 
-#elif defined(__linux__) || defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define TARGET_FREEBSD
 #endif
 #define TARGET_LINUX
@@ -115,7 +115,7 @@
 
 #if defined(TARGET_LINUX) || defined(TARGET_ANDROID)
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
@@ -231,7 +231,7 @@ typedef signed int intptr_t;
 
 #include <inttypes.h>
 
-#elif !defined(__GLIBC__) && !defined(__MINGW32__) && !defined(TARGET_IPHONE) && !defined(TARGET_ANDROID) && !defined(__FreeBSD__) && __STDC_VERSION__ < 199901L
+#elif !defined(__GLIBC__) && !defined(__MINGW32__) && !defined(TARGET_IPHONE) && !defined(TARGET_ANDROID) && !defined(__FreeBSD__) && !defined(__DragonFly__) && __STDC_VERSION__ < 199901L
 
 #include <inttypes.h>
 
