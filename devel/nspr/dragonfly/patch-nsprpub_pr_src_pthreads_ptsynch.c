--- pr/src/pthreads/ptsynch.c.orig	2019-08-30 13:44:48 UTC
+++ pr/src/pthreads/ptsynch.c
@@ -913,7 +913,7 @@ PR_IMPLEMENT(PRStatus) PR_DeleteSemaphor
 #if (defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED)) \
     || (defined(FREEBSD) && __FreeBSD_version < 1200059) \
     || defined(OPENBSD) || defined(BSDI) \
-    || defined(DARWIN)
+    || defined(DARWIN) || defined(__DragonFly__)
 /* union semun is defined by including <sys/sem.h> */
 #else
 /* according to X/OPEN we have to define it ourselves */
