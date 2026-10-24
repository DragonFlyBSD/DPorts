--- router/src/harness/include/mysql/harness/net_ts/impl/netif.h.orig	2026-06-30 16:11:51 UTC
+++ router/src/harness/include/mysql/harness/net_ts/impl/netif.h
@@ -34,7 +34,7 @@
 #include <string_view>
 
 #if defined(__linux__) || defined(__FreeBSD__) || defined(__APPLE__) || \
-    defined(__sun__)
+    defined(__sun__) || defined(__DragonFly__)
 #define HAVE_IFADDRS_H
 #endif
 
