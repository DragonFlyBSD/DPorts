diff --git base/allocator/partition_allocator/spinning_mutex.cc base/allocator/partition_allocator/spinning_mutex.cc
index 1de71e754ae..125edaa8716 100644
--- src/3rdparty/chromium/base/allocator/partition_allocator/spinning_mutex.cc
+++ src/3rdparty/chromium/base/allocator/partition_allocator/spinning_mutex.cc
@@ -24,6 +24,8 @@
 #include <sys/types.h>
 #include <sys/thr.h>
 #include <sys/umtx.h>
+#elif defined(OS_DRAGONFLY)
+#include <sys/types.h>
 #else
 #include <linux/futex.h>
 #endif
