--- src/kpty.cpp.orig	2023-12-20 10:57:53 UTC
+++ src/kpty.cpp
@@ -73,7 +73,9 @@ public:
     int cmdFd;
 };
 #else
+#ifndef __DragonFly__
 #include <utmp.h>
+#endif /* __DragonFly */
 #if HAVE_UTMPX
 #include <utmpx.h>
 #endif
