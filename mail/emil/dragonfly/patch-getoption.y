--- getoption.y.orig	1996-06-04 13:17:35.000000000 +0000
+++ getoption.y
@@ -170,6 +170,7 @@ extern 	char	* yytext;	/* defined by fle
 */
 
 #define	yywrap()	1
+#define YY_SKIP_YYWRAP	1
 
 static	void	yyerror(char * msg)
 {
