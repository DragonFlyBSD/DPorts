--- bundled/libmxp/cmxpstate.cpp.orig	2006-04-03 17:47:30.000000000 +0300
+++ bundled/libmxp/cmxpstate.cpp
@@ -24,6 +24,7 @@
 #include <config.h>
 
 #include <algorithm>
+#include <cstring>
 #include <stdlib.h>
 
 cMXPState::cMXPState (cResultHandler *resh, cElementManager *elm, cEntityManager *enm)
