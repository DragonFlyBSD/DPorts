--- src/3rdparty/chromium/net/socket/udp_socket_posix.h.orig	2023-05-07 18:50:38 UTC
+++ src/3rdparty/chromium/net/socket/udp_socket_posix.h
@@ -35,7 +35,8 @@
 
 #if defined(__ANDROID__) && defined(__aarch64__)
 #define HAVE_SENDMMSG 1
-#elif defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
+#elif defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD) && \
+      !defined(OS_DRAGONFLY)
 #define HAVE_SENDMMSG 1
 #else
 #define HAVE_SENDMMSG 0
