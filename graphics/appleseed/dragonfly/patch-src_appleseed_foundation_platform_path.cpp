--- src/appleseed/foundation/platform/path.cpp.orig	2016-09-30 11:36:29.000000000 +0300
+++ src/appleseed/foundation/platform/path.cpp
@@ -51,7 +51,7 @@
 #include <sys/types.h>
 #include <pwd.h>
 #include <unistd.h>
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 #include <sys/sysctl.h>
 #include <pwd.h>
 #include <unistd.h>
@@ -95,7 +95,7 @@ const char* get_executable_path()
         path[result] = '\0';
 
 // FreeBSD.
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 
         const int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
         size_t len = sizeof(path);
@@ -155,7 +155,7 @@ const char* get_home_directory()
         return 0;
 
 // Other Unices.
-#elif defined __linux__ || defined __FreeBSD__
+#elif defined __linux__ || defined __FreeBSD__ || defined __DragonFly__
 
         const char* home_dir = getenv("HOME");
 
