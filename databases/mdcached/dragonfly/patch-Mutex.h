--- Mutex.h.orig
+++ Mutex.h
@@ -24,7 +24,7 @@
 
 class Mutex {
 public:
-	Mutex() throw (MutexException) {
+	Mutex() {
 		if (pthread_mutex_init(&mtx, NULL) != 0)
 			throw new MutexException((char*)"pthread_mutex_init failed at " __FILE__);
 	}
