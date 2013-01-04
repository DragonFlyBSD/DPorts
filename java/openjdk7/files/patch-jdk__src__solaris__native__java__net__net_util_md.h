--- jdk/src/solaris/native/java/net/net_util_md.h.orig	2012-08-10 19:31:31.000000000 +0200
+++ jdk/src/solaris/native/java/net/net_util_md.h	2013-01-03 09:06:24.388907000 +0100
@@ -37,7 +37,8 @@
 #endif
 
 
-#if defined(__linux__) || defined(MACOSX)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(MACOSX) || \
+    defined(__DragonFly__)
 extern int NET_Timeout(int s, long timeout);
 extern int NET_Read(int s, void* buf, size_t len);
 extern int NET_RecvFrom(int s, void *buf, int len, unsigned int flags,
