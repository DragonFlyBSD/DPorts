--- src/shaders/basictex.cc.orig	2006-06-10 03:41:26.000000000 +0300
+++ src/shaders/basictex.cc
@@ -23,6 +23,7 @@
 #include "basictex.h"
 #include "object3d.h"
 #include <iostream>
+#include <cstring> // for strcmp
 
 #include "targaIO.h"
 #include "HDR_io.h"
