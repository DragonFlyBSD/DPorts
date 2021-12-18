--- vcl/source/app/svapp.cxx.orig	2021-09-08 17:53:20 UTC
+++ vcl/source/app/svapp.cxx
@@ -1195,7 +1195,7 @@ OUString Application::GetHWOSConfInfo(co
 #endif
             appendDetails(u"", Localize(SV_APP_DEFAULT, bLocalize));
 
-#if (defined LINUX || defined _WIN32 || defined MACOSX || defined __FreeBSD__)
+#if (defined LINUX || defined _WIN32 || defined MACOSX || defined __FreeBSD__) || defined(__DragonFly__)
         appendDetails(u"; ", SV_APP_VCLBACKEND + GetToolkitName());
 #endif
     }
