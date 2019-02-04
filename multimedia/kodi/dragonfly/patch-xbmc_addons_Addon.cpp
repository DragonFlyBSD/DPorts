--- xbmc/addons/Addon.cpp.orig	2018-08-04 14:03:32.821069000 +0200
+++ xbmc/addons/Addon.cpp	2018-08-04 14:03:44.421319000 +0200
@@ -50,6 +50,9 @@
 #ifdef TARGET_FREEBSD
 #include "freebsd/FreeBSDGNUReplacements.h"
 #endif
+#ifdef TARGET_DRAGONFLY
+#include "dragonfly/DragonFlyGNUReplacements.h"
+#endif
 
 using XFILE::CDirectory;
 using XFILE::CFile;
