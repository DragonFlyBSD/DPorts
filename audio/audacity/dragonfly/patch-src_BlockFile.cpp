
From wx/math.h:
/* THIS IS A C FILE, DON'T USE C++ FEATURES (IN PARTICULAR COMMENTS) IN IT */

--- src/BlockFile.cpp.intermediate	2016-02-08 10:49:22.000000000 +0200
+++ src/BlockFile.cpp
@@ -47,6 +47,9 @@ out.
 #include <float.h>
 #include <math.h>
 
+#include <cmath>
+using std::isnan;
+
 #include <wx/utils.h>
 #include <wx/filefn.h>
 #include <wx/ffile.h>
