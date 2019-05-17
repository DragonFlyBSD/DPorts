--- src/core/lib/iomgr/port.h.orig	2019-04-23 17:59:32 UTC
+++ src/core/lib/iomgr/port.h
@@ -133,7 +133,7 @@
 #define GRPC_POSIX_SOCKETUTILS 1
 #define GRPC_POSIX_SYSCONF 1
 #define GRPC_POSIX_WAKEUP_FD 1
-#elif defined(GPR_FREEBSD)
+#elif defined(GPR_FREEBSD) || defined(GPR_DRAGONFLY)
 #define GRPC_HAVE_ARPA_NAMESER 1
 #define GRPC_HAVE_IFADDRS 1
 #define GRPC_HAVE_IPV6_RECVPKTINFO 1
