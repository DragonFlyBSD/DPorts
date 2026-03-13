--- plugins/core/Standard/qRANSAC_SD/extern/RANSAC_SD/GfxTL/KdTree.h.orig	2025-06-03 13:13:34.045213000 +0200
+++ plugins/core/Standard/qRANSAC_SD/extern/RANSAC_SD/GfxTL/KdTree.h	2025-06-03 13:14:00.105698000 +0200
@@ -14,7 +14,7 @@
 #include <algorithm>
 #include <memory>
 #include <deque>
-#ifndef __APPLE__
+#if !defined(__APPLE__) && !defined(__DragonFly__)
 #include <malloc.h>
 #else
 #include <stdlib.h>
