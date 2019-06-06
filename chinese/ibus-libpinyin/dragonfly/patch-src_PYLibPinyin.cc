--- src/PYLibPinyin.cc.intermediate	2019-05-31 18:59:20.000000000 +0000
+++ src/PYLibPinyin.cc
@@ -26,6 +26,7 @@
 #include <string.h>
 #include <pinyin.h>
 #include "PYPConfig.h"
+#include <cstdio> // for std::getline()
 
 #define LIBPINYIN_SAVE_TIMEOUT   (5 * 60)
 
