--- 3rdparty/joystick/jsNone.cxx.intermediate	2019-03-29 17:51:58 UTC
+++ 3rdparty/joystick/jsNone.cxx
@@ -22,6 +22,11 @@
 
 #include "js.h"
 
+#ifndef TRUE
+#define TRUE  1
+#define FALSE 0
+#endif
+
 struct os_specific_s ;
 
 
