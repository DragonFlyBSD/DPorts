--- src/rime/gear/table_translator.cc.orig	Sat Apr 27 12:14:26 2024
+++ src/rime/gear/table_translator.cc	Mon Mar
@@ -4,6 +4,7 @@
 //
 // 2011-07-10 GONG Chen <chen.sst@gmail.com>
 //
+#include <cmath> // for std::exp
 #include <boost/algorithm/string.hpp>
 #include <boost/range/adaptor/reversed.hpp>
 #include <cmath>
