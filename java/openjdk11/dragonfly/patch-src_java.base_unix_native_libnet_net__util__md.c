The openjdk8 had IPV6 disabled.

--- src/java.base/unix/native/libnet/net_util_md.c.orig	2019-10-16 18:31:09 UTC
+++ src/java.base/unix/native/libnet/net_util_md.c
@@ -284,7 +284,7 @@ NET_GetFileDescriptorID(JNIEnv *env)
     return (*env)->GetFieldID(env, cls, "fd", "I");
 }
 
-#if defined(DONT_ENABLE_IPV6)
+#if defined(DONT_ENABLE_IPV6) || defined(__DragonFly__)
 jint  IPv6_supported()
 {
     return JNI_FALSE;
