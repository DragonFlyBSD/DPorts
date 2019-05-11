--- Net/src/SocketImpl.cpp.orig	2018-03-08 14:28:46 UTC
+++ Net/src/SocketImpl.cpp
@@ -934,7 +934,7 @@ void SocketImpl::initSocket(int af, int
 	if (_sockfd == POCO_INVALID_SOCKET)
 		error();
 
-#if defined(__MACH__) && defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__MACH__) && defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	// SIGPIPE sends a signal that if unhandled (which is the default)
 	// will crash the process. This only happens on UNIX, and not Linux.
 	//
