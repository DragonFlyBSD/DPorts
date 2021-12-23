--- quest_log.cpp.orig	2021-04-11 19:03:51 UTC
+++ quest_log.cpp
@@ -15,6 +15,7 @@
 #include <iostream>
 #include <fstream>
 #include <sstream>
+#include <cmath> // for std::round()
 
 #include "asc.h"
 #include "context_menu.h"
