--- magick/magick-type.h.orig	2021-05-09 15:37:03 UTC
+++ magick/magick-type.h
@@ -212,7 +212,7 @@ typedef enum
 
   The macros are thus is only true if the value given is NaN.
 */
-#if defined(MAGICKCORE_HAVE_ISNAN)
+#if defined(MAGICKCORE_HAVE_ISNAN) && !defined(__cplusplus) && !defined(c_plusplus)
 #  define IsNaN(a) isnan(a)
 #elif defined(_MSC_VER) && (_MSC_VER >= 1310)
 #  include <float.h>
