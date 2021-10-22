--- src/main/printutils.c.ori	2021-10-23 00:05:02.091975000 +0200
+++ src/main/printutils.c	2021-10-23 00:05:50.090906000 +0200
@@ -70,7 +70,7 @@
  * can use our facilities to do so in a UTF-8 locale or system
  * facilities if the platform tells us that wchar_t is UCS-4 or we
  * know that about the platform. */
-#if !defined(__STDC_ISO_10646__) && (defined(__APPLE__) || defined(__FreeBSD__) || defined(__sun))
+#if !defined(__STDC_ISO_10646__) && (defined(__APPLE__) || defined(__DragonFly__) || defined(__FreeBSD__) || defined(__sun))
 /* This may not be 100% true (see the comment in rlocale.h),
    but it seems true in normal locales */
 # define __STDC_ISO_10646__
