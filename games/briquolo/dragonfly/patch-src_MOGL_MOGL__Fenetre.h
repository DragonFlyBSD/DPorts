--- src/MOGL/MOGL_Fenetre.h.orig	2008-03-22 09:57:47 UTC
+++ src/MOGL/MOGL_Fenetre.h
@@ -52,7 +52,7 @@ class MOGL_Fenetre
   private:
     struct CompareResolution
     {
-        bool operator() (const MOGL_Resolution & x, const MOGL_Resolution & y)
+        bool operator() (const MOGL_Resolution & x, const MOGL_Resolution & y) const
         {
           return x.w < y.w;
         }
