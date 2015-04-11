--- lib/sendmsg.c.orig	2015-02-25 03:49:26 UTC
+++ lib/sendmsg.c
@@ -606,7 +606,8 @@ void sendmessage_finish_local(void)
 sendresult_t sendmessage_local(char *msg)
 {
 	int n, done = 0;
-	#if defined(__OpenBSD__) || defined(__dietlibc__)
+	#if defined(__OpenBSD__) || defined(__dietlibc__) \
+	 || defined(__DragonFly__)
 		unsigned long msglen;
 	#else
 		msglen_t msglen;
