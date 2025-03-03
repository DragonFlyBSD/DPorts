--- src/rime/gear/script_translator.cc.orig	Sat Apr 27 12:14:26 2024
+++ src/rime/gear/script_translator.cc	Mon Mar
@@ -7,6 +7,7 @@
 // 2011-07-10 GONG Chen <chen.sst@gmail.com>
 //
 #include <algorithm>
+#include <cmath> // for std::exp
 #include <stack>
 #include <cmath>
 #include <boost/algorithm/string/join.hpp>
