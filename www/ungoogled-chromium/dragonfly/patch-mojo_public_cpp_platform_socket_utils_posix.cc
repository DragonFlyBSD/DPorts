diff --git mojo/public/cpp/platform/socket_utils_posix.cc mojo/public/cpp/platform/socket_utils_posix.cc
index c7e609a16b9..0ba86f9bc57 100644
--- mojo/public/cpp/platform/socket_utils_posix.cc
+++ mojo/public/cpp/platform/socket_utils_posix.cc
@@ -29,7 +29,7 @@ bool IsRecoverableError() {
 }
 
 bool GetPeerEuid(base::PlatformFile fd, uid_t* peer_euid) {
-#if BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_OPENBSD) || BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_OPENBSD) || BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   uid_t socket_euid;
   gid_t socket_gid;
   if (getpeereid(fd, &socket_euid, &socket_gid) < 0) {
