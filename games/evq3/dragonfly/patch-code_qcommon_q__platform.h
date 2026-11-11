--- code/qcommon/q_platform.h.orig
+++ code/qcommon/q_platform.h
@@ -174,7 +174,7 @@
 
 //=================================================================== BSD ===
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 
 #include <sys/types.h>
 #include <machine/endian.h>
@@ -187,6 +187,8 @@
 #define OS_STRING "freebsd"
 #elif defined(__OpenBSD__)
 #define OS_STRING "openbsd"
+#elif defined(__DragonFly__)
+#define OS_STRING "dragonfly"
 #elif defined(__NetBSD__)
 #define OS_STRING "netbsd"
 #endif
