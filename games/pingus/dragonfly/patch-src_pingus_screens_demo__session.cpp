--- src/pingus/screens/demo_session.cpp.orig	2011-12-24 21:46:47.000000000 +0000
+++ src/pingus/screens/demo_session.cpp
@@ -18,6 +18,7 @@
 
 #include <algorithm>
 #include <iostream>
+#include <functional> // for std::function
 
 #include "engine/gui/gui_manager.hpp"
 #include "engine/gui/surface_button.hpp"
