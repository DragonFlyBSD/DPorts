--- src/ae_select.c.orig
+++ src/ae_select.c
@@ -74,6 +74,10 @@ static void aeApiDelEvent(aeEventLoop *eventLoop, int fd, int mask) {
     if (mask & AE_WRITABLE) FD_CLR(fd,&state->wfds);
 }
 
+static void aeApiCloseEvent(aeEventLoop *eventLoop, int fd, int mask) {
+    aeApiDelEvent(eventLoop, fd, mask);
+}
+
 static int aeApiPoll(aeEventLoop *eventLoop, struct timeval *tvp) {
     aeApiState *state = eventLoop->apidata;
     int retval, j, numevents = 0;
