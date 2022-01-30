Use fallback for sendmmsg()

--- src/socketworks.c.intermediate	2022-01-30 19:27:23.000000000 +0000
+++ src/socketworks.c
@@ -1217,14 +1217,14 @@ pthread_t get_socket_thread(int s_id) {
 #undef DEFAULT_LOG
 #define DEFAULT_LOG LOG_SOCKET
 
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
 struct mmsghdr {
     struct msghdr msg_hdr; /* Message header */
     unsigned int msg_len;  /* Number of bytes transmitted */
 };
 #endif
 
-#if defined(__APPLE__) || defined(__SH4__)
+#if defined(__APPLE__) || defined(__SH4__) || defined(__DragonFly__)
 int sendmmsg0(int rsock, struct mmsghdr *msg, int len, int t) {
     int i;
     for (i = 0; i < len; i++)
