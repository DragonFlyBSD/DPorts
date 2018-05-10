--- src/pk3.cpp.intermediate	2018-03-02 18:59:12.000000000 +0000
+++ src/pk3.cpp
@@ -356,7 +356,7 @@ char* CPK3::ExtractFile( const char *lpn
     }
     //if the file isn't in the archive
     if (index == -1)
-        return false;
+        return NULL;
     int flength = GetFileLen( index );
 
     buffer = new char[flength];
