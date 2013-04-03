--- src/svnqt/path.h.orig	2009-12-03 14:59:43.000000000 +0000
+++ src/svnqt/path.h
@@ -111,7 +111,7 @@ namespace svn
      * @return true if there is a path set
      */
     bool
-    isset() const;
+    path_isset() const;
 
 
     /**
