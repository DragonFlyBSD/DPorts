 The DragonFly BSD does not provide struct tcp_info

--- galerautils/src/gu_asio_socket_util.hpp.orig	2021-07-22 15:29:52 UTC
+++ galerautils/src/gu_asio_socket_util.hpp
@@ -143,6 +143,7 @@ static void bind(Socket& socket, const g
     }
 }
 
+#ifndef __DragonFly__
 template <class Socket>
 static struct tcp_info get_tcp_info(Socket& socket)
 {
@@ -165,6 +166,7 @@ static struct tcp_info get_tcp_info(Sock
 #endif /* __linux__ || __FreeBSD__ */
     return tcpi;
 }
+#endif
 
 
 static inline std::string
