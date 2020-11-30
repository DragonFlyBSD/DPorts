--- threadlib/pthread.c.orig	2007-02-10 03:01:08 UTC
+++ threadlib/pthread.c
@@ -58,6 +58,7 @@ pthread_mutex_t *mp=(pthread_mutex_t *)v
 **  queue, then goes back to waiting for another go signal.
 */
 
+__attribute__((__noreturn__))
 static void *threadfunc(void *p)
 {
 cthread_t	*c= (cthread_t *)p;
