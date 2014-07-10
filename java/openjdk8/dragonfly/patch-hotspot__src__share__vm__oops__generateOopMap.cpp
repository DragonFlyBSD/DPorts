--- hotspot/src/share/vm/oops/generateOopMap.cpp.orig	2012-08-10 18:27:19.000000000 +0200
+++ hotspot/src/share/vm/oops/generateOopMap.cpp	2013-01-03 00:09:16.335127000 +0100
@@ -22,6 +22,8 @@
  *
  */
 
+#include <machine/int_limits.h>
+
 #include "precompiled.hpp"
 #include "interpreter/bytecodeStream.hpp"
 #include "oops/generateOopMap.hpp"
