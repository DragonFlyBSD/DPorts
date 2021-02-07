--- src/libs_3rdparty/QSpec/src/drivers/GTMouseDriverLinux.cpp.intermediate	2021-02-04 23:35:32 UTC
+++ src/libs_3rdparty/QSpec/src/drivers/GTMouseDriverLinux.cpp
@@ -23,13 +23,13 @@
 
 #include "GTMouseDriver.h"
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #    include <X11/extensions/XTest.h>
 #endif
 
 namespace HI {
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #    define GT_CLASS_NAME "GTMouseDriver Linux"
 QPoint GTMouseDriver::mousePos = QPoint(-1, -1);
