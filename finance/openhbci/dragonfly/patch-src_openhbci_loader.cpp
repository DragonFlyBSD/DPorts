--- src/openhbci/loader.cpp.orig	2003-07-03 02:07:05.000000000 +0300
+++ src/openhbci/loader.cpp
@@ -30,6 +30,8 @@
 #include <config.h>
 #endif
 
+#include <cstdlib> // for atoi
+
 #include "loader.h"
 #include <hbcistring.h>
 #include <accountimpl.h>
