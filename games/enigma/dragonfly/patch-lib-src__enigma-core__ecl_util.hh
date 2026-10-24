--- lib-src/enigma-core/ecl_util.hh.orig	2007-09-08 15:20:05.000000000 +0300
+++ lib-src/enigma-core/ecl_util.hh
@@ -20,6 +20,7 @@
 #define ECL_UTIL_HH_INCLUDED
 
 #include <string>
+#include <algorithm>
 
 /* hide GNU extensions for non-gnu compilers: */
 #ifndef __GNU__
