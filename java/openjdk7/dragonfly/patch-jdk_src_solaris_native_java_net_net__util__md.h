--- jdk/src/solaris/native/java/net/net_util_md.h.orig	2017-07-03 16:34:27.000000000 +0000
+++ jdk/src/solaris/native/java/net/net_util_md.h	2017-07-03 16:35:53.000000000 +0000
@@ -46,7 +46,8 @@
    close subroutine does not return until the select call returns.
    ...
 */
-#if defined(__linux__) || defined(__FreeBSD__) || defined(MACOSX) || defined (_AIX)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(MACOSX) || defined (_AIX) \
+ || defined(__DragonFly__)
 extern int NET_Timeout(int s, long timeout);
 extern int NET_Read(int s, void* buf, size_t len);
 extern int NET_RecvFrom(int s, void *buf, int len, unsigned int flags,
