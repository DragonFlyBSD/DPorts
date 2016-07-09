--- lib/antlr/src/CharScanner.cpp.orig	2003-05-29 09:31:49.000000000 +0300
+++ lib/antlr/src/CharScanner.cpp
@@ -32,6 +32,7 @@
 
 #pragma warning (disable: 4355)
 
+#include <cstdlib>
 #include "antlr/CharScanner.hpp"
 #include "antlr/CommonToken.hpp"
 #include "antlr/MismatchedCharException.hpp"
