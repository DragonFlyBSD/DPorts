--- folly/detail/IPAddressSource.h.orig	2019-06-17 05:36:48 UTC
+++ folly/detail/IPAddressSource.h
@@ -30,7 +30,7 @@
 // BSDish platforms don't provide standard access to s6_addr16
 #ifndef s6_addr16
 #if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || \
-    defined(__OpenBSD__)
+    defined(__OpenBSD__) || defined(__DragonFly__)
 #define s6_addr16 __u6_addr.__u6_addr16
 #endif
 #endif
