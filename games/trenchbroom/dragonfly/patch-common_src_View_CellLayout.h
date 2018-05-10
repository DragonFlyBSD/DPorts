--- common/src/View/CellLayout.h.orig	2016-03-09 20:19:17.000000000 +0000
+++ common/src/View/CellLayout.h
@@ -784,7 +784,7 @@ namespace TrenchBroom {
             }
             
             float outerMargin() const {
-                return m_outerMargin();
+                return m_outerMargin;
             }
             
             float groupMargin() const {
@@ -796,7 +796,7 @@ namespace TrenchBroom {
             }
             
             float cellMargin() const {
-                return m_cellMargin();
+                return m_cellMargin;
             }
         };
     }
