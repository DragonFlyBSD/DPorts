--- pan/usenet-utils/mime-utils.cc.intermediate	2013-10-14 21:41:25.606837000 +0000
+++ pan/usenet-utils/mime-utils.cc
@@ -25,6 +25,7 @@
 #include <sstream>
 extern "C"
 {
+  #include <sys/param.h>
   #include <unistd.h>
   #include <gmime/gmime.h>
 }
@@ -77,7 +78,8 @@ namespace pan
       outbuf = out + converted;
       outleft = outlen - converted;
 
-#if defined(__NetBSD__) || defined(__FreeBSD__)
+#if defined(__NetBSD__) || defined(__FreeBSD__) || \
+   (defined(__DragonFly__) && __DragonFly_version > 300502)
       converted = iconv (cd, &inbuf, &inleft, &outbuf, &outleft);
 #else
       converted = iconv (cd, (char **) &inbuf, &inleft, &outbuf, &outleft);
