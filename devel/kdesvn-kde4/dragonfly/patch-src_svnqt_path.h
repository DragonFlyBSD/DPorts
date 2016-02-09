--- src/svnqt/path.h.orig	2016-01-19 22:15:34.903195000 +0200
+++ src/svnqt/path.h
@@ -112,7 +112,7 @@ public:
      * @return true if there is a path set
      */
     bool
-    isset() const;
+    path_isset() const;
 
     /**
      * adds a new URL component to the path
