--- components/named_mojo_ipc_server/named_mojo_server_endpoint_connector_linux.cc.orig	2026-09-20 15:04:49 UTC
+++ components/named_mojo_ipc_server/named_mojo_server_endpoint_connector_linux.cc
@@ -8,7 +8,7 @@
 #include <sys/stat.h>
 #include <sys/types.h>
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/un.h>
 #endif
 
@@ -90,7 +90,7 @@
 
   auto info = std::make_unique<ConnectionInfo>();
   socklen_t len = sizeof(info->credentials);
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   if (getsockopt(connection_fd.get(), SOL_SOCKET, LOCAL_PEERCRED,
 #else
   if (getsockopt(connection_fd.get(), SOL_SOCKET, SO_PEERCRED,
@@ -99,7 +99,10 @@
     PLOG(ERROR) << "getsockopt failed.";
     return;
   }
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_DRAGONFLY)
+  // DragonFly's struct xucred carries no cr_pid, and it has no peer-pid
+  // socket option, so the peer pid is unavailable -- as on OpenBSD.
+#elif BUILDFLAG(IS_FREEBSD)
   info->pid = info->credentials.cr_pid;
 #elif !BUILDFLAG(IS_OPENBSD)
   info->pid = info->credentials.pid;
