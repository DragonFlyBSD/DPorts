--- src/sthreads.c.orig	2017-06-06 15:46:34.000000000 +0300
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
@@ -216,11 +216,11 @@ void stunnel_rwlock_destroy_debug(struct
 
 struct CRYPTO_dynlock_value stunnel_locks[STUNNEL_LOCKS];
 
-#if OPENSSL_VERSION_NUMBER<0x10100004L
+#if OPENSSL_VERSION_NUMBER<0x10100004L || defined(LIBRESSL_VERSION_NUMBER)
 #define CRYPTO_THREAD_lock_new() CRYPTO_get_new_dynlockid()
 #endif
 
-#if OPENSSL_VERSION_NUMBER<0x10100004L
+#if OPENSSL_VERSION_NUMBER<0x10100004L || defined(LIBRESSL_VERSION_NUMBER)
 
 static struct CRYPTO_dynlock_value *lock_cs;
 
@@ -261,7 +261,7 @@ NOEXPORT void locking_callback(int mode,
 
 void locking_init(void) {
     size_t i;
-#if OPENSSL_VERSION_NUMBER<0x10100004L
+#if OPENSSL_VERSION_NUMBER<0x10100004L || defined(LIBRESSL_VERSION_NUMBER)
     size_t num;
 #endif
 
@@ -269,7 +269,7 @@ void locking_init(void) {
     for(i=0; i<STUNNEL_LOCKS; i++) /* all the mutexes */
         stunnel_rwlock_init(&stunnel_locks[i]);
 
-#if OPENSSL_VERSION_NUMBER<0x10100004L
+#if OPENSSL_VERSION_NUMBER<0x10100004L || defined(LIBRESSL_VERSION_NUMBER)
     /* initialize the OpenSSL static locking */
     num=(size_t)CRYPTO_num_locks();
     lock_cs=str_alloc_detached(num*sizeof(struct CRYPTO_dynlock_value));
