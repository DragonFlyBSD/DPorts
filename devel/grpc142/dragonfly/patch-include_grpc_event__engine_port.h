--- include/grpc/event_engine/port.h.orig	2021-11-16 23:39:48 UTC
+++ include/grpc/event_engine/port.h
@@ -19,8 +19,8 @@
 // Platform-specific sockaddr includes
 #if defined(GPR_ANDROID) || defined(GPR_LINUX) || defined(GPR_APPLE) ||     \
     defined(GPR_FREEBSD) || defined(GPR_OPENBSD) || defined(GPR_SOLARIS) || \
-    defined(GPR_AIX) || defined(GPR_NACL) || defined(GPR_FUCHSIA) ||        \
-    defined(GRPC_POSIX_SOCKET)
+    defined(GPR_AIX) || defined(GPR_NACL) || defined(GPR_FUCHSIA) || \
+    defined(GPR_DRAGONFLY) ||  defined(GRPC_POSIX_SOCKET)
 #define GRPC_EVENT_ENGINE_POSIX
 #include <arpa/inet.h>
 #include <netdb.h>
