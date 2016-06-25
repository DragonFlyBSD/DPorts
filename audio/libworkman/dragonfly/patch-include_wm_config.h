--- include/wm_config.h.orig	1999-05-05 18:34:22.000000000 +0200
+++ include/wm_config.h
@@ -133,7 +133,7 @@
  ***  ******  **  **  ******  ******  **  ******  **  *  **********
  ***  ******  **  **      **      **     ****    ***    ***********
  ******************************************************************/
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__NetBSD__)
 
 #define DEFAULT_CD_DEVICE	"/dev/rmatcd0c"
 
