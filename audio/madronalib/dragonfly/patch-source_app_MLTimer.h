--- source/app/MLTimer.h.orig	2021-04-07 17:33:36 UTC
+++ source/app/MLTimer.h
@@ -5,6 +5,7 @@
 #pragma once
 
 #include <chrono>
+#include <functional> // for std::function
 #include <iostream>
 #include <mutex>
 #include <set>
