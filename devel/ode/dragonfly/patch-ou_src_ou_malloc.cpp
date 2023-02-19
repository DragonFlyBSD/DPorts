--- ou/src/ou/malloc.cpp.orig	2020-07-30 13:27:35 UTC
+++ ou/src/ou/malloc.cpp
@@ -36,8 +36,11 @@
 
 #else // #if _OU_TARGET_OS != _OU_TARGET_OS_MAC && _OU_TARGET_OS != _OU_TARGET_OS_IOS
 
+#ifdef __DragonFly__
+#include <stdlib.h>
+#else
 #include <malloc.h>
-
+#endif
 
 #endif // #if _OU_TARGET_OS != _OU_TARGET_OS_MAC && _OU_TARGET_OS != _OU_TARGET_OS_IOS
 
