--- thirdparty/OGDF/src/ogdf/basic/System.cpp.orig	2026-11-06 03:40:16 UTC
+++ thirdparty/OGDF/src/ogdf/basic/System.cpp
@@ -56,7 +56,7 @@
 #    include <mach/vm_statistics.h>
 #    include <mach/mach.h>
 #    include <mach/machine.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #    include <stdlib.h>
 #    include <unistd.h>
 #    include <sys/types.h>
@@ -300,7 +300,7 @@ size_t System::memoryUsedByProcess() {
 	return 0;
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 long long System::physicalMemory()
 {
@@ -406,7 +406,7 @@ size_t System::memoryAllocatedByMalloc() { return msta
 
 size_t System::memoryInFreelistOfMalloc() { return mstats().bytes_free; }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 size_t System::memoryAllocatedByMalloc()
 {
