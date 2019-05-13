--- src/translations.cpp.intermediate	2019-05-13 15:02:23.000000000 +0000
+++ src/translations.cpp
@@ -176,7 +176,7 @@ void set_language()
 
     // Step 2. Bind to gettext domain.
     std::string locale_dir;
-#if (defined __linux__ || defined __FreeBSD__ || (defined MACOSX && !defined TILES))
+#if (defined __linux__ || defined __FreeBSD__ || defined(__DragonFly__) || (defined MACOSX && !defined TILES))
     if( !FILENAMES["base_path"].empty() ) {
         locale_dir = FILENAMES["base_path"] + "share/locale";
     } else {
