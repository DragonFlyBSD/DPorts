--- a/src/core/lib/iomgr/port.h.orig	Sat Sep 25 02:33:41 2021
+++ b/src/core/lib/iomgr/port.h	Tue Mar
@@ -127,7 +127,7 @@
 #define GRPC_POSIX_SOCKETUTILS 1
 #define GRPC_POSIX_SYSCONF 1
 #define GRPC_POSIX_WAKEUP_FD 1
-#elif defined(GPR_FREEBSD)
+#elif defined(GPR_FREEBSD) || defined(GPR_DRAGONFLY)
 #define GRPC_HAVE_ARPA_NAMESER 1
 #define GRPC_HAVE_IFADDRS 1
 #define GRPC_HAVE_IPV6_RECVPKTINFO 1
