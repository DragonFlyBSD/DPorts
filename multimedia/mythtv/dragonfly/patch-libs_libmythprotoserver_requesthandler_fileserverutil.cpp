--- libs/libmythprotoserver/requesthandler/fileserverutil.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythprotoserver/requesthandler/fileserverutil.cpp
@@ -2,7 +2,7 @@
 #include <cstdlib> // for llabs
 
 #include "mythconfig.h"
-#if CONFIG_DARWIN || defined(__FreeBSD__)
+#if CONFIG_DARWIN || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #elif __linux__
