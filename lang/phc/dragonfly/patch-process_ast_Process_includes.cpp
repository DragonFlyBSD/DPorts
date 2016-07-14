--- process_ast/Process_includes.cpp.orig	2006-09-08 14:24:58.000000000 +0300
+++ process_ast/Process_includes.cpp
@@ -9,6 +9,7 @@
 #include <libgen.h> // for dirname
 #include <iostream>
 #include <fstream>
+#include <cstring>
 #include "Process_includes.h"
 #include <phc/Tree_visitor.h>
 #include <phc/ast.h>
