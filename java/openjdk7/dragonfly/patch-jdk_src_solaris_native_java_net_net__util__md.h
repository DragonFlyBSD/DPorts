--- jdk/src/solaris/native/java/net/net_util_md.h.intermediate	2013-05-13 10:51:23.858101000 +0000
+++ jdk/src/solaris/native/java/net/net_util_md.h
@@ -37,7 +37,8 @@
 #endif
 
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(MACOSX)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(MACOSX) \
+ || defined(__DragonFly__)
 extern int NET_Timeout(int s, long timeout);
 extern int NET_Read(int s, void* buf, size_t len);
 extern int NET_RecvFrom(int s, void *buf, int len, unsigned int flags,
