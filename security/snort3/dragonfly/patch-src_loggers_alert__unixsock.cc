--- src/loggers/alert_unixsock.cc.orig	2019-05-04 16:23:41 UTC
+++ src/loggers/alert_unixsock.cc
@@ -217,7 +217,7 @@ static void OpenAlertSock()
     if ( (us.socket = socket(AF_UNIX, SOCK_DGRAM, 0)) < 0 )
         FatalError("socket() call failed: %s", get_error(errno));
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     int buflen=sizeof(us.alert);
 
     if ( setsockopt(us.socket, SOL_SOCKET, SO_SNDBUF, (char*)&buflen, sizeof(int)) < 0 )
