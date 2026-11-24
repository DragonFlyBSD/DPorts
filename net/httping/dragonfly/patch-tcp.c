--- tcp.c.orig
+++ tcp.c
@@ -161,9 +161,11 @@
 	/* connect to peer */
 	if (tfo && *tfo)
 	{
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || !defined(MSG_FASTOPEN)
 		int enable = 1;                                                                                                                                                                                             
+#ifdef TCP_FASTOPEN
 		setsockopt(fd, IPPROTO_TCP, TCP_FASTOPEN, &enable, sizeof(enable));                                                                                                                                         
+#endif
 
 		rc = sendto(fd, msg, msg_len, 0, ai->ai_addr, ai->ai_addrlen);                                                                                                                                              
 #else
