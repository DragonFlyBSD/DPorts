--- src/engine/dbg.cpp.orig	2003-04-06 22:56:45.000000000 +0300
+++ src/engine/dbg.cpp
@@ -23,6 +23,7 @@
 #include "dbg.h"
 
 #include <iostream>
+#include <cstdio> // for EOF
 #include <cstdlib>
 #include <string>
 #include <vector>
