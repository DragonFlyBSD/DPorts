--- src/core/syncobjtimeline.cpp.orig	Tue Jul  2 09:13:02 2024
+++ src/core/syncobjtimeline.cpp	Sat Mar
@@ -5,7 +5,6 @@
 */
 #include "syncobjtimeline.h"
 
-#include <sys/eventfd.h>
 #include <sys/ioctl.h>
 #include <xf86drm.h>
 
@@ -93,6 +92,9 @@ SyncTimeline::~SyncTimeline()
 
 FileDescriptor SyncTimeline::eventFd(uint64_t timelinePoint) const
 {
+// No eventfd support
+    return {};
+#if 0
     FileDescriptor ret{eventfd(0, EFD_CLOEXEC)};
     if (!ret.isValid()) {
         return {};
@@ -101,6 +103,7 @@ FileDescriptor SyncTimeline::eventFd(uint64_t timeline
         return {};
     }
     return ret;
+#endif
 }
 
 void SyncTimeline::signal(uint64_t timelinePoint)
