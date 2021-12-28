 The DragonFly BSD does not provide stuct tcp_info

--- galerautils/src/gu_asio_stream_react.hpp.orig	2021-07-22 15:29:52 UTC
+++ galerautils/src/gu_asio_stream_react.hpp
@@ -66,7 +66,9 @@ namespace gu
         virtual size_t get_receive_buffer_size() GALERA_OVERRIDE;
         virtual void set_send_buffer_size(size_t) GALERA_OVERRIDE;
         virtual size_t get_send_buffer_size() GALERA_OVERRIDE;
+#ifndef __DragonFly__
         virtual struct tcp_info get_tcp_info() GALERA_OVERRIDE;
+#endif
 
 
         // Handlers for ASIO service.
