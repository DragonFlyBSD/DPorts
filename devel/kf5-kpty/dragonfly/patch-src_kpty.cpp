--- src/kpty.cpp.orig	2019-07-07 18:37:11 UTC
+++ src/kpty.cpp
@@ -95,7 +95,9 @@ public:
     int cmdFd;
 };
 #else
+#ifndef __DragonFly__
 # include <utmp.h>
+#endif
 # if HAVE_UTMPX
 #  include <utmpx.h>
 # endif
