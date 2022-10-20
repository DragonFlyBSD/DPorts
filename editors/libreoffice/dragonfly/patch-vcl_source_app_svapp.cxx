--- vcl/source/app/svapp.cxx.orig	2022-10-16 15:04:30.814259000 +0200
+++ vcl/source/app/svapp.cxx	2022-10-16 15:05:14.203251000 +0200
@@ -1299,7 +1299,7 @@
 #endif
             appendDetails(u"", Localize(SV_APP_DEFAULT, bLocalize));
 
-#if (defined LINUX || defined _WIN32 || defined MACOSX || defined __FreeBSD__ || defined EMSCRIPTEN)
+#if (defined LINUX || defined _WIN32 || defined MACOSX || defined __FreeBSD__ || defined EMSCRIPTEN || defined __DragonFly__ )
         appendDetails(u"; ", SV_APP_VCLBACKEND + GetToolkitName());
 #endif
     }
