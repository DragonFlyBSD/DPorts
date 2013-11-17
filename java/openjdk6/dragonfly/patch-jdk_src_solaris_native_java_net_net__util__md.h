--- jdk/src/solaris/native/java/net/net_util_md.h.orig	2013-11-14 23:14:54.096137000 +0000
+++ jdk/src/solaris/native/java/net/net_util_md.h
@@ -37,7 +37,7 @@
 #endif
 
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 extern int NET_Timeout(int s, long timeout);
 extern int NET_Read(int s, void* buf, size_t len);
 extern int NET_RecvFrom(int s, void *buf, int len, unsigned int flags,
