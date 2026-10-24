--- getNameDirController.m.orig
+++ getNameDirController.m
@@ -18,6 +18,7 @@
 */
 
 #import "getNameDirController.h"
+#include <sys/stat.h>
 
 @implementation GetNameDirController
 
