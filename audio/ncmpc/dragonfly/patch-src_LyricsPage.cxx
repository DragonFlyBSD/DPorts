--- src/LyricsPage.cxx.orig
+++ src/LyricsPage.cxx
@@ -27,7 +27,7 @@
 
 using std::string_view_literals::operator""sv;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 extern char **environ;
 #endif
 
