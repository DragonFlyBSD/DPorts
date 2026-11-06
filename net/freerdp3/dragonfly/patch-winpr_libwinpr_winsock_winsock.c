--- winpr/libwinpr/winsock/winsock.c.orig	2026-11-05 10:50:52 UTC
+++ winpr/libwinpr/winsock/winsock.c
@@ -1151,7 +1151,7 @@
 	return status;
 }
 
-int _recvfrom(SOCKET s, char* buf, int len, int flags, struct sockaddr* from, int* fromlen)
+int _winsock_recvfrom(SOCKET s, char* buf, int len, int flags, struct sockaddr* from, int* fromlen)
 {
 	int status = 0;
 	int fd = (int)s;
