--- winpr/libwinpr/winsock/winsock.c.orig	2018-07-02 19:26:00 UTC
+++ winpr/libwinpr/winsock/winsock.c
@@ -1102,10 +1102,15 @@ int _recvfrom(SOCKET s, char* buf, int l
 {
 	int status;
 	int fd = (int) s;
-	socklen_t s_fromlen = (socklen_t) *fromlen;
+	socklen_t s_fromlen;
+
+	if (fromlen)
+		s_fromlen = *fromlen;
 
 	status = (int) recvfrom(fd, (void*) buf, (size_t) len, flags, from, &s_fromlen);
-	*fromlen = (int) s_fromlen;
+
+	if (fromlen)
+		*fromlen = (int) s_fromlen;
 
 	return status;
 }
