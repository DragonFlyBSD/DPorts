--- include/grpc/event_engine/port.h.orig	2021-06-19 00:53:16 UTC
+++ include/grpc/event_engine/port.h
@@ -22,7 +22,7 @@
 #elif defined(GPR_ANDROID) || defined(GPR_LINUX) || defined(GPR_APPLE) ||   \
     defined(GPR_FREEBSD) || defined(GPR_OPENBSD) || defined(GPR_SOLARIS) || \
     defined(GPR_AIX) || defined(GPR_NACL) || defined(GPR_FUCHSIA) ||        \
-    defined(GRPC_POSIX_SOCKET)
+    defined(GRPC_POSIX_SOCKET) || defined(GPR_DRAGONFLY)
 #define GRPC_EVENT_ENGINE_POSIX
 #include <netdb.h>
 #include <netinet/in.h>
