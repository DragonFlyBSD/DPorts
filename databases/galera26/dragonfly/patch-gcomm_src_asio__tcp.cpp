 The DragonFly BSD does not provide struct tcp_info

--- gcomm/src/asio_tcp.cpp.orig	2021-07-22 15:29:52 UTC
+++ gcomm/src/asio_tcp.cpp
@@ -651,9 +651,12 @@ void gcomm::AsioTcpSocket::cancel_deferr
     if (timer) timer->cancel();
 }
 
+#ifndef __DragonFly__
 gcomm::SocketStats gcomm::AsioTcpSocket::stats() const
 {
     SocketStats ret;
+#ifndef __DragonFly__
+/* XXX emmmm??? */
     try
     {
         auto tcpi(socket_->get_tcp_info());
@@ -677,8 +680,10 @@ gcomm::SocketStats gcomm::AsioTcpSocket:
     }
     catch (...)
     { }
+#endif
     return ret;
 }
+#endif
 
 gcomm::AsioTcpAcceptor::AsioTcpAcceptor(AsioProtonet& net, const gu::URI& uri)
     :
