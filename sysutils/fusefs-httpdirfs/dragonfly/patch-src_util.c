--- src/util.c.orig	2019-11-01 13:02:51 UTC
+++ src/util.c
@@ -6,6 +6,7 @@
 #include <execinfo.h>
 #include <unistd.h>
 #include <stdlib.h>
+#include <stdint.h>
 #include <string.h>
 #include <errno.h>
 
@@ -126,8 +127,8 @@ void PTHREAD_MUTEX_UNLOCK(pthread_mutex_
     int i;
     i = pthread_mutex_unlock(x);
     if (i) {
-        fprintf(stderr, "thread %lu: pthread_mutex_unlock() failed, %d, %s\n",
-                pthread_self(), i, strerror(i));
+        fprintf(stderr, "thread %ju: pthread_mutex_unlock() failed, %d, %s\n",
+                (uintmax_t)pthread_self(), i, strerror(i));
         exit_failure();
     }
 }
@@ -137,8 +138,8 @@ void PTHREAD_MUTEX_LOCK(pthread_mutex_t
     int i;
     i = pthread_mutex_lock(x);
     if (i) {
-        fprintf(stderr, "thread %lu: pthread_mutex_lock() failed, %d, %s\n",
-                pthread_self(), i, strerror(i));
+        fprintf(stderr, "thread %ju: pthread_mutex_lock() failed, %d, %s\n",
+                (uintmax_t)pthread_self(), i, strerror(i));
         exit_failure();
     }
 }
