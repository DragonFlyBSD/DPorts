--- src/spy/libpcscspy.c.orig	2019-11-08 14:54:33 UTC
+++ src/spy/libpcscspy.c
@@ -26,6 +26,7 @@
 #include <unistd.h>
 #include <sys/time.h>
 #include <pthread.h>
+#include <stdint.h>
 
 #include "misc.h"
 #include <winscard.h>
@@ -167,7 +168,7 @@ static void spy_line_direct(char *line)
 	if (Log_fd < 0)
 		return;
 
-	snprintf(threadid, sizeof threadid, "%lX@", pthread_self());
+	snprintf(threadid, sizeof threadid, "%jX@", (uintmax_t)pthread_self());
 	pthread_mutex_lock(&Log_fd_mutex);
 	r = write(Log_fd, threadid, strlen(threadid));
 	r = write(Log_fd, line, strlen(line));
@@ -196,7 +197,7 @@ static void spy_line(const char *fmt, ..
 		printf("libpcsc-spy: Buffer is too small!\n");
 		return;
 	}
-	snprintf(threadid, sizeof threadid, "%lX@", pthread_self());
+	snprintf(threadid, sizeof threadid, "%jX@", (uintmax_t)pthread_self());
 	pthread_mutex_lock(&Log_fd_mutex);
 	r = write(Log_fd, threadid, strlen(threadid));
 	r = write(Log_fd, line, size);
