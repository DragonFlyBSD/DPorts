--- src/tee_plugin/tee_plugin.c.orig	2019-04-19 02:06:27 UTC
+++ src/tee_plugin/tee_plugin.c
@@ -712,7 +712,7 @@ int Tee_prepare_sock(struct sockaddr *ad
     }
 
 
-#if defined BSD
+#if defined BSD && !defined(__DragonFly__)  /* no int hincl in code here */
     setsockopt(s, IPPROTO_IP, IP_HDRINCL, &hincl, (socklen_t) sizeof(hincl));
 #endif
   }
