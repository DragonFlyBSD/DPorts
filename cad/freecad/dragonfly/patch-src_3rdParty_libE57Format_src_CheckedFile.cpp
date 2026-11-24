--- src/3rdParty/libE57Format/src/CheckedFile.cpp.orig
+++ src/3rdParty/libE57Format/src/CheckedFile.cpp
@@ -26,7 +26,7 @@
  */
 
 // convenience helper for all the BSDs
-#if defined( __FreeBSD__ ) || defined( __NetBSD__ ) || defined( __OpenBSD__ )
+#if defined( __FreeBSD__ ) || defined( __NetBSD__ ) || defined( __OpenBSD__ ) || defined( __DragonFly__ )
 #define __BSD
 #endif
 
