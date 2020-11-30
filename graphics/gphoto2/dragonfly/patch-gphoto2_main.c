--- gphoto2/main.c.orig	2019-02-09 15:24:39 UTC
+++ gphoto2/main.c
@@ -40,6 +40,7 @@
 #include <stdlib.h>
 #include <stdio.h>
 #include <stdarg.h>
+#include <stdint.h>
 #include <string.h>
 #include <unistd.h>
 #include <ctype.h>
@@ -1201,7 +1202,7 @@ thread_func (void *data)
 	pthread_cleanup_pop (1);
 }
 
-static unsigned int
+static uintptr_t
 start_timeout_func (Camera *camera, unsigned int timeout,
 		    CameraTimeoutFunc func, void __unused__ *data)
 {
@@ -1218,14 +1219,14 @@ start_timeout_func (Camera *camera, unsi
 
 	pthread_create (&tid, NULL, thread_func, td);
 
-	return (tid);
+	return ((uintptr_t)tid);
 }
 
 static void
-stop_timeout_func (Camera __unused__ *camera, unsigned int id,
+stop_timeout_func (Camera __unused__ *camera, uintptr_t id,
 		   void __unused__ *data)
 {
-	pthread_t tid = id;
+	pthread_t tid = (pthread_t)id;
 
 	pthread_cancel (tid);
 	pthread_join (tid, NULL);
