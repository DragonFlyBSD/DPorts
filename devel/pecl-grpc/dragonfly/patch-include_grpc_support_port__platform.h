--- include/grpc/support/port_platform.h.orig	2023-10-09 21:31:11 UTC
+++ include/grpc/support/port_platform.h
@@ -252,12 +252,20 @@
 #else /* _LP64 */
 #define GPR_ARCH_32 1
 #endif /* _LP64 */
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
+#ifdef __DragonFly__
+#define GPR_PLATFORM_STRING "dragonfly"
+#else
 #define GPR_PLATFORM_STRING "freebsd"
+#endif
 #ifndef _BSD_SOURCE
 #define _BSD_SOURCE
 #endif
+#ifdef __DragonFly__
+#define GPR_DRAGONFLY 1
+#else
 #define GPR_FREEBSD 1
+#endif
 #define GPR_CPU_POSIX 1
 #define GPR_GCC_ATOMIC 1
 #define GPR_POSIX_LOG 1
