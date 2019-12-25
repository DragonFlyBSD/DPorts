--- scan/sane/OrbliteScan/MacCommon.h.intermediate	2019-12-25 10:51:28.000000000 +0000
+++ scan/sane/OrbliteScan/MacCommon.h
@@ -1,7 +1,7 @@
 #ifndef H_MacCommon
 #define H_MacCommon
 
-#if !defined(__linux__) && !defined(__FreeBSD__)
+#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <CoreFoundation/CFPlugInCOM.h>
 #define __CFPlugInCOM_Included__
 #endif
@@ -10,7 +10,7 @@
 #    include "LinuxCommon.h"
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #    include "BSDCommon.h"
 #endif
 
@@ -261,7 +261,7 @@ typedef struct _GUID {
 
 typedef GUID	CLSID;
 
-#if !defined(__linux__) && !defined(__FreeBSD__)
+#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 const extern CLSID CLSID_NULL;
 const extern GUID GUID_NULL;
 #else
