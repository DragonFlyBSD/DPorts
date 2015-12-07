--- library/controlmanager.cpp.orig	2008-04-16 10:31:25.000000000 +0300
+++ library/controlmanager.cpp
@@ -1,5 +1,6 @@
 #include <SDL.h>
 #include <vector>
+#include <algorithm>
 
 #include "peripheral.h"
 #include "controlmanager.h"
