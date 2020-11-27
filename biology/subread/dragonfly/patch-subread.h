--- subread.h.intermediate	2020-11-27 13:54:17.000000000 +0000
+++ subread.h
@@ -104,7 +104,7 @@
 
 #define USE_POSIX_MUTEX_LOCK
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(USE_POSIX_MUTEX_LOCK)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(USE_POSIX_MUTEX_LOCK)
 typedef pthread_mutex_t subread_lock_t;
 #define pthread_spinlock_t pthread_mutex_t
 #define pthread_spin_lock pthread_mutex_lock
