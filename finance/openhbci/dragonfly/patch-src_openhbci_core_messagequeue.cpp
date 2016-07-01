--- src/openhbci/core/interactorcb.cpp.orig	2003-09-16 19:36:39.000000000 +0300
+++ src/openhbci/core/messagequeue.cpp
@@ -33,6 +33,7 @@
 
 #include <stdio.h> // debug
 //#include <iostream.h>
+#include <cstdlib> // for atoi
 
 #include "messagequeue.h"
 #include "hbcistring.h"
