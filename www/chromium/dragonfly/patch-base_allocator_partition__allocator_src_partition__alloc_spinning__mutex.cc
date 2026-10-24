diff --git base/allocator/partition_allocator/src/partition_alloc/spinning_mutex.cc base/allocator/partition_allocator/src/partition_alloc/spinning_mutex.cc
index 544416d0b199..36bbf7addff1 100644
--- base/allocator/partition_allocator/src/partition_alloc/spinning_mutex.cc
+++ base/allocator/partition_allocator/src/partition_alloc/spinning_mutex.cc
@@ -26,6 +26,8 @@
 #include <sys/types.h>
 #include <sys/thr.h>
 #include <sys/umtx.h>
+#elif defined(OS_DRAGONFLY)
+#include <sys/types.h>
 #else
 #include <linux/futex.h>
 #endif
