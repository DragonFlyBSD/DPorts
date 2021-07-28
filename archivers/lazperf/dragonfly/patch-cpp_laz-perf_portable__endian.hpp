--- cpp/lazperf/portable_endian.hpp.orig	2021-07-27 11:22:16.328502000 +0200
+++ cpp/lazperf/portable_endian.hpp	2021-07-27 11:22:28.208233000 +0200
@@ -43,11 +43,11 @@
 #   define __PDP_ENDIAN    PDP_ENDIAN
 **/
 
-#elif defined(__OpenBSD__)|| defined(__FreeBSD__) 
+#elif defined(__OpenBSD__)|| defined(__FreeBSD__) || defined(__DragonFly__)
 
 #   include <sys/endian.h>
 
-#elif defined(__NetBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__)
 
 #   define be16toh betoh16
 #   define le16toh letoh16
