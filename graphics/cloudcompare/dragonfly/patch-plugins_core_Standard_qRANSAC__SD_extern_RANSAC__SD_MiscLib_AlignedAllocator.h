--- plugins/core/Standard/qRANSAC_SD/extern/RANSAC_SD/MiscLib/AlignedAllocator.h.orig	2025-06-03 13:08:58.530274000 +0200
+++ plugins/core/Standard/qRANSAC_SD/extern/RANSAC_SD/MiscLib/AlignedAllocator.h	2025-06-03 13:09:14.540568000 +0200
@@ -1,7 +1,7 @@
 #ifndef MiscLib__ALIGNEDALLOCATOR_HEADER__
 #define MiscLib__ALIGNEDALLOCATOR_HEADER__
 #include <memory>
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #else
 #include <stdlib.h>
