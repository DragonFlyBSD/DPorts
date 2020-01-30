--- src/java.base/unix/native/libnio/ch/Net.c.orig	2019-10-16 18:31:09 UTC
+++ src/java.base/unix/native/libnio/ch/Net.c
@@ -552,7 +552,7 @@ JNIEXPORT jint JNICALL
 Java_sun_nio_ch_Net_blockOrUnblock4(JNIEnv *env, jobject this, jboolean block, jobject fdo,
                                     jint group, jint interf, jint source)
 {
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
     /* no IPv4 exclude-mode filtering for now */
     return IOS_UNAVAILABLE;
 #else
@@ -622,7 +622,7 @@ JNIEXPORT jint JNICALL
 Java_sun_nio_ch_Net_blockOrUnblock6(JNIEnv *env, jobject this, jboolean block, jobject fdo,
                                     jbyteArray group, jint index, jbyteArray source)
 {
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
     /* no IPv6 exclude-mode filtering for now */
     return IOS_UNAVAILABLE;
 #else
