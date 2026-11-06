--- src/lib/base/Event.h.orig	2021-11-01 20:46:43 UTC
+++ src/lib/base/Event.h
@@ -20,6 +20,7 @@
 
 #include "common/basic_types.h"
 #include "common/stdmap.h"
+#include <cstddef>
 
 class EventData {
 public:
