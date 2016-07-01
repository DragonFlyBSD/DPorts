--- src/openhbci/core/accountjobs.cpp.orig	2003-06-14 00:50:00.000000000 +0300
+++ src/openhbci/core/accountjobs.cpp
@@ -44,6 +44,7 @@
 #endif
 
 // #include <stdio.h> // DEBUG
+#include <cstdlib> // for atoi
 #include <list>
 
 #include "accountjobs.h"
