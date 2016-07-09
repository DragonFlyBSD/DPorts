--- lib/antlr/src/Parser.cpp.orig	2003-05-29 09:31:49.000000000 +0300
+++ lib/antlr/src/Parser.cpp
@@ -36,6 +36,7 @@
 #include "antlr/TokenBuffer.hpp"
 #include "antlr/MismatchedTokenException.hpp"
 //#include "antlr/ASTFactory.hpp"
+#include <cstdlib>
 #include <iostream>
 
 ANTLR_BEGIN_NAMESPACE(xparam_antlr)
