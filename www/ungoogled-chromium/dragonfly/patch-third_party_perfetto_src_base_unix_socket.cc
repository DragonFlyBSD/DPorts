diff --git third_party/perfetto/src/base/unix_socket.cc third_party/perfetto/src/base/unix_socket.cc
index 76a91369de9..1e9f4d834a2 100644
--- third_party/perfetto/src/base/unix_socket.cc
+++ third_party/perfetto/src/base/unix_socket.cc
@@ -44,7 +44,7 @@
 #include <unistd.h>
 #endif
 
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE) || defined(__FreeBSD__)
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/ucred.h>
 #endif
 
@@ -917,7 +917,7 @@ void UnixSocket::ReadPeerCredentialsPosix() {
     return;
   PERFETTO_CHECK(peer_cred_mode_ != SockPeerCredMode::kIgnore);
 
-#if !defined(__FreeBSD__) && PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
+#if (!defined(__FreeBSD__) && !defined(__DragonFly__)) && PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
 #if PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)
   struct sockpeercred user_cred;
