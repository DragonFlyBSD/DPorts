--- lib/antlr/antlr/CharScanner.hpp.orig	2003-05-29 09:31:42.000000000 +0300
+++ lib/antlr/antlr/CharScanner.hpp
@@ -42,6 +42,7 @@
 #include "antlr/BitSet.hpp"
 #include "antlr/LexerSharedInputState.hpp"
 #include <map>
+#include <cstdio>  // for EOF
 
 ANTLR_BEGIN_NAMESPACE(xparam_antlr)
 
