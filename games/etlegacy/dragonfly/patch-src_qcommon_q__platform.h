--- src/qcommon/q_platform.h.orig
+++ src/qcommon/q_platform.h
@@ -248,7 +248,7 @@
 
 //=================================================================== BSD ===
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__)
 
 #include <sys/types.h>
 #include <machine/endian.h>
@@ -263,6 +263,8 @@
 #define OS_STRING "openbsd"
 #elif defined(__NetBSD__)
 #define OS_STRING "netbsd"
+#elif defined(__DragonFly__)
+#define OS_STRING "dragonfly"
 #endif
 
 #define ID_INLINE inline
