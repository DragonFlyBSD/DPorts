The openjdk8 had IPV6 disabled.

--- src/java.base/unix/native/libnet/net_util_md.c.orig
+++ src/java.base/unix/native/libnet/net_util_md.c
@@ -98,7 +98,7 @@
     return JNI_TRUE;
 }
 
-#if defined(DONT_ENABLE_IPV6)
+#if defined(DONT_ENABLE_IPV6) || defined(__DragonFly__)
 jint  IPv6_supported()
 {
     return JNI_FALSE;
