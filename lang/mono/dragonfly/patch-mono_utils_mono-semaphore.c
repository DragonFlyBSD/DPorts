--- mono/utils/mono-semaphore.c.orig	2012-09-06 21:09:51.000000000 +0200
+++ mono/utils/mono-semaphore.c	2013-01-03 21:10:53.452159000 +0100
@@ -22,7 +22,7 @@
 #  ifdef USE_MACH_SEMA
 #    define TIMESPEC mach_timespec_t
 #    define WAIT_BLOCK(a,b) semaphore_timedwait (*(a), *(b))
-#  elif defined(__OpenBSD__)
+#  elif defined(__OpenBSD__) || defined(__DragonFly__)
 #    define TIMESPEC struct timespec
 #    define WAIT_BLOCK(a) sem_trywait(a)
 #  else
@@ -37,8 +37,8 @@
 	TIMESPEC ts, copy;
 	struct timeval t;
 	int res = 0;
-#if defined(__OpenBSD__)
-	int timeout;
+#if defined(__OpenBSD__) || defined(__DragonFly__)
+	uint32_t timeout = timeout_ms;
 #endif
 
 #ifndef USE_MACH_SEMA
@@ -48,6 +48,19 @@
 	if (timeout_ms == (guint32) 0xFFFFFFFF)
 		return mono_sem_wait (sem, alertable);
 
+#if defined(__OpenBSD__) || defined(__DragonFly__)
+	if (timeout < 50)
+		timeout += 50;
+	do {
+		if ((res = WAIT_BLOCK(sem)) == 0)
+			break;
+		usleep(50000);
+		timeout -= 50;
+		if (alertable)
+			return -1;
+	} while (timeout > 50);
+#else
+
 #ifdef USE_MACH_SEMA
 	memset (&t, 0, sizeof (TIMESPEC));
 #else
@@ -59,19 +72,6 @@
 		ts.tv_nsec -= NSEC_PER_SEC;
 		ts.tv_sec++;
 	}
-#if defined(__OpenBSD__)
-	timeout = ts.tv_sec;
-	while (timeout) {
-		if ((res = WAIT_BLOCK (sem)) == 0)
-			return res;
-
-		if (alertable)
-			return -1;
-
-		usleep (ts.tv_nsec / 1000);
-		timeout--;
-	}
-#else
 	copy = ts;
 	while ((res = WAIT_BLOCK (sem, &ts)) == -1 && errno == EINTR) {
 		struct timeval current;
