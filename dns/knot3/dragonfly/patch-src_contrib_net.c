--- src/contrib/net.c.orig	2021-09-08 11:56:11 UTC
+++ src/contrib/net.c
@@ -237,7 +237,7 @@ static int tfo_connect(int sock, const s
 #if defined(__linux__)
 	/* connect() will be called implicitly with sendmsg(). */
 	return KNOT_EOK;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && defined(TCP_FASTOPEN)
 	return sockopt_enable(sock, IPPROTO_TCP, TCP_FASTOPEN);
 #elif defined(__APPLE__)
 	/* Connection is performed lazily when first data is sent. */
