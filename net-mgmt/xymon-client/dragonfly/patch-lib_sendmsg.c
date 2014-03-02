--- lib/sendmsg.c.orig	2014-01-07 11:16:14.000000000 +0000
+++ lib/sendmsg.c
@@ -605,7 +605,7 @@ void sendmessage_finish_local(void)
 sendresult_t sendmessage_local(char *msg)
 {
 	int n, done = 0;
-	msglen_t msglen;
+	unsigned long msglen;
 
 	if (backfeedqueue == -1) {
 		return sendmessage(msg, NULL, XYMON_TIMEOUT, NULL);
