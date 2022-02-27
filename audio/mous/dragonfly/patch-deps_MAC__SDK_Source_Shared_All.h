--- deps/MAC_SDK/Source/Shared/All.h.intermediate	2022-02-01 06:30:04.000000000 +0000
+++ deps/MAC_SDK/Source/Shared/All.h
@@ -199,9 +199,13 @@ Global defines
 /*****************************************************************************************
 Byte order
 *****************************************************************************************/
+#ifdef __DragonFly__
+#include <machine/endian.h>
+#else
 #define __LITTLE_ENDIAN     1234
 #define __BIG_ENDIAN        4321
 #define __BYTE_ORDER        __LITTLE_ENDIAN
+#endif
 
 /*****************************************************************************************
 Macros
