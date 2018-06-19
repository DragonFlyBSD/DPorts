--- src/3rdparty/chromium/base/files/file_path_watcher_kqueue.h.intermediate	2018-05-26 13:48:33.000000000 +0000
+++ src/3rdparty/chromium/base/files/file_path_watcher_kqueue.h
@@ -5,7 +5,7 @@
 #ifndef BASE_FILES_FILE_PATH_WATCHER_KQUEUE_H_
 #define BASE_FILES_FILE_PATH_WATCHER_KQUEUE_H_
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/stdint.h>
 #include <sys/types.h>
 #endif
