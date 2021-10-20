--- src/ae_epoll.c.orig
+++ src/ae_epoll.c
@@ -105,6 +105,10 @@ static void aeApiDelEvent(aeEventLoop *eventLoop, int fd, int delmask) {
     }
 }
 
+static void aeApiCloseEvent(aeEventLoop *eventLoop, int fd, int delmask) {
+    aeApiDelEvent(eventLoop, fd, delmask);
+}
+
 static int aeApiPoll(aeEventLoop *eventLoop, struct timeval *tvp) {
     aeApiState *state = eventLoop->apidata;
     int retval, numevents = 0;
