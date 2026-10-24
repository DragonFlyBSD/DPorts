--- gucharmap/gucharmap-unicode-info.h.orig	2026-03-08 07:43:23 UTC
+++ gucharmap/gucharmap-unicode-info.h
@@ -61,6 +61,7 @@ G_BEGIN_DECLS
  * @GUCHARMAP_UNICODE_VERSION_15_1: Unicode version 15.1
  * @GUCHARMAP_UNICODE_VERSION_16_0: Unicode version 16.0
  * @GUCHARMAP_UNICODE_VERSION_17_0: Unicode version 17.0
+ * @GUCHARMAP_UNICODE_VERSION_18_0: Unicode version 18.0
  * @GUCHARMAP_UNICODE_VERSION_LATEST: Latest Unicode version
  */
 typedef enum {
@@ -93,7 +94,8 @@ typedef enum {
   GUCHARMAP_UNICODE_VERSION_15_1,
   GUCHARMAP_UNICODE_VERSION_16_0,
   GUCHARMAP_UNICODE_VERSION_17_0,
-  GUCHARMAP_UNICODE_VERSION_LATEST = GUCHARMAP_UNICODE_VERSION_17_0 /* private, will move forward with each revision */
+  GUCHARMAP_UNICODE_VERSION_18_0,
+  GUCHARMAP_UNICODE_VERSION_LATEST = GUCHARMAP_UNICODE_VERSION_18_0 /* private, will move forward with each revision */
 } GucharmapUnicodeVersion;
 
 /* return values are read-only */
