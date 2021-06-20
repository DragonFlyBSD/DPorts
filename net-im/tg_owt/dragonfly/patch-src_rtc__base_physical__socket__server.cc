--- src/rtc_base/physical_socket_server.cc.orig	2021-06-19 22:34:52 UTC
+++ src/rtc_base/physical_socket_server.cc
@@ -71,7 +71,8 @@ typedef void* SockOptArg;
 
 #endif  // WEBRTC_POSIX
 
-#if defined(WEBRTC_POSIX) && !defined(WEBRTC_MAC) && !defined(__native_client__) && !defined(__FreeBSD__)
+#if defined(WEBRTC_POSIX) && !defined(WEBRTC_MAC) && !defined(__native_client__) && \
+  !defined(__FreeBSD__) && !defined(__DragonFly__)
 
 int64_t GetSocketRecvTimestamp(int socket) {
   struct timeval tv_ioctl;
@@ -573,7 +574,8 @@ int PhysicalSocket::TranslateOption(Opti
       *slevel = IPPROTO_IP;
       *sopt = IP_DONTFRAGMENT;
       break;
-#elif defined(WEBRTC_MAC) || defined(BSD) || defined(__native_client__) || defined(__FreeBSD__)
+#elif defined(WEBRTC_MAC) || defined(BSD) || defined(__native_client__) || defined(__FreeBSD__) || \
+  defined(__DragonFly__)
       RTC_LOG(LS_WARNING) << "Socket::OPT_DONTFRAGMENT not supported.";
       return -1;
 #elif defined(WEBRTC_POSIX)
