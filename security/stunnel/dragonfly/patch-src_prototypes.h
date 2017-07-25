--- src/prototypes.h.orig	2017-06-05 14:44:40.000000000 +0300
+++ src/prototypes.h
@@ -678,7 +678,7 @@ void stunnel_rwlock_destroy_debug(struct
 #define stunnel_write_unlock(x) stunnel_write_unlock_debug((x),__FILE__,__LINE__)
 #define stunnel_rwlock_destroy(x) stunnel_rwlock_destroy_debug((x),__FILE__,__LINE__)
 
-#if OPENSSL_VERSION_NUMBER<0x10100004L
+#if OPENSSL_VERSION_NUMBER<0x10100004L || defined(LIBRESSL_VERSION_NUMBER)
 #define CRYPTO_atomic_add(addr,amount,result,type) \
     *result = type ? CRYPTO_add(addr,amount,type) : (*addr+=amount)
 #endif
