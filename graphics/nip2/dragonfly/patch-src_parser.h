--- src/parser.h.orig	2011-01-25 16:44:07.000000000 +0000
+++ src/parser.h
@@ -54,7 +54,7 @@ extern InputState input_state;
  */
 void yyerror( const char *sub, ... )
 	__attribute__((format(printf, 1, 2)));
-extern int yyleng;			/* lex stuff */
+extern size_t yyleng;			/* lex stuff */
 
 /* Lex gathers tokens here for workspace.c
  */
