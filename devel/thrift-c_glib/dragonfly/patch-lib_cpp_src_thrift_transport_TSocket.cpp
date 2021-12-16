--- lib/cpp/src/thrift/transport/TSocket.cpp.orig	2021-02-04 23:07:31 UTC
+++ lib/cpp/src/thrift/transport/TSocket.cpp
@@ -241,7 +241,7 @@ bool TSocket::peek() {
   int r = static_cast<int>(recv(socket_, cast_sockopt(&buf), 1, MSG_PEEK));
   if (r == -1) {
     int errno_copy = THRIFT_GET_SOCKET_ERROR;
-#if defined __FreeBSD__ || defined __MACH__
+#if defined __FreeBSD__ || defined(__DragonFly__) || defined __MACH__
     /* shigin:
      * freebsd returns -1 and THRIFT_ECONNRESET if socket was closed by
      * the other side
