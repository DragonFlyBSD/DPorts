--- pr/src/pthreads/ptsynch.c.orig	Tue Apr  8 09:41:20 2025
+++ pr/src/pthreads/ptsynch.c	Tue Apr
@@ -864,7 +864,7 @@ PR_IMPLEMENT(PRStatus) PR_DeleteSemaphore(const char* 
  */
 #    if (defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED)) || \
         (defined(FREEBSD) && __FreeBSD_version < 1200059) ||            \
-        defined(OPENBSD) || defined(DARWIN)
+        defined(OPENBSD) || defined(DARWIN) || defined(__DragonFly__)
 /* union semun is defined by including <sys/sem.h> */
 #    else
 /* according to X/OPEN we have to define it ourselves */
