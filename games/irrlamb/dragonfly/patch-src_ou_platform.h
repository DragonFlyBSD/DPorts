--- src/ou/malloc.cpp.orig	2019-05-11 14:28:25 UTC
+++ src/ou/malloc.cpp
@@ -29,7 +29,7 @@
 #include <ou/customization.h>
 #include <ou/macros.h>
 
-#if _OU_TARGET_OS == _OU_TARGET_OS_MAC || _OU_TARGET_OS == _OU_TARGET_OS_IOS
+#if _OU_TARGET_OS == _OU_TARGET_OS_MAC || _OU_TARGET_OS == _OU_TARGET_OS_IOS || defined(__DragonFly__)
 
 #include <stdlib.h>
 
