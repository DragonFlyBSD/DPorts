--- src/java.base/unix/native/libnio/ch/Net.c.orig
+++ src/java.base/unix/native/libnio/ch/Net.c
@@ -102,6 +102,7 @@
  * Copy IPv6 group, interface index, and IPv6 source address
  * into group_source_req structure.
  */
+#ifndef __DragonFly__
 static void initGroupSourceReq(JNIEnv* env, jbyteArray group, jint index,
                                jbyteArray source, struct group_source_req *req)
 {
@@ -117,6 +118,7 @@
     sin6->sin6_family = AF_INET6;
     COPY_INET6_ADDRESS(env, source, (jbyte *)&(sin6->sin6_addr));
 }
+#endif
 
 #ifdef _AIX
 
@@ -668,7 +670,9 @@
                                 jint group, jint interf, jint source)
 {
     struct ip_mreq mreq;
+#ifndef __DragonFly__
     struct ip_mreq_source mreq_source;
+#endif
     int opt, n, optlen;
     void* optval;
 
@@ -687,12 +691,16 @@
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
@@ -725,7 +733,7 @@
 Java_sun_nio_ch_Net_blockOrUnblock4(JNIEnv *env, jobject this, jboolean block, jobject fdo,
                                     jint group, jint interf, jint source)
 {
-#if defined(_ALLBSD_SOURCE)
+#if defined(_ALLBSD_SOURCE) || defined(__DragonFly__)
     /* no IPv4 exclude-mode filtering for now */
     return IOS_UNAVAILABLE;
 #else
@@ -760,7 +768,9 @@
                                 jbyteArray group, jint index, jbyteArray source)
 {
     struct ipv6_mreq mreq6;
+#ifndef __DragonFly__
     struct group_source_req req;
+#endif
     int opt, n, optlen;
     void* optval;
 
@@ -771,7 +781,7 @@
         optval = (void*)&mreq6;
         optlen = sizeof(mreq6);
     } else {
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
         /* no IPv6 include-mode filtering for now */
         return IOS_UNAVAILABLE;
 #else
@@ -802,7 +812,7 @@
 Java_sun_nio_ch_Net_blockOrUnblock6(JNIEnv *env, jobject this, jboolean block, jobject fdo,
                                     jbyteArray group, jint index, jbyteArray source)
 {
-#if defined(_ALLBSD_SOURCE)
+#if defined(_ALLBSD_SOURCE) || defined(__DragonFly__)
     /* no IPv6 exclude-mode filtering for now */
     return IOS_UNAVAILABLE;
 #else
