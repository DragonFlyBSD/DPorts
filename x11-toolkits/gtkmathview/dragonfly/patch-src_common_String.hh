--- src/common/String.hh.orig	2007-08-17 13:02:45.000000000 +0300
+++ src/common/String.hh
@@ -20,6 +20,8 @@
 #define __String_hh__
 
 #include <string>
+#include <cstdio> // for snprintf vsnprintf
+#include <cstring>
 
 #include "gmv_defines.h"
 #include "Char.hh"
