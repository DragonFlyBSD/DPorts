--- src/weather_data.cpp.orig	2015-03-09 07:25:34.000000000 +0200
+++ src/weather_data.cpp
@@ -1,6 +1,7 @@
 #include "weather.h"
 #include "game.h"
 #include "translations.h"
+#include <cmath> // for std::pow
 
 /**
  * @ingroup Weather
