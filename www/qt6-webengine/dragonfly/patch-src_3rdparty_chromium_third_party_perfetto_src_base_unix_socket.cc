diff --git third_party/perfetto/src/base/unix_socket.cc third_party/perfetto/src/base/unix_socket.cc
index b428ec4eaf0..e1636fc1b28 100644
--- src/3rdparty/chromium/third_party/perfetto/src/base/unix_socket.cc
+++ src/3rdparty/chromium/third_party/perfetto/src/base/unix_socket.cc
@@ -42,7 +42,7 @@
 #include <unistd.h>
 #endif
 
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE) || defined(__FreeBSD__)
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/ucred.h>
 #endif
 
@@ -803,7 +803,7 @@ void UnixSocket::ReadPeerCredentialsPosix() {
     return;
   PERFETTO_CHECK(peer_cred_mode_ != SockPeerCredMode::kIgnore);
 
-#if !defined(__FreeBSD__) && PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
+#if (!defined(__FreeBSD__) && !defined(__DragonFly__)) && PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
 #if PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)
   struct sockpeercred user_cred;
