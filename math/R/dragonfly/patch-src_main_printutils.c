--- src/main/printutils.c.orig	2022-03-24 23:02:06 UTC
+++ src/main/printutils.c
@@ -72,7 +72,7 @@
  * know that about the platform. 
  * Add __OpenBSD__ and  __NetBSD__ ?
  */
-#if !defined(__STDC_ISO_10646__) && (defined(__APPLE__) || defined(__FreeBSD__) || defined(__sun))
+#if !defined(__STDC_ISO_10646__) && (defined(__APPLE__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__sun))
 /* This may not be 100% true (see the comment in rlocale.h),
    but it seems true in normal locales */
 # define __STDC_ISO_10646__
