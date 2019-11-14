--- Singular/feOpt.cc.orig	2018-02-14 14:55:29 UTC
+++ Singular/feOpt.cc
@@ -93,6 +93,8 @@ int main()
 
 #else // ! GENERATE_OPTION_INDEX
 
+#include <cstring>	// for strcmp()
+
 ///////////////////////////////////////////////////////////////
 //
 // Getting Values
