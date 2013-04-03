--- src/svnqt/path.cpp.orig	2012-06-18 12:08:34.000000000 +0000
+++ src/svnqt/path.cpp
@@ -145,7 +145,7 @@ namespace svn
   }
 
   bool
-  Path::isset () const
+  Path::path_isset () const
   {
     return m_path.length () > 0;
   }
