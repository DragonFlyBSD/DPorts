--- src/bookmarks.cpp.orig	2015-12-03 09:40:56.777665000 +0100
+++ src/bookmarks.cpp	2015-12-03 09:43:44.277709000 +0100
@@ -96,7 +96,10 @@ void MainWindow::MountWorker::run()
     struct kevent ki[1];
     struct timespec to[1] = {{ 0, 100000 }};
 
+    bzero(ki, sizeof(struct kevent));
+#ifdef EVFILT_FS
     EV_SET(ki, 0, EVFILT_FS, EV_ADD, VQ_MOUNT | VQ_UNMOUNT, 0, 0);
+#endif
     kevent(kq, ki, 1, NULL, 0, NULL);
 
     while (ahead) {
