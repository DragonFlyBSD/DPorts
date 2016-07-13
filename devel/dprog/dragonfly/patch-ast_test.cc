--- ast_test.cc.intermediate	2016-07-13 16:55:16 UTC
+++ ast_test.cc
@@ -5,6 +5,7 @@ using namespace ast;
 
 #include <cstdio>
 #include <iostream>
+#include <cstdlib>
 
 int yyparse();
 ast::DProg *dprog = 0;
