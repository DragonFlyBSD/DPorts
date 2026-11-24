--- src/drivers/Qt/keyscan.cpp.orig
+++ src/drivers/Qt/keyscan.cpp
@@ -46,7 +46,7 @@
 static uint32_t MetaKeyCodeR  = VK_RWIN;
 static BYTE keyBuf[256];
 
-#elif  defined(__linux__) || defined(__FreeBSD__)
+#elif  defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
    #if  defined(_HAS_XKB)
 	#include <xkbcommon/xkbcommon.h>
