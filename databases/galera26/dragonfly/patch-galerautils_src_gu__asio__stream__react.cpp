 The DragonFly BSD does not provide struct tcp_info

--- galerautils/src/gu_asio_stream_react.cpp.orig	2021-07-22 15:29:52 UTC
+++ galerautils/src/gu_asio_stream_react.cpp
@@ -272,10 +272,12 @@ size_t gu::AsioStreamReact::get_send_buf
     return ::get_send_buffer_size(socket_);
 }
 
+#ifndef __DragonFly__
 struct tcp_info gu::AsioStreamReact::get_tcp_info()
 {
     return ::get_tcp_info(socket_);
 }
+#endif
 
 
 void gu::AsioStreamReact::connect_handler(
