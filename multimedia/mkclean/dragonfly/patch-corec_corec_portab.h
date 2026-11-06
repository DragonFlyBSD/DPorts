--- corec/corec/portab.h.orig	2021-01-31 14:23:41 UTC
+++ corec/corec/portab.h
@@ -87,7 +87,7 @@
 #define ARM
 #endif
 
-#elif defined(__linux__) || defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__CYGWIN__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
 
 #define TARGET_LINUX
 
@@ -112,7 +112,7 @@
 
 #if defined(TARGET_LINUX) || defined(TARGET_ANDROID)
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
@@ -228,7 +228,7 @@ typedef signed int intptr_t;
 
 #include <inttypes.h>
 
-#elif !defined(__GLIBC__) && !defined(__MINGW32__) && !defined(TARGET_IPHONE) && !defined(TARGET_ANDROID) && !defined(__FreeBSD__) && __STDC_VERSION__ < 199901L
+#elif !defined(__GLIBC__) && !defined(__MINGW32__) && !defined(TARGET_IPHONE) && !defined(TARGET_ANDROID) && !defined(__FreeBSD__) && !defined(__DragonFly__) && __STDC_VERSION__ < 199901L
 
 #include <inttypes.h>
 
