        Patch to allow automatic font search on BSDs
--- src/libOpenImageIO/imagebufalgo_draw.cpp.orig	2015-06-11 20:25:58.000000000 +0300
+++ src/libOpenImageIO/imagebufalgo_draw.cpp
@@ -110,6 +110,7 @@ ImageBufAlgo::render_text (ImageBuf &R,
         search_dirs.push_back (sysroot + "/Fonts");
     }
     search_dirs.push_back ("/usr/share/fonts");
+    search_dirs.push_back ("/usr/local/share/fonts");
     search_dirs.push_back ("/Library/Fonts");
     search_dirs.push_back ("C:/Windows/Fonts");
     search_dirs.push_back ("/opt/local/share/fonts");
