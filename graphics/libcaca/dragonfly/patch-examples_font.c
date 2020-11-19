--- examples/font.c.orig	2012-12-28 17:47:16 UTC
+++ examples/font.c
@@ -78,7 +78,7 @@ int main(int argc, char *argv[])
     dp = caca_create_display(cv);
 
     {
-#if defined(HAVE_ENDIAN_H)
+#if defined(HAVE_ENDIAN_H) && defined(__BYTE_ORDER)
         if(__BYTE_ORDER == __BIG_ENDIAN)
 #else
         /* This is compile-time optimised with at least -O1 or -Os */
