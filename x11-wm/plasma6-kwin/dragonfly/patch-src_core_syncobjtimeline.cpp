--- src/core/syncobjtimeline.cpp.orig
+++ src/core/syncobjtimeline.cpp
@@ -6,7 +6,6 @@
 #include "syncobjtimeline.h"
 
 #include <cerrno>
-#include <sys/eventfd.h>
 #include <sys/ioctl.h>
 #include <xf86drm.h>
 
@@ -156,6 +155,9 @@
 
 FileDescriptor SyncTimeline::eventFd(uint64_t timelinePoint) const
 {
+// No eventfd support
+    return {};
+#if 0
     FileDescriptor ret{eventfd(0, EFD_CLOEXEC)};
     if (!ret.isValid()) {
         return {};
@@ -164,6 +166,7 @@
         return {};
     }
     return ret;
+#endif
 }
 
 void SyncTimeline::signal(uint64_t timelinePoint)
