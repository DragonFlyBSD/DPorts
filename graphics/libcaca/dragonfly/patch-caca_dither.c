--- caca/dither.c.orig	2012-12-28 17:45:12 UTC
+++ caca/dither.c
@@ -1323,7 +1323,7 @@ static void get_rgba_default(caca_dither
             break;
         case 3:
         {
-#if defined(HAVE_ENDIAN_H)
+#if defined(HAVE_ENDIAN_H) && defined(__BYTE_ORDER)
             if(__BYTE_ORDER == __BIG_ENDIAN)
 #else
             /* This is compile-time optimised with at least -O1 or -Os */
