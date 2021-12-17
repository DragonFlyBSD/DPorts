--- src/java.base/unix/native/libnio/ch/Net.c.orig	2021-09-14 03:59:48 UTC
+++ src/java.base/unix/native/libnio/ch/Net.c
@@ -97,6 +97,7 @@
  * Copy IPv6 group, interface index, and IPv6 source address
  * into group_source_req structure.
  */
+#ifndef __DragonFly__
 static void initGroupSourceReq(JNIEnv* env, jbyteArray group, jint index,
                                jbyteArray source, struct group_source_req *req)
 {
@@ -112,6 +113,7 @@ static void initGroupSourceReq(JNIEnv* e
     sin6->sin6_family = AF_INET6;
     COPY_INET6_ADDRESS(env, source, (jbyte *)&(sin6->sin6_addr));
 }
+#endif
 
 #ifdef _AIX
 
@@ -601,7 +603,9 @@ Java_sun_nio_ch_Net_joinOrDrop4(JNIEnv *
                                 jint group, jint interf, jint source)
 {
     struct ip_mreq mreq;
+#ifndef __DragonFly__
     struct ip_mreq_source mreq_source;
+#endif
     int opt, n, optlen;
     void* optval;
 
@@ -620,12 +624,16 @@ Java_sun_nio_ch_Net_joinOrDrop4(JNIEnv *
         }
 #endif
 
+#ifdef __DragonFly__
+        return IOS_UNAVAILABLE;
+#else
         mreq_source.imr_multiaddr.s_addr = htonl(group);
         mreq_source.imr_sourceaddr.s_addr = htonl(source);
         mreq_source.imr_interface.s_addr = htonl(interf);
         opt = (join) ? IP_ADD_SOURCE_MEMBERSHIP : IP_DROP_SOURCE_MEMBERSHIP;
         optval = (void*)&mreq_source;
         optlen = sizeof(mreq_source);
+#endif
     }
 
     n = setsockopt(fdval(env,fdo), IPPROTO_IP, opt, optval, optlen);
@@ -648,7 +656,7 @@ JNIEXPORT jint JNICALL
 Java_sun_nio_ch_Net_blockOrUnblock4(JNIEnv *env, jobject this, jboolean block, jobject fdo,
                                     jint group, jint interf, jint source)
 {
-#if defined(_ALLBSD_SOURCE)
+#if defined(_ALLBSD_SOURCE) || defined(__DragonFly__)
     /* no IPv4 exclude-mode filtering for now */
     return IOS_UNAVAILABLE;
 #else
@@ -683,7 +691,9 @@ Java_sun_nio_ch_Net_joinOrDrop6(JNIEnv *
                                 jbyteArray group, jint index, jbyteArray source)
 {
     struct ipv6_mreq mreq6;
+#ifndef __DragonFly__
     struct group_source_req req;
+#endif
     int opt, n, optlen;
     void* optval;
 
@@ -694,7 +704,7 @@ Java_sun_nio_ch_Net_joinOrDrop6(JNIEnv *
         optval = (void*)&mreq6;
         optlen = sizeof(mreq6);
     } else {
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
         /* no IPv6 include-mode filtering for now */
         return IOS_UNAVAILABLE;
 #else
@@ -725,7 +735,7 @@ JNIEXPORT jint JNICALL
 Java_sun_nio_ch_Net_blockOrUnblock6(JNIEnv *env, jobject this, jboolean block, jobject fdo,
                                     jbyteArray group, jint index, jbyteArray source)
 {
-#if defined(_ALLBSD_SOURCE)
+#if defined(_ALLBSD_SOURCE) || defined(__DragonFly__)
     /* no IPv6 exclude-mode filtering for now */
     return IOS_UNAVAILABLE;
 #else
