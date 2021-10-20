--- mod_qos.c.orig	2020-05-21 15:28:45 UTC
+++ mod_qos.c
@@ -1019,7 +1019,11 @@ typedef struct {
   apr_time_t request_time;
   unsigned int in_addr;
   unsigned int conn;
+#ifdef APR_HAS_THREADS
+  pthread_t tid;
+#else
   unsigned int tid;
+#endif
   unsigned int unique_id_counter;
 } qos_unique_id_t;
 
