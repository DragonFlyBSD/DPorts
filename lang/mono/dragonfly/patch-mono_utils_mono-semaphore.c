--- mono/utils/mono-semaphore.c.orig	2013-06-15 00:15:40.000000000 +0000
+++ mono/utils/mono-semaphore.c
@@ -25,7 +25,7 @@
 #  elif defined(__native_client__) && defined(USE_NEWLIB)
 #    define TIMESPEC struct timespec
 #    define WAIT_BLOCK(a, b) sem_trywait(a)
-#  elif defined(__OpenBSD__)
+#  elif defined(__OpenBSD__) || defined(__DragonFly__)
 #    define TIMESPEC struct timespec
 #    define WAIT_BLOCK(a) sem_trywait(a)
 #  else
@@ -40,8 +40,8 @@ mono_sem_timedwait (MonoSemType *sem, gu
 	TIMESPEC ts, copy;
 	struct timeval t;
 	int res = 0;
-#if defined(__OpenBSD__)
-	int timeout;
+#if defined(__OpenBSD__) || defined(__DragonFly__)
+	uint32_t timeout = timeout_ms;
 #endif
 
 #ifndef USE_MACH_SEMA
@@ -51,6 +51,19 @@ mono_sem_timedwait (MonoSemType *sem, gu
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
@@ -62,19 +75,6 @@ mono_sem_timedwait (MonoSemType *sem, gu
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
