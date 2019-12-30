--- lib/ublio/ublio_conf.h.orig	2018-01-18 14:20:39 UTC
+++ lib/ublio/ublio_conf.h
@@ -45,7 +45,7 @@
  * underlying OS, but this neither excludes false positives, nor false
  * negatives.
  */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define HAS_PIOV         1
 #else
 #define HAS_PIOV         0
