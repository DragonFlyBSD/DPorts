--- libemf/libemf.cpp.orig	2026-05-17 12:35:45 UTC
+++ libemf/libemf.cpp
@@ -80,7 +80,8 @@ namespace EMF {
     if ( not bigEndian() ) {
       return a;
     }
-    return bswap_32(a);
+//    return bswap_32(a);
+    return __builtin_bswap32(a);
   }
 
   /*!
@@ -985,9 +986,9 @@ extern "C" {
 
     int filename_count = std::strlen( filename );
 
-    std::basic_string<WCHAR> filename_w( filename, filename + filename_count );
+    std::basic_string<char16_t> filename_w( filename, filename + filename_count );
 
-    HENHMETAFILE handle =  GetEnhMetaFileW( filename_w.c_str() );
+    HENHMETAFILE handle =  GetEnhMetaFileW( reinterpret_cast<LPCWSTR>(filename_w.c_str()) );
 
     return handle;
   }
