--- lexer.ll.orig	2003-04-21 14:22:09.000000000 +0300
+++ lexer.ll
@@ -5,6 +5,7 @@
 #define YY_NO_UNPUT
 
 #include <iostream>
+#include <cstring>
 using namespace std;
 
 #include "ast.hh"
