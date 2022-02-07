--- server/output.cpp.orig	2021-11-30 10:32:36 UTC
+++ server/output.cpp
@@ -31,6 +31,7 @@ License along with this library.  If not
 #include <cassert>
 #include <functional>
 #include <wayland-server.h>
+#include <cmath> // for std::ceil()
 
 namespace Wrapland::Server
 {
