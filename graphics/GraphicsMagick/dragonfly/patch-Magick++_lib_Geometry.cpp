--- Magick++/lib/Geometry.cpp.orig	2008-03-11 17:11:48.000000000 +0100
+++ Magick++/lib/Geometry.cpp	2013-01-01 16:26:52.867270000 +0100
@@ -10,7 +10,7 @@
 #include "Magick++/Include.h"
 #include <string>
 #include <ctype.h> // for isdigit
-#include <strings.h> // for strcpy
+#include <cstring> // for strcpy
 
 using namespace std;
 
