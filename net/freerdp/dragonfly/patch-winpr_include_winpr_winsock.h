--- winpr/include/winpr/winsock.h.orig	2020-05-20 14:45:43 UTC
+++ winpr/include/winpr/winsock.h
@@ -327,7 +327,7 @@ extern "C"
 	WINPR_API u_long _ntohl(u_long netlong);
 	WINPR_API u_short _ntohs(u_short netshort);
 	WINPR_API int _recv(SOCKET s, char* buf, int len, int flags);
-	WINPR_API int _recvfrom(SOCKET s, char* buf, int len, int flags, struct sockaddr* from,
+	WINPR_API int _winsock_recvfrom(SOCKET s, char* buf, int len, int flags, struct sockaddr* from,
 	                        int* fromlen);
 	WINPR_API int _select(int nfds, fd_set* readfds, fd_set* writefds, fd_set* exceptfds,
 	                      const struct timeval* timeout);
