--- lib/cpp/src/thrift/transport/TSocket.cpp.orig	2013-08-15 14:04:29.000000000 +0000
+++ lib/cpp/src/thrift/transport/TSocket.cpp
@@ -158,7 +158,7 @@ bool TSocket::peek() {
   int r = static_cast<int>(recv(socket_, cast_sockopt(&buf), 1, MSG_PEEK));
   if (r == -1) {
     int errno_copy = THRIFT_GET_SOCKET_ERROR;
-    #if defined __FreeBSD__ || defined __MACH__
+    #if defined __FreeBSD__ || defined __MACH__ || defined __DragonFly__
     /* shigin:
      * freebsd returns -1 and THRIFT_ECONNRESET if socket was closed by
      * the other side
@@ -476,7 +476,7 @@ uint32_t TSocket::read(uint8_t* buf, uin
       goto try_again;
     }
 
-    #if defined __FreeBSD__ || defined __MACH__
+    #if defined __FreeBSD__ || defined __MACH__ || defined __DragonFly__
     if (errno_copy == THRIFT_ECONNRESET) {
       /* shigin: freebsd doesn't follow POSIX semantic of recv and fails with
        * THRIFT_ECONNRESET if peer performed shutdown
