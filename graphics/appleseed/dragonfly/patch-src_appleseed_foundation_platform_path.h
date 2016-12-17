--- src/appleseed/foundation/platform/path.h.orig	2016-09-30 11:36:29.000000000 +0300
+++ src/appleseed/foundation/platform/path.h
@@ -42,7 +42,7 @@
 #include "boost/filesystem/path.hpp"
 
 // Platform headers.
-#if defined __APPLE__ || defined __FreeBSD__
+#if defined __APPLE__ || defined __FreeBSD__ || defined __DragonFly__
 #include <sys/param.h>
 #elif defined __linux__
 #include <linux/limits.h>
@@ -60,7 +60,7 @@ namespace foundation
     #define FOUNDATION_MAX_PATH_LENGTH  MAX_PATH
 
 // OS X.
-#elif defined __APPLE__ || defined __FreeBSD__
+#elif defined __APPLE__ || defined __FreeBSD__ || defined __DragonFly__
     #define FOUNDATION_MAX_PATH_LENGTH  MAXPATHLEN
 
 // Linux.
