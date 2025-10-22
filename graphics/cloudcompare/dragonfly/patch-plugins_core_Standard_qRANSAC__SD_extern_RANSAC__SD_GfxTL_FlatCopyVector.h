--- plugins/core/Standard/qRANSAC_SD/extern/RANSAC_SD/GfxTL/FlatCopyVector.h.orig	2025-06-03 13:11:33.723054000 +0200
+++ plugins/core/Standard/qRANSAC_SD/extern/RANSAC_SD/GfxTL/FlatCopyVector.h	2025-06-03 13:12:05.133619000 +0200
@@ -1,6 +1,6 @@
 #ifndef GfxTL__FLATCOPYVECTOR_HEADER__
 #define GfxTL__FLATCOPYVECTOR_HEADER__
-#ifndef __APPLE__
+#if !defined( __APPLE__) && !defined(__DragonFly__)
 #include <malloc.h>
 #else
 #include <stdlib.h>
