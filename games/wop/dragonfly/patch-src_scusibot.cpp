--- src/scusibot.cpp.orig	2005-10-16 20:53:05.000000000 +0300
+++ src/scusibot.cpp
@@ -4,6 +4,7 @@
 #include "avatar.hpp"
 #include "stationarygun.hpp"
 #include "global.hpp"
+#include <algorithm>
 #include <vector>
 
 ScusiBot::ScusiBot()
