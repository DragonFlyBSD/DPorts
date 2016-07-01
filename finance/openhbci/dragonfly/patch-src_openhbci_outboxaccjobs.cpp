--- src/openhbci/outboxaccjobs.cpp.orig	2003-07-03 02:51:46.000000000 +0300
+++ src/openhbci/outboxaccjobs.cpp
@@ -25,6 +25,8 @@
 #include <config.h>
 #endif
 
+#include <cstdlib> // for atoi
+
 #include "assert.h"
 
 #include "outboxaccjobs.h"
