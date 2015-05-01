--- src/util.c.orig	2015-03-05 14:15:09 UTC
+++ src/util.c
@@ -205,11 +205,7 @@ get_pixbuf (gchar * name, YadIconSize si
   return pb;
 }
 
-#ifdef __clang__
 extern inline void
-#else
-inline void
-#endif
 strip_new_line (gchar * str)
 {
   gint nl = strlen (str) - 1;
