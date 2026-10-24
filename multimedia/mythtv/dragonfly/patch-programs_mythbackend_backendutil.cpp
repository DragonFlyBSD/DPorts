--- programs/mythbackend/backendutil.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ programs/mythbackend/backendutil.cpp
@@ -1,7 +1,7 @@
 #include <cstdlib> // for llabs
 
 #include "mythconfig.h"
-#if CONFIG_DARWIN || defined(__FreeBSD__)
+#if CONFIG_DARWIN || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #elif __linux__
