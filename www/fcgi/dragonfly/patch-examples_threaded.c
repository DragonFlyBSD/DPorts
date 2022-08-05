--- examples/threaded.c.orig	2001-11-20 03:23:21 UTC
+++ examples/threaded.c
@@ -10,6 +10,7 @@ static const char rcsid[] = "$Id: thread
 
 #include <pthread.h>
 #include <sys/types.h>
+#include <stdint.h>
 
 #ifdef HAVE_UNISTD_H
 #include <unistd.h>
@@ -24,7 +25,7 @@ static int counts[THREAD_COUNT];
 
 static void *doit(void *a)
 {
-    int rc, i, thread_id = (int)a;
+    int rc, i, thread_id = (int)(uintptr_t)a;
     pid_t pid = getpid();
     FCGX_Request request;
     char *server_name;
@@ -77,7 +78,11 @@ int main(void)
     FCGX_Init();
 
     for (i = 1; i < THREAD_COUNT; i++)
+#if defined(__DragonFly__)
+        pthread_create(&id[i], NULL, doit, (void*)(uintptr_t)i);
+#else
         pthread_create(&id[i], NULL, doit, (void*)i);
+#endif
 
     doit(0);
 
