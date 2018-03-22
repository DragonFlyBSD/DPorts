--- pr/src/pthreads/ptsynch.c.orig	2018-03-22 01:34:56 UTC
+++ pr/src/pthreads/ptsynch.c
@@ -913,7 +913,7 @@ PR_IMPLEMENT(PRStatus) PR_DeleteSemaphor
 #if (defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED)) \
     || (defined(FREEBSD) && __FreeBSD_version < 1200059) \
     || defined(OPENBSD) || defined(BSDI) \
-    || defined(DARWIN) || defined(SYMBIAN)
+    || defined(DARWIN) || defined(SYMBIAN) || defined(__DragonFly__)
 /* union semun is defined by including <sys/sem.h> */
 #else
 /* according to X/OPEN we have to define it ourselves */
