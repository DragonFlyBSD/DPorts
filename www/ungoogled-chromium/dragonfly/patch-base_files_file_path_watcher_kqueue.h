diff --git base/files/file_path_watcher_kqueue.h base/files/file_path_watcher_kqueue.h
index 1bae61cb3b9..ef9407c234b 100644
--- base/files/file_path_watcher_kqueue.h
+++ base/files/file_path_watcher_kqueue.h
@@ -6,8 +6,14 @@
 #define BASE_FILES_FILE_PATH_WATCHER_KQUEUE_H_
 
 #include <sys/time.h>
+
+#ifdef __DragonFly__
+// XXX for struct klist visibility in process_handle_dragonfly.cc through <sys/eventvar.h>
+#define _KERNEL_STRUCTURES // for later inclusion for <sys/user.h> in gen/foo*jumbo*.cc
+#endif
 #include <sys/event.h>
 
+
 #include <memory>
 #include <vector>
 
