--- include/mgba-util/platform/posix/threading.h.orig	2019-01-27 02:06:06 UTC
+++ include/mgba-util/platform/posix/threading.h
@@ -12,7 +12,7 @@ CXX_GUARD_START
 
 #include <pthread.h>
 #include <sys/time.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #elif defined(__HAIKU__)
 #include <OS.h>
@@ -92,7 +92,7 @@ static inline int ThreadSetName(const ch
 	UNUSED(name);
 	return 0;
 #endif
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	pthread_set_name_np(pthread_self(), name);
 	return 0;
 #elif defined(__HAIKU__)
