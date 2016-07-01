--- src/openhbci/core/adminsegs.cpp.orig	2003-06-10 20:48:41.000000000 +0300
+++ src/openhbci/core/adminsegs.cpp
@@ -43,6 +43,7 @@
 #endif
 
 #include <stdio.h>
+#include <cstdlib> // for atoi
 
 #include "adminsegs.h"
 #include "bankimpl.h"
