--- Clipper2Lib/src/clipper.triangulation.cpp.orig
+++ Clipper2Lib/src/clipper.triangulation.cpp
@@ -1202,7 +1202,7 @@
 
   TriangulateResult Triangulate(const PathsD& pp, int decPlaces, PathsD& solution, bool useDelaunay)
   {
-    int ec;
+    int ec = 0;
     double scale;
     TriangulateResult result;
     if (decPlaces <= 0) scale = 1;
