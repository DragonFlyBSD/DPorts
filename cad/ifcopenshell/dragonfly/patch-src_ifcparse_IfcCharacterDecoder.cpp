--- src/ifcparse/IfcCharacterDecoder.cpp.orig
+++ src/ifcparse/IfcCharacterDecoder.cpp
@@ -28,6 +28,7 @@
 #include <sstream>
 #include <iomanip>
 #include <codecvt>
+#include <algorithm>
 
 #include "../ifcparse/IfcCharacterDecoder.h"
 #include "../ifcparse/IfcException.h"
