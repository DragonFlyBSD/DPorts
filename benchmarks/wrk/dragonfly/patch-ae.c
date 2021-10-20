--- src/ae.c.orig
+++ src/ae.c
@@ -152,13 +152,16 @@ int aeCreateFileEvent(aeEventLoop *eventLoop, int fd, int mask,
     return AE_OK;
 }
 
-void aeDeleteFileEvent(aeEventLoop *eventLoop, int fd, int mask)
+static void _aeDeleteFileEvent(aeEventLoop *eventLoop, int fd, int mask, int del)
 {
     if (fd >= eventLoop->setsize) return;
     aeFileEvent *fe = &eventLoop->events[fd];
     if (fe->mask == AE_NONE) return;
 
-    aeApiDelEvent(eventLoop, fd, mask);
+    if (del)
+        aeApiDelEvent(eventLoop, fd, mask);
+    else
+        aeApiCloseEvent(eventLoop, fd, mask);
     fe->mask = fe->mask & (~mask);
     if (fd == eventLoop->maxfd && fe->mask == AE_NONE) {
         /* Update the max fd */
@@ -170,6 +173,16 @@ void aeDeleteFileEvent(aeEventLoop *eventLoop, int fd, int mask)
     }
 }
 
+void aeDeleteFileEvent(aeEventLoop *eventLoop, int fd, int mask)
+{
+    _aeDeleteFileEvent(eventLoop, fd, mask, 1);
+}
+
+void aeCloseFileEvent(aeEventLoop *eventLoop, int fd, int mask)
+{
+    _aeDeleteFileEvent(eventLoop, fd, mask, 0);
+}
+
 int aeGetFileEvents(aeEventLoop *eventLoop, int fd) {
     if (fd >= eventLoop->setsize) return 0;
     aeFileEvent *fe = &eventLoop->events[fd];
