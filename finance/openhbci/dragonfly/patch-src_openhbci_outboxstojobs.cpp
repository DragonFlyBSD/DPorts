--- src/openhbci/outboxstojobs.cpp.orig	2003-04-25 04:45:53.000000000 +0300
+++ src/openhbci/outboxstojobs.cpp
@@ -25,6 +25,8 @@
 #include <config.h>
 #endif
 
+#include <cstdlib> // for atoi
+
 #include "assert.h"
 
 #include "outboxstojobs.h"
