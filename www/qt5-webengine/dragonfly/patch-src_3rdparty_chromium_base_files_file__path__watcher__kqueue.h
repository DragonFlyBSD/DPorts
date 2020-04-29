--- src/3rdparty/chromium/base/files/file_path_watcher_kqueue.h.orig	2020-04-28 22:36:51 UTC
+++ src/3rdparty/chromium/base/files/file_path_watcher_kqueue.h
@@ -9,6 +9,10 @@
 #include <sys/stdint.h>
 #include <sys/types.h>
 #endif
+#ifdef __DragonFly__
+// XXX for struct klist visibility in process_handle_dragonfly.cc through <sys/eventvar.h>
+#define _KERNEL_STRUCTURES // for later inclusion for <sys/user.h> in gen/foo*jumbo*.cc
+#endif
 #include <sys/event.h>
 
 #include <memory>
