--- src/3rdparty/chromium/base/files/file_path_watcher_kqueue.h.orig	2019-03-07 09:23:57 UTC
+++ src/3rdparty/chromium/base/files/file_path_watcher_kqueue.h
@@ -5,6 +5,10 @@
 #ifndef BASE_FILES_FILE_PATH_WATCHER_KQUEUE_H_
 #define BASE_FILES_FILE_PATH_WATCHER_KQUEUE_H_
 
+#ifdef __DragonFly__
+// XXX for struct klist visibility in process_handle_dragonfly.cc through <sys/eventvar.h>
+#define _KERNEL_STRUCTURES // for later inclusion for <sys/user.h> in gen/foo*jumbo*.cc
+#endif
 #include <sys/event.h>
 
 #include <memory>
