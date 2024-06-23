--- libswirl/hw/modem/picoppp.cpp.orig	2020-10-18 11:22:48 UTC
+++ libswirl/hw/modem/picoppp.cpp
@@ -169,7 +169,7 @@ void set_tcp_nodelay(sock_t fd)
 #if defined(_WIN32)
 	struct protoent *tcp_proto = getprotobyname("TCP");
 	setsockopt(fd, tcp_proto->p_proto, TCP_NODELAY, (const char *)&optval, optlen);
-#elif !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
+#elif !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__NetBSD__)
 	setsockopt(fd, SOL_TCP, TCP_NODELAY, (const void *)&optval, optlen);
 #else
 	struct protoent *tcp_proto = getprotobyname("TCP");
