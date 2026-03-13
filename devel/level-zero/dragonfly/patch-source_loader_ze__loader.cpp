--- source/loader/ze_loader.cpp.orig	2025-06-13 16:55:53.851992000 +0200
+++ source/loader/ze_loader.cpp	2025-06-13 16:56:19.122467000 +0200
@@ -10,7 +10,7 @@
 #include "driver_discovery.h"
 #include <iostream>
 
-#if defined(__FreeBSD__) || defined(__linux__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__linux__)
 #include <unistd.h>
 #include <sys/types.h>
 #include <pwd.h>
