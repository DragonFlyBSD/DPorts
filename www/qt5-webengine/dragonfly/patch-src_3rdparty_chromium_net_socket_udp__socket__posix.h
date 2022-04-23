--- src/3rdparty/chromium/net/socket/udp_socket_posix.h.intermediate	2020-04-21 18:10:04 UTC
+++ src/3rdparty/chromium/net/socket/udp_socket_posix.h
@@ -33,7 +33,7 @@
 
 #if defined(__ANDROID__) && defined(__aarch64__)
 #define HAVE_SENDMMSG 1
-#elif defined(OS_LINUX) || defined(OS_BSD)
+#elif (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_DRAGONFLY)
 #define HAVE_SENDMMSG 1
 #else
 #define HAVE_SENDMMSG 0
