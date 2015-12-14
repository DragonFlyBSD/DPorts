--- drgeo_adaptDialog.cc.bak	2015-12-14 13:34:59.000000000 +0200
+++ drgeo_adaptDialog.cc
@@ -33,7 +33,7 @@
 #include "drgeo_menu.h"
 #include "drgenius_mdi.h"
 
-#if !defined(G_PLATFORM_WIN32) && !defined(__FreeBSD__)
+#if !defined(G_PLATFORM_WIN32) && !defined(__FreeBSD__) && !defined(__DragonFly__)
    #include <crypt.h>
 #endif 
 
