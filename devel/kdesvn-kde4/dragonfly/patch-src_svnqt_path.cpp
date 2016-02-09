--- src/svnqt/path.cpp.orig	2016-01-19 22:15:34.903195000 +0200
+++ src/svnqt/path.cpp
@@ -155,7 +155,7 @@ Path::operator=(const Path &path)
 }
 
 bool
-Path::isset() const
+Path::path_isset() const
 {
     return m_path.length() > 0;
 }
