--- lib/sources/xp_loader.cpp.orig	2002-04-03 14:11:15.000000000 +0200
+++ lib/sources/xp_loader.cpp
@@ -34,6 +34,7 @@
 #pragma warning (disable: 4786)
 
 #include <iostream>
+#include <cstdio>  // for EOF
 #include "../xparam/xp_loader.h"
 #include "../xparam/xp_value_sink.h"
 #include "../xparam/xp_parser.h"
