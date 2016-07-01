--- src/openhbci/core/connection.cpp.orig	2003-06-11 21:36:00.000000000 +0300
+++ src/openhbci/core/connection.cpp
@@ -32,6 +32,7 @@
 #include <config.h>
 #endif
 
+#include <cstdlib> // for atoi
 #include <unistd.h>
 #include "connection.h"
 #include "hbcistring.h"
