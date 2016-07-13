--- symbol_checking.hh.orig	2003-04-21 14:43:13.000000000 +0300
+++ symbol_checking.hh
@@ -5,6 +5,8 @@
 #include "ast.hh"
 #include <set>
 #include <map>
+#include <cstdlib>
+#include <cstring>
 
 namespace type_checking {
     // forward declaration
