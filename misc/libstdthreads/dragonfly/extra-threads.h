--- threads.h.orig	2019-06-05 16:26:45 UTC
+++ threads.h
@@ -42,14 +42,14 @@
  * copied from this header file.  They must be kept in sync.
  */
 
-typedef struct pthread_cond	*cnd_t;
-typedef struct pthread_mutex	*mtx_t;
-typedef struct pthread		*thrd_t;
+typedef struct __pthread_cond_s		*cnd_t;
+typedef struct __pthread_mutex_s	*mtx_t;
+typedef struct __pthread_s		*thrd_t;
 typedef int			 tss_t;
 
 typedef struct {
 	int	__state;
-	mtx_t	__mutex;
+	void	*__spare8;
 } once_flag;
 
 typedef void (*tss_dtor_t)(void *);
