--- vcl/source/app/svapp.cxx.orig
+++ vcl/source/app/svapp.cxx
@@ -1253,7 +1253,7 @@
 #endif
             appendDetails(u"", Localize(SV_APP_DEFAULT, bLocalize));
 
-#if (defined LINUX || defined _WIN32 || defined MACOSX || defined __FreeBSD__ || defined __EMSCRIPTEN__)
+#if (defined LINUX || defined _WIN32 || defined MACOSX || defined __FreeBSD__ || defined __EMSCRIPTEN__ || defined __DragonFly__)
         appendDetails(u"; ", SV_APP_VCLBACKEND + GetToolkitName());
 #endif
     }
