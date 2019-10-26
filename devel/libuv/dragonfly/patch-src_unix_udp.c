--- src/unix/udp.c.orig	2019-10-19 21:32:27 UTC
+++ src/unix/udp.c
@@ -653,7 +653,7 @@ static int uv__udp_set_membership6(uv_ud
 }
 
 
-#if !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 static int uv__udp_set_source_membership4(uv_udp_t* handle,
                                           const struct sockaddr_in* multicast_addr,
                                           const char* interface_addr,
