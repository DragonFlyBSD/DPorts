--- RWLock.h.orig
+++ RWLock.h
@@ -24,7 +24,7 @@
 
 class RWLock {
 public:
-	RWLock() throw (RWLockException) {
+	RWLock() {
 		if (pthread_rwlock_init(&rwl, NULL) != 0)
 			throw new RWLockException((char*)"pthread_rwlock_init failed at " __FILE__);
 	}
