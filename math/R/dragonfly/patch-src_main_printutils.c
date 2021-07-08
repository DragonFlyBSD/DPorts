--- src/main/printutils.c.orig	2021-07-08 09:52:12.142669000 +0200
+++ src/main/printutils.c	2021-07-08 09:55:29.338198000 +0200
@@ -70,7 +70,7 @@
  * can use our facilities to do so in a UTF-8 locale or system
  * facilities if the platform tells us that wchar_t is UCS-4 or we
  * know that about the platform. */
-#if !defined(__STDC_ISO_10646__) && (defined(__APPLE__) || defined(__FreeBSD__) || defined(__sun))
+#if !defined(__STDC_ISO_10646__) && (defined(__APPLE__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__sun))
 /* This may not be 100% true (see the comment in rlocales.h),
    but it seems true in normal locales */
 # define __STDC_ISO_10646__
