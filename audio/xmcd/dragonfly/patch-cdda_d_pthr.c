--- cdda_d/pthr.c.intermediate	2020-11-29 18:33:35.000000000 +0000
+++ cdda_d/pthr.c
@@ -31,6 +31,7 @@ static char *_pthr_c_ident_ = "@(#)pthr.
 #include "libdi_d/libdi.h"
 #include "cdda_d/cdda.h"
 #include "cdda_d/common.h"
+#include <stdint.h>
 
 
 #ifdef CDDA_PTHREADS
@@ -141,9 +142,9 @@ cdda_pthr_highpri(char *name)
 	}
 
 	DBGPRN(DBG_GEN)(errfp,
-		    "\n%s running POSIX SCHED_RR scheduling (thread id=%d)\n"
+		    "\n%s running POSIX SCHED_RR scheduling (thread id=%ju)\n"
 		    "Priority=%d (range: %d,%d)\n",
-		    name, (int) tid, scparm.sched_priority, minpri, maxpri);
+		    name, (uintmax_t) tid, scparm.sched_priority, minpri, maxpri);
 
 #ifdef HAS_EUID
 	(void) util_seteuid(savuid);
@@ -514,8 +515,8 @@ cdda_pthr_writer(void *arg)
 	/* Store writer thread id */
 	cd->i->writer = (thid_t) pthread_self();
 
-	DBGPRN(DBG_GEN)(errfp, "\nStarted writer thread id=%d\n",
-			(int) cd->i->writer);
+	DBGPRN(DBG_GEN)(errfp, "\nStarted writer thread id=%ju\n",
+			(uintmax_t) cd->i->writer);
 
 #ifndef __VMS
 	/* Block some signals in this thread */
@@ -555,7 +556,7 @@ cdda_pthr_writer(void *arg)
 	(*wdone)((bool_t) !status);
 
 	/* End of write thread */
-	pthread_exit((void *) (status ? 0 : 1));
+	pthread_exit((void *)(uintptr_t) (status ? 0 : 1));
 
 	/* Should never get here */
 	return NULL;
@@ -587,8 +588,8 @@ cdda_pthr_reader(void *arg)
 	/* Store reader thread id */
 	cd->i->reader = (thid_t) pthread_self();
 
-	DBGPRN(DBG_GEN)(errfp, "\nStarted reader thread id=%d\n",
-			(int) cd->i->reader);
+	DBGPRN(DBG_GEN)(errfp, "\nStarted reader thread id=%lu\n",
+			(uintmax_t) cd->i->reader);
 
 #ifndef __VMS
 	/* Block some signals in this thread */
@@ -628,7 +629,7 @@ cdda_pthr_reader(void *arg)
 	(*rdone)((bool_t) !status);
 
 	/* End of read thread */
-	pthread_exit((void *) (status ? 0 : 1));
+	pthread_exit((void *)(uintptr_t) (status ? 0 : 1));
 
 	/* Should never get here */
 	return NULL;
@@ -890,7 +891,7 @@ cdda_pthr_play(di_dev_t *devp, curstat_t
 	pthr_sem[DATA].v = 0;
 
 #ifndef __VMS	/* VMS has no real fork, so this does not apply */
-#if __FreeBSD_version >= 502100
+#if __FreeBSD_version >= 502100 || defined(__DragonFly__)
 	/* Register fork handler */
 	if ((ret = pthread_atfork(NULL, NULL, cdda_pthr_atfork)) != 0) {
 		(void) sprintf(errbuf,
@@ -1015,16 +1016,16 @@ cdda_pthr_stop(di_dev_t *devp, curstat_t
 
 		/* Wait for writer, blocking */
 		DBGPRN(DBG_GEN)(errfp,
-			"\ncdda_pthr_stop: Waiting for writer thread id=%d\n",
-			(int) tid);
+			"\ncdda_pthr_stop: Waiting for writer thread id=%ju\n",
+			(uintmax_t) tid);
 
 		if ((ret = pthread_join(tid, &status)) != 0) {
 			DBGPRN(DBG_GEN)(errfp,
 				"pthread_join failed (writer ret=%d)\n", ret);
 		}
 		else {
-			ret = (int) status;
-			if (ret == (int) PTHREAD_CANCELED) {
+			ret = (int)(uintptr_t) status;
+			if (ret == (int)(uintptr_t) PTHREAD_CANCELED) {
 				DBGPRN(DBG_GEN)(errfp, "Writer canceled\n");
 			}
 			else {
@@ -1045,16 +1046,16 @@ cdda_pthr_stop(di_dev_t *devp, curstat_t
 
 		/* Wait for reader, blocking */
 		DBGPRN(DBG_GEN)(errfp,
-			"\ncdda_pthr_stop: Waiting for reader thread id=%d\n",
-			(int) tid);
+			"\ncdda_pthr_stop: Waiting for reader thread id=%ju\n",
+			(uintptr_t) tid);
 
 		if ((ret = pthread_join(tid, &status)) != 0) {
 			DBGPRN(DBG_GEN)(errfp,
 				"pthread_join failed (reader ret=%d)\n", ret);
 		}
 		else {
-			ret = (int) status;
-			if (ret == (int) PTHREAD_CANCELED) {
+			ret = (int)(uintptr_t) status;
+			if (ret == (int)(uintptr_t) PTHREAD_CANCELED) {
 				DBGPRN(DBG_GEN)(errfp, "Reader canceled\n");
 			}
 			else {
