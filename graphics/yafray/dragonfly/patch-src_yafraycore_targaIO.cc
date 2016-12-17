--- src/yafraycore/targaIO.cc.orig	2006-05-18 18:36:08.000000000 +0300
+++ src/yafraycore/targaIO.cc
@@ -3,6 +3,7 @@
 //--------------------------------------------------------------------------------
 #include "targaIO.h"
 #include "vector3d.h"
+#include <cstring> // for strncmp
 
 //--------------------------------------------------------------------------------
 // Save uncompressed 24 bit targa
