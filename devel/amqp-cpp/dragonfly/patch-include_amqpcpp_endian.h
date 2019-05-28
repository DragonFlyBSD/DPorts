--- include/amqpcpp/endian.h.orig	2019-03-07 16:19:48 UTC
+++ include/amqpcpp/endian.h
@@ -116,7 +116,7 @@
 /**
  *  NetBSD handling
  */
-#elif defined(__NetBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__)
 
 #include <sys/endian.h>
 #define be16toh(x) betoh16(x)
@@ -129,7 +129,7 @@
 /**
  * FreeBSD handling
  */
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 
