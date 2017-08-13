--- ../mythplugins/mytharchive/mytharchivehelper/main.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ ../mythplugins/mytharchive/mytharchivehelper/main.cpp
@@ -31,7 +31,7 @@
 #include <cstdlib>
 
 #include <mythconfig.h>
-#if CONFIG_DARWIN or defined(__FreeBSD__)
+#if CONFIG_DARWIN || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #elif __linux__
