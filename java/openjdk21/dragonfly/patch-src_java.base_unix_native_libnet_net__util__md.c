The openjdk8 had IPV6 disabled.

--- src/java.base/unix/native/libnet/net_util_md.c.orig	2021-09-14 03:59:48 UTC
+++ src/java.base/unix/native/libnet/net_util_md.c
@@ -118,7 +118,7 @@ jint  IPv4_supported()
     return JNI_TRUE;
 }
 
-#if defined(DONT_ENABLE_IPV6)
+#if defined(DONT_ENABLE_IPV6) || defined(__DragonFly__)
 jint  IPv6_supported()
 {
     return JNI_FALSE;
