--- a/include/grpc/event_engine/port.h.orig	Sat Sep 25 02:33:41 2021
+++ b/include/grpc/event_engine/port.h	Tue Mar
@@ -20,7 +20,7 @@
 #if defined(GPR_ANDROID) || defined(GPR_LINUX) || defined(GPR_APPLE) ||     \
     defined(GPR_FREEBSD) || defined(GPR_OPENBSD) || defined(GPR_SOLARIS) || \
     defined(GPR_AIX) || defined(GPR_NACL) || defined(GPR_FUCHSIA) ||        \
-    defined(GRPC_POSIX_SOCKET)
+    defined(GRPC_POSIX_SOCKET) || defined(GPR_DRAGONFLY)
 #define GRPC_EVENT_ENGINE_POSIX
 #include <arpa/inet.h>
 #include <netdb.h>
