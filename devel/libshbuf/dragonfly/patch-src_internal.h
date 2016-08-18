--- src/internal.h.intermediate	2016-08-16 14:50:53 UTC
+++ src/internal.h
@@ -72,7 +72,7 @@ struct _shbuf {
     pthread_t thread;
 };
 
-#if (defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED) || defined(__FreeBSD__))
+#if (defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED) || defined(__FreeBSD__) || defined(__DragonFly__))
 /* union semun is defined by including <sys/sem.h> */
 #else
 /* according to X/OPEN we have to define it ourselves */
