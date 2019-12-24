--- Kernel/Operation_Broadcast.cpp.orig	2019-11-22 11:40:16 UTC
+++ Kernel/Operation_Broadcast.cpp
@@ -5,6 +5,7 @@
 
 #include <vector>
 #include <string>
+#include <cstring>	// for strncpy()
 #include <sstream>
 #include <stdio.h>
 #include <stdlib.h>
