--- src/appleseed.shared/application/application.cpp.orig	2016-09-30 11:36:29.000000000 +0300
+++ src/appleseed.shared/application/application.cpp
@@ -157,7 +157,7 @@ const char* Application::get_user_settin
         return 0;
 
 // Other Unices.
-#elif defined __linux__ || defined __FreeBSD__
+#elif defined __linux__ || defined __FreeBSD__ || defined __DragonFly__
 
         bf::path p(get_home_directory());
         p /= ".appleseed/settings";
