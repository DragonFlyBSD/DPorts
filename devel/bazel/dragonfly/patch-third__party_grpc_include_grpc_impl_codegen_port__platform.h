--- third_party/grpc/include/grpc/impl/codegen/port_platform.h.orig	1979-12-31 23:00:00 UTC
+++ third_party/grpc/include/grpc/impl/codegen/port_platform.h
@@ -277,6 +277,30 @@
 #else /* _LP64 */
 #define GPR_ARCH_32 1
 #endif /* _LP64 */
+#elif defined(__DragonFly__)
+#define GPR_PLATFORM_STRING "dragonfly"
+#ifndef _BSD_SOURCE
+#define _BSD_SOURCE
+#endif
+#define GPR_CPU_POSIX 1
+#define GPR_GCC_ATOMIC 1
+#define GPR_GCC_TLS 1
+#define GPR_POSIX_LOG 1
+#define GPR_POSIX_MULTIPOLL_WITH_POLL 1
+#define GPR_POSIX_WAKEUP_FD 1
+#define GPR_POSIX_NO_SPECIAL_WAKEUP_FD 1
+#define GPR_POSIX_SOCKET 1
+#define GPR_POSIX_SOCKETADDR 1
+#define GPR_POSIX_SOCKETUTILS 1
+#define GPR_POSIX_ENV 1
+#define GPR_POSIX_FILE 1
+#define GPR_POSIX_STRING 1
+#define GPR_POSIX_SUBPROCESS 1
+#define GPR_POSIX_SYNC 1
+#define GPR_POSIX_TIME 1
+#define GPR_GETPID_IN_UNISTD_H 1
+#define GPR_HAVE_SO_NOSIGPIPE 1
+#define GPR_ARCH_64 1
 #else
 #error Could not auto-detect platform
 #endif
