--- src/snipe2d.cpp.intermediate	2016-07-04 19:58:20 UTC
+++ src/snipe2d.cpp
@@ -38,6 +38,7 @@
 #include "snipe2d.h"
 //#include <getopt.h>
 #include "binds.h"
+#include <limits.h> // for PATH_MAX
 
 PREFS gPrefs;
 
