--- thrill/net/tcp/socket.cpp.orig	2020-04-06 07:06:39 UTC
+++ thrill/net/tcp/socket.cpp
@@ -60,7 +60,7 @@ void Socket::SetReuseAddr(bool activate)
 void Socket::SetNoDelay(bool activate) {
     assert(IsValid());
 
-#if __linux__ || __FreeBSD__ || __APPLE__
+#if __linux__ || __FreeBSD__ || __APPLE__ || __DragonFly__
     int sockoptflag = (activate ? 1 : 0);
 
     /* TCP_NODELAY If set, disable the Nagle algorithm. This means that
@@ -81,7 +81,7 @@ void Socket::SetNoDelay(bool activate) {
 void Socket::SetSndBuf(size_t size) {
     assert(IsValid());
 
-#if __linux__ || __FreeBSD__ || __APPLE__
+#if __linux__ || __FreeBSD__ || __APPLE__ || __DragonFly__
 
     int sockoptflag = static_cast<int>(size);
 
@@ -106,7 +106,7 @@ void Socket::SetSndBuf(size_t size) {
 void Socket::SetRcvBuf(size_t size) {
     assert(IsValid());
 
-#if __linux__ || __FreeBSD__ || __APPLE__
+#if __linux__ || __FreeBSD__ || __APPLE__ || __DragonFly__
 
     int sockoptflag = static_cast<int>(size);
 
