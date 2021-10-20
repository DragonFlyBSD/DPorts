--- src/ae.h.orig
+++ src/ae.h
@@ -107,6 +107,7 @@ void aeStop(aeEventLoop *eventLoop);
 int aeCreateFileEvent(aeEventLoop *eventLoop, int fd, int mask,
         aeFileProc *proc, void *clientData);
 void aeDeleteFileEvent(aeEventLoop *eventLoop, int fd, int mask);
+void aeCloseFileEvent(aeEventLoop *eventLoop, int fd, int mask);
 int aeGetFileEvents(aeEventLoop *eventLoop, int fd);
 long long aeCreateTimeEvent(aeEventLoop *eventLoop, long long milliseconds,
         aeTimeProc *proc, void *clientData,
