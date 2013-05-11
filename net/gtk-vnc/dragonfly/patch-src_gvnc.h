--- src/gvnc.h.intermediate	2013-05-10 19:55:13.044258000 +0000
+++ src/gvnc.h
@@ -23,7 +23,7 @@
 
 #include <glib.h>
 #include <stdint.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 
 #define __BYTE_ORDER		_BYTE_ORDER
