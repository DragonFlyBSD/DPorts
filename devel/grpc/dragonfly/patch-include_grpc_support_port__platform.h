--- include/grpc/support/port_platform.h.orig	2023-04-17 11:36:47.673566000 +0200
+++ include/grpc/support/port_platform.h	2023-04-17 11:37:48.364482000 +0200
@@ -252,6 +252,27 @@
 #else /* _LP64 */
 #define GPR_ARCH_32 1
 #endif /* _LP64 */
+#elif defined(__DragonFly__)
+#define GPR_PLATFORM_STRING "dragonfly"
+#ifndef _BSD_SOURCE
+#define _BSD_SOURCE
+#endif
+#define GPR_DRAGONFLY 1
+#define GPR_CPU_POSIX 1
+#define GPR_GCC_ATOMIC 1
+#define GPR_GCC_TLS 1
+#define GPR_POSIX_LOG 1
+#define GPR_POSIX_ENV 1
+#define GPR_POSIX_TMPFILE 1
+#define GPR_POSIX_STAT 1
+#define GPR_POSIX_STRING 1
+#define GPR_POSIX_SUBPROCESS 1
+#define GPR_POSIX_SYNC 1
+#define GPR_POSIX_TIME 1
+#define GPR_HAS_PTHREAD_H 1
+#define GPR_GETPID_IN_UNISTD_H 1
+#define GPR_SUPPORT_CHANNELS_FROM_FD 1
+#define GPR_ARCH_64 1
 #elif defined(__FreeBSD__)
 #define GPR_PLATFORM_STRING "freebsd"
 #ifndef _BSD_SOURCE
