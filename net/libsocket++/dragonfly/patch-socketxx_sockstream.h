--- socket++/sockstream.h.intermediate	2019-05-09 17:32:54.000000000 +0000
+++ socket++/sockstream.h
@@ -136,7 +136,7 @@ public:
     msg_oob		= MSG_OOB,
     msg_peek	        = MSG_PEEK,
 
-#if !(defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__APPLE__))
+#if !(defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__APPLE__))
     msg_dontroute	= MSG_DONTROUTE,
     msg_maxiovlen	= MSG_MAXIOVLEN
 #else
