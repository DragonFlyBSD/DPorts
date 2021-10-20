--- tgl/tl-parser/portable_endian.h.orig	2019-02-03 16:27:00 UTC
+++ tgl/tl-parser/portable_endian.h
@@ -45,7 +45,7 @@
 #	define __LITTLE_ENDIAN LITTLE_ENDIAN
 #	define __PDP_ENDIAN    PDP_ENDIAN
 
-#elif defined(__OpenBSD__) || defined(__FreeBSD__)
+#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #	include <sys/endian.h>
 
@@ -67,7 +67,7 @@
 #	define be64toh(x) BE_IN64(x)
 #	define le64toh(x) LE_IN64(x)
 
-#elif defined(__NetBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__)
 
 #	include <sys/endian.h>
 
