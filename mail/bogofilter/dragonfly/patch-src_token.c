--- src/token.c.orig	2010-03-15 00:08:11.000000000 +0000
+++ src/token.c
@@ -205,8 +205,7 @@ token_t parse_new_token(word_t *token)
 
 	cls = (*lexer->yylex)();
 
-	token->leng = (uint)   *lexer->yyleng;
-	token->u.text = (byte *) *lexer->yytext;
+	token->leng = lexer->get_parser_token(&token->u.text);
 	Z(token->u.text[token->leng]);	/* for easier debugging - removable */
 
 	leng = token->leng;
