--- exrenvmap/blurImage.cpp.orig	2009-02-26 00:39:27.000000000 +0100
+++ exrenvmap/blurImage.cpp	2012-12-18 17:06:55.787084000 +0100
@@ -45,6 +45,7 @@
 #include "Iex.h"
 #include <iostream>
 #include <algorithm>
+#include <cstring>
 
 using namespace std;
 using namespace Imf;
