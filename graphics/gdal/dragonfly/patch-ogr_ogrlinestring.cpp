--- ogr/ogrlinestring.cpp.orig	2019-03-15 12:35:19 UTC
+++ ogr/ogrlinestring.cpp
@@ -31,6 +31,7 @@
 #include "ogr_geos.h"
 #include "ogr_p.h"
 
+#include <cmath>	// for std:fabs()
 #include <cstdlib>
 #include <algorithm>
 #include <limits>
