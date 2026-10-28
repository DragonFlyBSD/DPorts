--- include/grpc/support/port_platform.h.orig	2026-10-26 02:44:38 UTC
+++ include/grpc/support/port_platform.h
@@ -310,8 +310,13 @@
 #else /* _LP64 */
 #define GPR_ARCH_32 1
 #endif /* _LP64 */
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
+/* DragonFly takes the FreeBSD paths (GPR_FREEBSD) throughout */
+#ifdef __DragonFly__
+#define GPR_PLATFORM_STRING "dragonfly"
+#else
 #define GPR_PLATFORM_STRING "freebsd"
+#endif
 #ifndef _BSD_SOURCE
 #define _BSD_SOURCE
 #endif
