--- src/utils/common/netio.c.orig	2021-09-08 11:56:11 UTC
+++ src/utils/common/netio.c
@@ -243,7 +243,7 @@ int net_init(const srv_info_t     *local
  */
 static int fastopen_connect(int sockfd, const struct addrinfo *srv)
 {
-#if defined( __FreeBSD__)
+#if defined( __FreeBSD__) && defined(TCP_FASTOPEN)
 	const int enable = 1;
 	return setsockopt(sockfd, IPPROTO_TCP, TCP_FASTOPEN, &enable, sizeof(enable));
 #elif defined(__APPLE__)
@@ -268,7 +268,7 @@ static int fastopen_connect(int sockfd,
  */
 static int fastopen_send(int sockfd, const struct msghdr *msg, int timeout)
 {
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if (defined(__FreeBSD__) && defined(TCP_FASTOPEN))|| defined(__APPLE__)
 	return sendmsg(sockfd, msg, 0);
 #elif defined(__linux__)
 	int ret = sendmsg(sockfd, msg, MSG_FASTOPEN);
