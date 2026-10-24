--- inputmethod/ibus/im_ibus.c.orig	2026-07-05 16:18:25 UTC
+++ inputmethod/ibus/im_ibus.c
@@ -1059,7 +1059,7 @@ im_info_t *im_ibus_get_info(char *locale, char *encodi
   }
 
   result->id = strdup("ibus");
-  result->name = strdup("iBus");
+  result->name = strdup("ibus");
   result->num_args = 0;
   result->args = NULL;
   result->readable_args = NULL;
