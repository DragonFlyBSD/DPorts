 The DragonFly BSD does not provide struct tcp_info

--- gcomm/src/asio_udp.hpp.orig	2021-07-22 15:29:52 UTC
+++ gcomm/src/asio_tcp.hpp
@@ -56,7 +56,11 @@ public:
     virtual std::string remote_addr() const GALERA_OVERRIDE;
     virtual State state() const GALERA_OVERRIDE { return state_; }
     virtual SocketId id() const GALERA_OVERRIDE { return &socket_; }
+#ifdef __DragonFly__
+    virtual SocketStats stats() const GALERA_OVERRIDE { return SocketStats(); };
+#else
     virtual SocketStats stats() const GALERA_OVERRIDE;
+#endif
 private:
     // AsioSocketHandler interface
     virtual void connect_handler(gu::AsioSocket&, const gu::AsioErrorCode&) GALERA_OVERRIDE;
