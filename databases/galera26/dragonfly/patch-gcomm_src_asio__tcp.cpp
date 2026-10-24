 The DragonFly BSD does not provide struct tcp_info: report empty kernel
 stats, but keep stats() defined (it is a virtual override).

--- gcomm/src/asio_tcp.cpp.orig
+++ gcomm/src/asio_tcp.cpp
@@ -673,6 +673,7 @@
 gcomm::SocketStats gcomm::AsioTcpSocket::stats() const
 {
     SocketStats ret;
+#ifndef __DragonFly__ /* no struct tcp_info */
     try
     {
         auto tcpi(socket_->get_tcp_info());
@@ -696,6 +697,7 @@
     }
     catch (...)
     { }
+#endif
     return ret;
 }
 
