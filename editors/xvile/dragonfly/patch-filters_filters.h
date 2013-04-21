--- filters/filters.h.orig	2012-02-18 01:53:10.000000000 +0000
+++ filters/filters.h
@@ -210,7 +210,6 @@ extern FILE *yyget_in (void);
 extern FILE *yyget_out (void);
 extern char *yyget_text (void);
 extern int yyget_debug (void);
-extern int yyget_leng (void);
 extern int yyget_lineno (void);
 extern int yylex_destroy (void);
 extern void yyset_debug (int bdebug);
