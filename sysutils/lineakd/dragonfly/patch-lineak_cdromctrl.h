--- lineak/cdromctrl.h.intermediate	2016-08-02 12:58:56 UTC
+++ lineak/cdromctrl.h
@@ -20,6 +20,7 @@
 
 #include <lineak/definitions.h>
 #include <string>
+#include <cstring>
 using namespace std;
 /**Control the cdrom device.
   *@author Sheldon Lee Wen
@@ -27,7 +28,7 @@ using namespace std;
 #if defined (__linux__)
 #  define DEFAULT_CDROM_DEVICE "/dev/cdrom"
 #endif
-#if defined (__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined (__DragonFly__) || defined (__FreeBSD__) || defined(__FreeBSD_kernel__)
 #  define DEFAULT_CDROM_DEVICE "/dev/cd0"
 #endif
 #if defined (__CYGWIN__)
