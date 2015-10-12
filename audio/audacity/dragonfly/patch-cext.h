--- lib-src/libnyquist/nyquist/cmt/cext.h	2015-10-11 11:27:20.645123000 +0200
+++ lib-src/libnyquist/nyquist/cmt/cext.h	2015-10-11 11:28:01.486279000 +0200
@@ -58,7 +58,7 @@
 #include <malloc.h>
 #endif

-#if NEED_ULONG || __FreeBSD__
+#if NEED_ULONG || __FreeBSD__ || defined(__DragonFly__)
 typedef unsigned long ulong;
 #endif

