--- src/TonemappingOperators/mantiuk08/display_function.h.orig	2021-01-11 09:41:28 UTC
+++ src/TonemappingOperators/mantiuk08/display_function.h
@@ -33,6 +33,7 @@
 #define DISPLAY_FUNCTION_H
 
 #include <cstdio>
+#include <errno.h>
 #include "../../opthelper.h"
 
 #include <Libpfs/exception.h>
