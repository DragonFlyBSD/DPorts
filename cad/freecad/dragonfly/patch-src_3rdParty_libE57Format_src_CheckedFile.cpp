--- src/3rdParty/libE57Format/src/CheckedFile.cpp.orig	2022-12-15 11:03:04.421121000 +0100
+++ src/3rdParty/libE57Format/src/CheckedFile.cpp	2022-12-15 11:03:13.981284000 +0100
@@ -26,7 +26,7 @@
  */
 
 // convenience for all the BSDs
-#if defined( __FreeBSD__) || defined( __NetBSD__) || defined( __OpenBSD__)
+#if defined( __FreeBSD__) || defined( __NetBSD__) || defined( __OpenBSD__) || defined(__DragonFly__)
 #define __BSD
 #endif
 
