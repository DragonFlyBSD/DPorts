--- src/ae_kqueue.c.orig
+++ src/ae_kqueue.c
@@ -101,6 +101,10 @@ static void aeApiDelEvent(aeEventLoop *eventLoop, int fd, int mask) {
     }
 }
 
+static void aeApiCloseEvent(aeEventLoop *eventLoop, int fd, int mask) {
+    /* Do nothing */
+}
+
 static int aeApiPoll(aeEventLoop *eventLoop, struct timeval *tvp) {
     aeApiState *state = eventLoop->apidata;
     int retval, numevents = 0;
