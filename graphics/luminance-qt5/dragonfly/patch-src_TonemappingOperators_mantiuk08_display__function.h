--- src/TonemappingOperators/mantiuk08/display_function.h.orig	2014-01-27 20:20:46 UTC
+++ src/TonemappingOperators/mantiuk08/display_function.h
@@ -33,6 +33,7 @@
 #define DISPLAY_FUNCTION_H
 
 #include <cstdio>
+#include <errno.h>
 
 #include "arch/math.h"
 #include "Libpfs/utils/sse.h"
