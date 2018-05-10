--- src/MainFrame.cpp.orig	2014-10-18 15:49:11.000000000 +0000
+++ src/MainFrame.cpp
@@ -38,6 +38,7 @@
 #include <iostream>
 #include <sstream>
 #include <cstdlib>
+#include <functional> // for std::bind
 #include <random>
 #include <chrono>
 #include <wx/version.h>
