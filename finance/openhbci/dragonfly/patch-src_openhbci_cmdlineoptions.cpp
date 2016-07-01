--- src/openhbci/cmdlineoptions.cpp.orig	2003-04-25 04:45:53.000000000 +0300
+++ src/openhbci/cmdlineoptions.cpp
@@ -46,6 +46,7 @@
 
 #include <stdio.h>
 #include "assert.h"
+#include <cstring>
 
 #include "openhbci/cmdlineoptions.h"
 #include "openhbci/parser.h"
