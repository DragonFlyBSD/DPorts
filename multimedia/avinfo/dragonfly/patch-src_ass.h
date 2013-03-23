--- src/ass.h.orig	2005-04-22 05:31:53.000000000 +0000
+++ src/ass.h
@@ -26,7 +26,6 @@
 enum{ MODE_NORMAL=0, MODE_EXPRESSION=1, MODE_VAR=2, MODE_COMMAND=3};
 #include "avinfo.h"
 
-int yyparse(void*);
 var_t Op( var_t var1, var_t var2, int op_type );
 
 typedef struct{
