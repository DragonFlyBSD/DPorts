--- packet.c.orig
+++ packet.c
@@ -46,7 +46,7 @@
 // ether_addr_octet. Some systems just use the name octet but provide
 // a #define for ether_addr_octet. FreeBSD uses octet, but currently
 // does not provide a #define.
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # if !defined(ether_addr_octet)
 #  define ether_addr_octet octet
 # endif
