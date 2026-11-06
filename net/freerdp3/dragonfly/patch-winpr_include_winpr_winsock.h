--- winpr/include/winpr/winsock.h.orig	2026-11-05 10:50:52 UTC
+++ winpr/include/winpr/winsock.h
@@ -388,7 +388,7 @@
 	WINPR_API int _recv(SOCKET s, char* buf, int len, int flags);
 
 	WINPR_ATTR_NODISCARD
-	WINPR_API int _recvfrom(SOCKET s, char* buf, int len, int flags, struct sockaddr* from,
+	WINPR_API int _winsock_recvfrom(SOCKET s, char* buf, int len, int flags, struct sockaddr* from,
 	                        int* fromlen);
 
 	WINPR_ATTR_NODISCARD
