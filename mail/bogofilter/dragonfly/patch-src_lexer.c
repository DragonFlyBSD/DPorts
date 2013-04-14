--- src/lexer.c.orig	2012-12-02 20:28:19.000000000 +0000
+++ src/lexer.c
@@ -43,14 +43,12 @@ lexer_t *lexer = NULL;
 
 static lexer_t v3_lexer = {
     yylex,
-    &yytext,
-    &yyleng
+    lexer_v3_get_token
 };
 
 lexer_t msg_count_lexer = {
     read_msg_count_line,
-    &msg_count_text,
-    &msg_count_leng
+    msg_count_get_token
 };
 
 /* Function Prototypes */
