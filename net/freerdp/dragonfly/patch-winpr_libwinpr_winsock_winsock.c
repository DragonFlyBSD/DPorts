--- winpr/libwinpr/winsock/winsock.c.orig	2018-11-20 10:43:51 UTC
+++ winpr/libwinpr/winsock/winsock.c
@@ -1142,7 +1142,7 @@ int _recv(SOCKET s, char* buf, int len,
 	return status;
 }
 
-int _recvfrom(SOCKET s, char* buf, int len, int flags, struct sockaddr* from, int* fromlen)
+int _winsock_recvfrom(SOCKET s, char* buf, int len, int flags, struct sockaddr* from, int* fromlen)
 {
 	int status;
 	int fd = (int) s;
