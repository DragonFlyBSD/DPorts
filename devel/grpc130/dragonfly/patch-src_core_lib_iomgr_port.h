--- src/core/lib/iomgr/port.h.orig	2020-07-17 07:26:25 UTC
+++ src/core/lib/iomgr/port.h
@@ -151,7 +151,7 @@
 #define GRPC_POSIX_SOCKETUTILS 1
 #define GRPC_POSIX_SYSCONF 1
 #define GRPC_POSIX_WAKEUP_FD 1
-#elif defined(GPR_FREEBSD)
+#elif defined(GPR_FREEBSD) || defined(GPR_DRAGONFLY)
 #define GRPC_HAVE_ARPA_NAMESER 1
 #define GRPC_HAVE_IFADDRS 1
 #define GRPC_HAVE_IPV6_RECVPKTINFO 1
