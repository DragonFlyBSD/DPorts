--- src/sthreads.c.orig	2018-07-02 21:30:10 UTC
+++ src/sthreads.c
@@ -97,14 +97,14 @@ unsigned long stunnel_thread_id(void) {
 
 #endif /* USE_WIN32 */
 
-#if OPENSSL_VERSION_NUMBER>=0x10000000L && OPENSSL_VERSION_NUMBER<0x10100004L
+#if (OPENSSL_VERSION_NUMBER>=0x10000000L && OPENSSL_VERSION_NUMBER<0x10100004L) || defined(LIBRESSL_VERSION_NUMBER)
 NOEXPORT void threadid_func(CRYPTO_THREADID *tid) {
     CRYPTO_THREADID_set_numeric(tid, stunnel_thread_id());
 }
 #endif
 
 void thread_id_init(void) {
-#if OPENSSL_VERSION_NUMBER>=0x10000000L && OPENSSL_VERSION_NUMBER<0x10100000L
+#if (OPENSSL_VERSION_NUMBER>=0x10000000L && OPENSSL_VERSION_NUMBER<0x10100000L) || defined(LIBRESSL_VERSION_NUMBER)
     CRYPTO_THREADID_set_callback(threadid_func);
 #endif
 #if OPENSSL_VERSION_NUMBER<0x10000000L || !defined(OPENSSL_NO_DEPRECATED)
@@ -224,7 +224,7 @@ NOEXPORT int s_atomic_add(int *val, int
 
 CRYPTO_RWLOCK *stunnel_locks[STUNNEL_LOCKS];
 
-#if OPENSSL_VERSION_NUMBER<0x10100004L
+#if OPENSSL_VERSION_NUMBER<0x10100004L || defined(LIBRESSL_VERSION_NUMBER)
 
 #ifdef USE_OS_THREADS
 
@@ -334,7 +334,7 @@ int CRYPTO_atomic_add(int *val, int amou
 
 void locking_init(void) {
     size_t i;
-#if defined(USE_OS_THREADS) && OPENSSL_VERSION_NUMBER<0x10100004L
+#if defined(USE_OS_THREADS) && OPENSSL_VERSION_NUMBER<0x10100004L || defined(LIBRESSL_VERSION_NUMBER)
     size_t num;
 
     /* initialize the OpenSSL static locking */
