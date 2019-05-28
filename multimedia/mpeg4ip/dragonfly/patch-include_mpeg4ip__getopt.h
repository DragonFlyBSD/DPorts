--- include/mpeg4ip_getopt.h.intermediate	2019-05-28 14:33:10.000000000 +0000
+++ include/mpeg4ip_getopt.h
@@ -10,7 +10,7 @@
 #endif
 
 #ifdef HAVE_GETOPT_H
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define __GNU_LIBRARY__
 #endif
 #include <getopt.h>
