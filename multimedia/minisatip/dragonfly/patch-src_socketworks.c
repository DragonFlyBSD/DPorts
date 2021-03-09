Use fallback for sendmmsg()

--- src/socketworks.c.intermediate	2021-03-09 06:17:10.000000000 +0000
+++ src/socketworks.c
@@ -1296,7 +1296,7 @@ pthread_t get_socket_thread(int s_id)
 #undef DEFAULT_LOG
 #define DEFAULT_LOG LOG_SOCKET
 
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
 struct mmsghdr
 {
 	struct msghdr msg_hdr; /* Message header */
