--- core/network/net_platform.h.orig	2023-10-25 14:59:01 UTC
+++ core/network/net_platform.h
@@ -91,7 +91,7 @@ static inline void set_tcp_nodelay(sock_
 #if defined(_WIN32)
 	struct protoent *tcp_proto = getprotobyname("TCP");
 	setsockopt(fd, tcp_proto->p_proto, TCP_NODELAY, (const char *)&optval, optlen);
-#elif !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#elif !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
 	setsockopt(fd, SOL_TCP, TCP_NODELAY, (const void *)&optval, optlen);
 #else
 	struct protoent *tcp_proto = getprotobyname("TCP");
