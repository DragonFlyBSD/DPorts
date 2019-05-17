--- include/grpc/impl/codegen/port_platform.h.orig	2019-04-23 17:59:32 UTC
+++ include/grpc/impl/codegen/port_platform.h
@@ -244,12 +244,20 @@
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
 #define GPR_GCC_TLS 1
