--- src/Navaids/PositionedOctree.hxx.orig	2013-09-16 18:49:01.000000000 +0000
+++ src/Navaids/PositionedOctree.hxx
@@ -31,6 +31,7 @@
 #include <cassert>
 #include <map>
 #include <functional>
+#include <cmath>
 
 // SimGear
 #include <simgear/math/SGGeometry.hxx>
@@ -60,7 +61,7 @@ namespace Octree
     _order(x),
     _inner(v)
     {
-      assert(!isnan(x));
+      assert(!std::isnan(x));
     }
     
     Ordered(const Ordered<T>& a) :
