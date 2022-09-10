--- scan/sane/OrbliteScan/MacCommon.h.orig	2022-08-12 08:43:57 UTC
+++ scan/sane/OrbliteScan/MacCommon.h
@@ -6,7 +6,7 @@
 #define __CFPlugInCOM_Included__
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #    include "LinuxCommon.h"
 #endif
 
@@ -257,7 +257,7 @@ typedef struct _GUID {
 
 typedef GUID	CLSID;
 
-#if !defined(__linux__) && !defined(__FreeBSD__)
+#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 const extern CLSID CLSID_NULL;
 const extern GUID GUID_NULL;
 #else
