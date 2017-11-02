--- src/LYStrings.c.orig	2013-11-29 00:52:56 UTC
+++ src/LYStrings.c
@@ -1004,12 +1004,13 @@ static const char *expand_tiname(const c
 {
     char name[BUFSIZ];
     int code;
+    TERMTYPE *tp = (TERMTYPE *) (cur_term);
 
     LYStrNCpy(name, first, len);
     if ((code = lookup_tiname(name, strnames)) >= 0
 	|| (code = lookup_tiname(name, strfnames)) >= 0) {
-	if (cur_term->type.Strings[code] != 0) {
-	    LYStrNCpy(*result, cur_term->type.Strings[code], (final - *result));
+	if (tp->Strings[code] != 0) {
+	    LYStrNCpy(*result, tp->Strings[code], (final - *result));
 	    (*result) += strlen(*result);
 	}
     }
