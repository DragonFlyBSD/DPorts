--- src/lexer.l.orig	2004-09-25 15:25:25.000000000 +0000
+++ src/lexer.l
@@ -44,7 +44,7 @@ int yylex(void);
 int yyget_lineno(void);
 FILE *yyget_in(void);
 FILE *yyget_out(void);
-int yyget_leng(void);
+size_t yyget_leng(void);
 char *yyget_text(void);
 void yyset_lineno(int  line_number);
 void yyset_in(FILE *  in_str);
