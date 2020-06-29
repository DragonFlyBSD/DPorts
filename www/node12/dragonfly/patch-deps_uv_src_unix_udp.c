--- deps/uv/src/unix/udp.c.orig	2020-06-02 15:46:09 UTC
+++ deps/uv/src/unix/udp.c
@@ -850,7 +850,8 @@ static int uv__udp_set_membership6(uv_ud
 }
 
 
-#if !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__ANDROID__)
+#if !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__ANDROID__) && \
+  !defined(__DragonFly__)
 static int uv__udp_set_source_membership4(uv_udp_t* handle,
                                           const struct sockaddr_in* multicast_addr,
                                           const char* interface_addr,
@@ -1045,7 +1046,8 @@ int uv_udp_set_source_membership(uv_udp_
                                  const char* interface_addr,
                                  const char* source_addr,
                                  uv_membership membership) {
-#if !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__ANDROID__)
+#if !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__ANDROID__) && \
+  !defined(__DragonFly__)
   int err;
   struct sockaddr_storage mcast_addr;
   struct sockaddr_in* mcast_addr4;
