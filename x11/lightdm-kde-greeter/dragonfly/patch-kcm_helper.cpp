--- kcm/helper.cpp.orig	2026-11-05 13:06:41 UTC
+++ kcm/helper.cpp
@@ -24,6 +24,11 @@
 #include <unistd.h>
 #include <sys/stat.h>
 
+// DragonFly has no O_PATH.
+#ifndef O_PATH
+#define O_PATH 0
+#endif
+
 #include "config.h"
 
 using namespace Qt::StringLiterals;
