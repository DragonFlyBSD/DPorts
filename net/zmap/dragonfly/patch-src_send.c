--- src/send.c.orig	2015-09-11 18:30:41.000000000 +0300
+++ src/send.c
@@ -41,7 +41,7 @@ static inline int send_run_init(sock_t s
 // Include the right implementations
 #if defined(PFRING)
 #include "send-pfring.h"
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include "send-bsd.h"
 #else /* LINUX */
 #include "send-linux.h"
