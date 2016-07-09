--- lib/antlr/src/TreeParser.cpp.orig	2003-05-29 09:31:49.000000000 +0300
+++ lib/antlr/src/TreeParser.cpp
@@ -32,6 +32,7 @@
 #include "antlr/TreeParser.hpp"
 #include "antlr/ASTNULLType.hpp"
 #include "antlr/MismatchedTokenException.hpp"
+#include <cstdlib>
 #include <iostream>
 
 ANTLR_BEGIN_NAMESPACE(xparam_antlr)
