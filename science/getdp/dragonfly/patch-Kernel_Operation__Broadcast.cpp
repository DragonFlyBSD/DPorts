--- Kernel/Operation_Broadcast.cpp.orig	2019-04-12 10:20:07 UTC
+++ Kernel/Operation_Broadcast.cpp
@@ -5,6 +5,7 @@
 
 #include <vector>
 #include <string>
+#include <cstring>	// for strncpy()
 #include <stdio.h>
 #include <stdlib.h>
 #include "GetDPConfig.h"
