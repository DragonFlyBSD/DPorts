--- src/halfedge/modifiers.cpp.orig	2013-05-08 19:02:06.000000000 +0000
+++ src/halfedge/modifiers.cpp
@@ -33,7 +33,7 @@ void faceList_c::addFace(long voxel, int
 {
   if (containsFace(voxel, face)) return;
 
-  struct face f;
+  faceList_c::face f;
   f.voxel = voxel;
   f.faceNum = face;
 
