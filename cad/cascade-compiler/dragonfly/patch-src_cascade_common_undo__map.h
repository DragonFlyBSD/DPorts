--- src/cascade/common/undo_map.h.orig	2026-11-06 06:26:38 UTC
+++ src/cascade/common/undo_map.h
@@ -32,6 +32,7 @@
 #define CASCADE_SRC_COMMON_UNDO_MAP_H
 
 #include <cassert>
+#include <cstddef>
 #include <unordered_map>
 #include <unordered_set>
 #include "common/undoable.h"
