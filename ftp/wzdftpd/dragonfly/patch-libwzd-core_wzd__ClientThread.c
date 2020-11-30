--- libwzd-core/wzd_ClientThread.c.orig	2007-10-25 17:25:33 UTC
+++ libwzd-core/wzd_ClientThread.c
@@ -71,6 +71,7 @@
 #ifndef WIN32
 #include <unistd.h>
 #include <pthread.h>
+#include <stdint.h>
 #endif
 
 #ifndef HAVE_STRTOK_R
@@ -3268,7 +3269,7 @@ void * clientThreadProc(void *arg)
 #ifdef WIN32
   context->thread_id = GetCurrentThreadId();
 #else
-  context->thread_id = pthread_self();
+  context->thread_id = (uintptr_t)pthread_self();
 #endif
  _tls_store_context(context);
 
