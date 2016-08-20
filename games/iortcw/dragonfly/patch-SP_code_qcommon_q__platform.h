--- SP/code/qcommon/q_platform.h.intermediate	2016-08-17 08:49:14 UTC
+++ SP/code/qcommon/q_platform.h
@@ -202,7 +202,7 @@ Foundation, Inc., 51 Franklin St, Fifth
 
 //=================================================================== BSD ===
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 
 #include <sys/types.h>
 #include <machine/endian.h>
@@ -217,6 +217,8 @@ Foundation, Inc., 51 Franklin St, Fifth
 #define OS_STRING "openbsd"
 #elif defined(__NetBSD__)
 #define OS_STRING "netbsd"
+#elif defined(__DragonFly__)
+#define OS_STRING "dragonfly"
 #endif
 
 #define ID_INLINE inline
@@ -236,6 +238,13 @@ Foundation, Inc., 51 Franklin St, Fifth
 #define Q3_LITTLE_ENDIAN
 #endif
 
+#if defined(__DragonFly__) && defined __x86_64__
+#undef idx64
+#define idx64 1
+#undef ARCH_STRING
+#define ARCH_STRING "x86_64"
+#endif
+
 #define DLL_EXT ".so"
 
 #endif
