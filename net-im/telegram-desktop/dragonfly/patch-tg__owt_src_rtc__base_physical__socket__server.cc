--- tg_owt/src/rtc_base/physical_socket_server.cc.intermediate	2020-09-26 10:40:40 UTC
+++ tg_owt/src/rtc_base/physical_socket_server.cc
@@ -72,7 +72,8 @@ typedef void* SockOptArg;
 
 #endif  // WEBRTC_POSIX
 
-#if defined(WEBRTC_POSIX) && !defined(WEBRTC_MAC) && !defined(__native_client__) && !defined(__FreeBSD__)
+#if defined(WEBRTC_POSIX) && !defined(WEBRTC_MAC) && !defined(__native_client__) && \
+  !defined(__FreeBSD__) && !defined(__DragonFly__)
 
 int64_t GetSocketRecvTimestamp(int socket) {
   struct timeval tv_ioctl;
@@ -553,7 +554,8 @@ int PhysicalSocket::TranslateOption(Opti
       *slevel = IPPROTO_IP;
       *sopt = IP_DONTFRAGMENT;
       break;
-#elif defined(WEBRTC_MAC) || defined(BSD) || defined(__native_client__) || defined(__FreeBSD__)
+#elif defined(WEBRTC_MAC) || defined(BSD) || defined(__native_client__) || defined(__FreeBSD__) || \
+  defined(__DragonFly__)
       RTC_LOG(LS_WARNING) << "Socket::OPT_DONTFRAGMENT not supported.";
       return -1;
 #elif defined(WEBRTC_POSIX)
