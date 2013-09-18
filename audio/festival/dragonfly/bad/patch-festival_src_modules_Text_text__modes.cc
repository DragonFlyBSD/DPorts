--- festival/src/modules/Text/text_modes.cc.orig	2004-09-30 13:04:18.000000000 +0000
+++ festival/src/modules/Text/text_modes.cc
@@ -60,7 +60,7 @@ void tts_file_user_mode(LISP filename, L
 {
 
     volatile EST_String tmpname = make_tmp_filename();
-    volatile EST_String inname = get_c_string(filename);
+    volatile EST_String inname = (EST_String)get_c_string(filename);
     volatile EST_String filter;
     volatile EST_TokenStream ts;
     volatile LISP func;
