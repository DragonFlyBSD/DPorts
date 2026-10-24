--- lib/net.c.orig	2026-06-18 08:15:42 UTC
+++ lib/net.c
@@ -159,7 +159,11 @@ ccnet_net_bind_tcp (int port, int nonblock)
 
     snprintf (buf, sizeof(buf), "%d", port);
 
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
+    if ( (n = getaddrinfo("0.0.0.0", buf, &hints, &res) ) != 0) {
+#else
     if ( (n = getaddrinfo(NULL, buf, &hints, &res) ) != 0) {
+#endif
         ccnet_warning ("getaddrinfo fails: %s\n", gai_strerror(n));
         return -1;
     }
