--- src/satipc.c.orig	2021-12-22 23:43:07 UTC
+++ src/satipc.c
@@ -48,7 +48,14 @@
 #define TCP_DATA_MAX (TCP_DATA_SIZE * 8)
 #define MAKE_ITEM(a, b) ((a << 16) | (b))
 
-#if defined(__APPLE__) || defined(__SH4__)
+#if defined(__APPLE__) || defined(__DragonFly__)
+struct mmsghdr {
+    struct msghdr msg_hdr; /* Message header */
+    unsigned int msg_len;  /* Number of bytes transmitted */
+};
+#endif
+
+#if defined(__APPLE__) || defined(__SH4__) || defined(__DragonFly__)
 #define MAX_RTP_MSG                                                            \
     1 // read 1 UDP datagrams at one time (no recvmmsg() support!)
 int recvmmsg0(int sockfd, struct mmsghdr *msgvec, unsigned int vlen) {
