--- html2latex.c.intermediate	2015-12-18 18:38:34.000000000 +0200
+++ html2latex.c
@@ -12,7 +12,7 @@
 #if NEED_GETOPT_H
 #include <getopt.h>
 #else
-#if defined(__FreeBSD__) && __FreeBSD__ >= 3
+#if (defined(__FreeBSD__) && __FreeBSD__ >= 3) || defined(__DragonFly__)
 #include <unistd.h>
 #endif
 #endif
