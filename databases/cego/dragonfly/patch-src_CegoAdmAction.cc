--- src/CegoAdmAction.cc.orig	2019-11-24 12:54:13 UTC
+++ src/CegoAdmAction.cc
@@ -25,6 +25,7 @@
 #include "CegoXMLdef.h"
 #include "CegoAdmAction.h"
 #include "CegoOutput.h"
+#include <cstring>	// for memcpy()
 
 #define DEFTMPSIZE 100
 #define DEFSYSSIZE 100
