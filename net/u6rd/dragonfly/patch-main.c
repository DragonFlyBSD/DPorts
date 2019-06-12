--- main.c.intermediate	2019-06-11 08:55:11.000000000 +0000
+++ main.c
@@ -609,7 +609,7 @@ tun2raw(struct connection *c)
 	ip4->ver_hlen = 4 << 4 | sizeof(*ip4) >> 2;
 	ip4->tos = ntohl(ip6->ver_class_label) >> 20 & 0xff;
 #if defined(__OpenBSD__) || defined(__linux__) || \
-    (defined(__FreeBSD__) && __FreeBSD_version >= 1100030)
+    (defined(__FreeBSD__) && __FreeBSD_version >= 1100030) || defined(__DragonFly__)
 	ip4->len = htons(len + sizeof(*ip4));
 #else
 	ip4->len = len + sizeof(*ip4);
