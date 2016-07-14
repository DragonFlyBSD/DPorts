--- phc.cpp.orig	2016-07-14 16:36:47.000000000 +0300
+++ phc.cpp
@@ -10,6 +10,7 @@
 #include <signal.h>
 #include <dlfcn.h>
 #include <unistd.h>
+#include <cstring>
 #include "generated/cmdline.h"
 #include "process_ast/process_ast.h"
 #include <phc/process_ast/PHP_unparser.h>
