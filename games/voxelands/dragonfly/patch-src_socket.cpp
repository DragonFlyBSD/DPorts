--- src/socket.cpp.orig	2016-04-30 06:49:46 UTC
+++ src/socket.cpp
@@ -374,7 +374,7 @@ TCPSocket::TCPSocket()
 #else
 	int a=1;
 	setsockopt(m_handle, SOL_SOCKET, SO_REUSEADDR, &a, sizeof(int));
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	setsockopt(m_handle, SOL_SOCKET, SO_NOSIGPIPE, &a, sizeof(int));
 #endif
 #endif
