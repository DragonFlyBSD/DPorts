--- src/prototypes.h.orig	2018-07-02 21:30:10 UTC
+++ src/prototypes.h
@@ -696,7 +696,7 @@ typedef enum {
 
 extern CRYPTO_RWLOCK *stunnel_locks[STUNNEL_LOCKS];
 
-#if OPENSSL_VERSION_NUMBER<0x10100004L
+#if OPENSSL_VERSION_NUMBER<0x10100004L || defined(LIBRESSL_VERSION_NUMBER)
 /* Emulate the OpenSSL 1.1 locking API for older OpenSSL versions */
 CRYPTO_RWLOCK *CRYPTO_THREAD_lock_new(void);
 int CRYPTO_THREAD_read_lock(CRYPTO_RWLOCK *);
