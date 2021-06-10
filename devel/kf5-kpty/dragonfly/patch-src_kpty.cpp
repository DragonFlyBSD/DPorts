--- src/kpty.cpp.orig	2021-06-10 19:58:19.279111000 +0200
+++ src/kpty.cpp	2021-06-10 19:59:12.367909000 +0200
@@ -69,7 +69,9 @@
     int cmdFd;
 };
 #else
+#ifndef __DragonFly__
 #include <utmp.h>
+#endif
 #if HAVE_UTMPX
 #include <utmpx.h>
 #endif
