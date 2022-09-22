--- source/blender/blenlib/BLI_filereader.h.orig	2022-09-21 21:27:21.001030000 +0200
+++ source/blender/blenlib/BLI_filereader.h	2022-09-21 21:27:32.100774000 +0200
@@ -17,7 +17,7 @@
 #include "BLI_compiler_attrs.h"
 #include "BLI_utildefines.h"
 
-#if defined(_MSC_VER) || defined(__APPLE__) || defined(__HAIKU__) || defined(__NetBSD__)
+#if defined(_MSC_VER) || defined(__APPLE__) || defined(__HAIKU__) || defined(__NetBSD__) || defined(__DragonFly__)
 typedef int64_t off64_t;
 #endif
 
