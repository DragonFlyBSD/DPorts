--- src/ass.y.orig	2005-04-22 05:31:53.000000000 +0000
+++ src/ass.y
@@ -21,12 +21,13 @@
  *************************************************************************/
 %{
 
+#define 		YYLEX_PARAM 	lexer_ctl
+#define 		YYPARSE_PARAM 	lexer_ctl
+
 #include "avinfo.h"
 #include "ass.h"
 #include "ass.tab.h"
 
-#define 		YYLEX_PARAM 	lexer_ctl
-#define 		YYPARSE_PARAM 	lexer_ctl
 #define 		line 			(((lexerctl_t*)lexer_ctl)->line)
 #define 		pos 			(((lexerctl_t*)lexer_ctl)->c)
 
