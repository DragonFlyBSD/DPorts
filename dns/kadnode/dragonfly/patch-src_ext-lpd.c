--- src/ext-lpd.c.orig	2026-09-01 21:20:00 UTC
+++ src/ext-lpd.c
@@ -24,7 +24,7 @@
 * Local Peer Discovery
 */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
 #define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
 #endif
