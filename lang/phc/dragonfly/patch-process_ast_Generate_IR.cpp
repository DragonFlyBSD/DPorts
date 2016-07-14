--- process_ast/Generate_IR.cpp.orig	2006-09-08 14:24:58.000000000 +0300
+++ process_ast/Generate_IR.cpp
@@ -5,6 +5,7 @@
  * Compile PHP code to the phc intermediate representation
  */
 
+#include <cstdlib> // for exit()
 #include "Generate_IR.h" 
 #include <phc/lib/Integer.h>
 
