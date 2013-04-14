--- src/lexer.h.orig	2007-07-27 03:36:37.000000000 +0000
+++ src/lexer.h
@@ -47,8 +47,7 @@ typedef token_t yylex_t(void);
 
 typedef struct lexer_s {
     yylex_t  *yylex;
-    char    **yytext;
-    int      *yyleng; /* DO NOT EVEN CONSIDER MAKING THIS SIZE_T! */
+    long (*get_parser_token)(byte **data);
 } lexer_t;
 
 extern lexer_t *lexer;
@@ -56,9 +55,8 @@ extern lexer_t	msg_count_lexer;
 
 /* in lexer_v3.l */
 extern token_t	yylex(void);
-extern int	yyleng;
-extern char   * yytext;
 extern void	lexer_v3_init(FILE *fp);
+extern long     lexer_v3_get_token(byte **output);
 
 /* in lexer_v?.c */
 extern char yy_get_state(void);
