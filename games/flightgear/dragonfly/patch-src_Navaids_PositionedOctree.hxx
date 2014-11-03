--- src/Navaids/PositionedOctree.hxx.orig	2014-11-03 15:11:54.482328000 +0000
+++ src/Navaids/PositionedOctree.hxx
@@ -60,7 +60,7 @@ namespace Octree
     _order(x),
     _inner(v)
     {
-      assert(!isnan(x));
+      assert(!std::isnan(x));
     }
     
     Ordered(const Ordered<T>& a) :
