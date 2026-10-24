--- components/named_mojo_ipc_server/connection_info.h.orig	2026-09-20 15:04:49 UTC
+++ components/named_mojo_ipc_server/connection_info.h
@@ -35,7 +35,7 @@
   audit_token_t audit_token{};
 #elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_OPENBSD)
   ucred credentials{};
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   xucred credentials{};
 #elif BUILDFLAG(IS_WIN)
   // The process of the peer. Only valid if `include_peer_process_info` is true
