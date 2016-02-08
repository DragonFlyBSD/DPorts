--- src/effects/nyquist/Nyquist.cpp.intermediate	2016-02-08 10:49:22.000000000 +0200
+++ src/effects/nyquist/Nyquist.cpp
@@ -29,6 +29,9 @@ effects from this one class.
 #include <math.h>
 #include <locale.h>
 
+#include <cmath>
+using std::isinf;
+
 #include <wx/checkbox.h>
 #include <wx/choice.h>
 #include <wx/datetime.h>
