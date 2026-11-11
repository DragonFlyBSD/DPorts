--- LockPool.h.orig
+++ LockPool.h
@@ -63,7 +63,7 @@
 	unsigned 		generations[N];
 	LockNotifier 		*lnf;
 public:
-	LockPool() throw(LockException);
+	LockPool();
 	~LockPool();
 	unsigned getSize() { return N; }
 	unsigned getGeneration(unsigned n) { return generations[n]; }
@@ -98,7 +98,7 @@
 
 
 template <unsigned N>
-LockPool<N>::LockPool() throw (LockException) {
+LockPool<N>::LockPool() {
 	for (unsigned i = 0; i < N; i++) {
 		if (pthread_rwlock_init(&locks[i], NULL) != 0)
 			throw new LockException((char*)"pthread_rwlock_init failed at " __FILE__);
