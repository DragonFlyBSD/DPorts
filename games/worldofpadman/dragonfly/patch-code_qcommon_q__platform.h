--- code/qcommon/q_platform.h.intermediate	2019-05-13 14:42:28.000000000 +0000
+++ code/qcommon/q_platform.h
@@ -170,7 +170,7 @@ Foundation, Inc., 51 Franklin St, Fifth
 
 //=================================================================== BSD ===
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 
 #include <sys/types.h>
 #include <machine/endian.h>
@@ -185,6 +185,8 @@ Foundation, Inc., 51 Franklin St, Fifth
 #define OS_STRING "openbsd"
 #elif defined(__NetBSD__)
 #define OS_STRING "netbsd"
+#elif defined(__DragonFly__)
+#define OS_STRING "dragonfly"
 #endif
 
 #define ID_INLINE inline
