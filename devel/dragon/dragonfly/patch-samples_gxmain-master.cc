--- samples/gxmain-master.cc.orig	2015-12-27 17:06:15.000000000 +0200
+++ samples/gxmain-master.cc
@@ -19,6 +19,8 @@
 
 #include <lfcbase/Exception.h>
 
+#include <cstdlib> // for exit()
+
 #if defined(SAMPLE_G1)
 class GxMain  : public G1Parser {
 #elif defined(SAMPLE_G2)
