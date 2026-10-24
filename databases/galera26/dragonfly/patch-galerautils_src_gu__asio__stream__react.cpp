 The DragonFly BSD does not provide struct tcp_info

--- galerautils/src/gu_asio_stream_react.cpp.orig	2026-10-23 00:00:00 UTC
+++ galerautils/src/gu_asio_stream_react.cpp
@@ -339,6 +339,7 @@
     gu_throw_system_error(e.code().value()) << "error getting send buffer size";
 }
 
+#ifndef __DragonFly__
 struct tcp_info gu::AsioStreamReact::get_tcp_info() try
 {
     return ::get_tcp_info(socket_);
@@ -347,6 +348,7 @@
 {
     gu_throw_system_error(e.code().value()) << "error getting TCP info";
 }
+#endif
 
 
 void gu::AsioStreamReact::complete_client_handshake(
