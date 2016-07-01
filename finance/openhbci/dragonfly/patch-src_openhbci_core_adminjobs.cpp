--- src/openhbci/core/adminjobs.cpp.orig	2003-06-10 20:48:40.000000000 +0300
+++ src/openhbci/core/adminjobs.cpp
@@ -45,6 +45,8 @@
 // #include <stdio.h> // DEBUG
 // #include <list>
 
+#include <cstdlib> // for atoi
+
 #include "hbcistring.h"
 #include "accountparams.h"
 #include "adminjobs.h"
