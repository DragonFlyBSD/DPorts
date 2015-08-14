--- src/fclang.c.orig	2014-01-20 08:14:20 UTC
+++ src/fclang.c
@@ -183,6 +183,7 @@ FcLangNormalize (const FcChar8 *lang)
 {
     FcChar8 *result = NULL, *s, *orig;
     char *territory, *encoding, *modifier;
+    char *script;
     size_t llen, tlen = 0, mlen = 0;
 
     if (!lang || !*lang)
@@ -242,14 +243,20 @@ FcLangNormalize (const FcChar8 *lang)
 	}
     }
     territory = strchr ((const char *) s, '_');
-    if (!territory)
-	territory = strchr ((const char *) s, '-');
     if (territory)
     {
 	*territory = 0;
 	territory++;
 	tlen = strlen (territory);
     }
+    /* There might by a script component, e.g. sr_Cyrl_RS@UTF-8.  We can't assume all legal locale
+       names are in the form <lang>_<country code>.<encoding>.  If the script component is here,
+       skip it to define the region properly (e.g. "sr" instead of "sr_Cyrl") */
+    script = strchr ((const char *) s, '_');
+    if (script)
+    {
+        *script = 0;
+    }
     llen = strlen ((const char *) s);
     if (llen < 2 || llen > 3)
     {
