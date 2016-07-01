--- src/openhbci/core/seg.cpp.orig	2002-08-02 11:29:30.000000000 +0200
+++ src/openhbci/core/seg.cpp
@@ -44,6 +44,7 @@
 
 
 #include <string>
+#include <cstdlib> // for atoi
 #include <list>
 
 #include "hbcistring.h"
