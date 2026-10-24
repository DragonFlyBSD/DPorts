--- src/3rdparty/chromium/third_party/perfetto/src/base/unix_socket.cc.intermediate	2026-09-17 08:38:24 UTC
+++ src/3rdparty/chromium/third_party/perfetto/src/base/unix_socket.cc
@@ -45,7 +45,7 @@
 #include <unistd.h>
 #endif
 
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE) || defined(__FreeBSD__)
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_APPLE) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/ucred.h>
 #endif
 
@@ -1031,7 +1031,7 @@ void UnixSocket::ReadPeerCredentialsPosix() {
   int res = getpeereid(fd, &peer_uid_, nullptr);
   PERFETTO_CHECK(res == 0);
   // There is no pid when obtaining peer credentials for QNX
-#elif !defined(__FreeBSD__) && PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
+#elif (!defined(__FreeBSD__) && !defined(__DragonFly__)) && PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
     PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
 #if PERFETTO_BUILDFLAG(PERFETTO_OS_BSD)
   struct sockpeercred user_cred;
