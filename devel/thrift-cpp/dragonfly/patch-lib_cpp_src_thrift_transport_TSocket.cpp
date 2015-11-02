--- lib/cpp/src/thrift/transport/TSocket.cpp.orig	2015-08-18 18:49:52 UTC
+++ lib/cpp/src/thrift/transport/TSocket.cpp
@@ -214,7 +214,7 @@ bool TSocket::peek() {
   int r = static_cast<int>(recv(socket_, cast_sockopt(&buf), 1, MSG_PEEK));
   if (r == -1) {
     int errno_copy = THRIFT_GET_SOCKET_ERROR;
-#if defined __FreeBSD__ || defined __MACH__
+#if defined __FreeBSD__ || defined __MACH__ || defined __DragonFly__
     /* shigin:
      * freebsd returns -1 and THRIFT_ECONNRESET if socket was closed by
      * the other side
