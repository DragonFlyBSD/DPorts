--- src/DesignCompile/CompileExpression.cpp.orig	2021-12-26 21:37:40 UTC
+++ src/DesignCompile/CompileExpression.cpp
@@ -25,6 +25,7 @@
 
 #include <bitset>
 #include <iostream>
+#include <cmath> // for std::fmod()
 
 #include "CommandLine/CommandLineParser.h"
 #include "Design/Design.h"
