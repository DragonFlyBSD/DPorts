--- pr/src/pthreads/ptsynch.c.orig
+++ pr/src/pthreads/ptsynch.c
@@ -929,7 +929,7 @@
  */
 #if (defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED)) || \
     (defined(FREEBSD) && __FreeBSD_version < 1200059) ||            \
-    defined(OPENBSD) || defined(DARWIN)
+    defined(OPENBSD) || defined(DARWIN) || defined(__DragonFly__)
 /* union semun is defined by including <sys/sem.h> */
 #else
 /* according to X/OPEN we have to define it ourselves */
