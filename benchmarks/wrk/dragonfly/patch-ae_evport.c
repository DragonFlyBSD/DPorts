--- src/ae_evport.c.orig
+++ src/ae_evport.c
@@ -240,6 +240,10 @@ static void aeApiDelEvent(aeEventLoop *eventLoop, int fd, int mask) {
     }
 }
 
+static void aeApiCloseEvent(aeEventLoop *eventLoop, int fd, int mask) {
+    aeApiDelEvent(eventLoop, fd, mask);
+}
+
 static int aeApiPoll(aeEventLoop *eventLoop, struct timeval *tvp) {
     aeApiState *state = eventLoop->apidata;
     struct timespec timeout, *tsp;
