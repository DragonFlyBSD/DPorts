--- server/output.cpp.orig
+++ server/output.cpp
@@ -32,6 +32,7 @@
 #include <QRectF>
 #include <cassert>
 #include <functional>
+#include <cmath> // for std::ceil()
 
 namespace Wrapland::Server
 {
