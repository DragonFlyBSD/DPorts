--- crypto/init.c.orig	2016-08-25 18:29:20.000000000 +0300
+++ crypto/init.c
@@ -198,7 +198,7 @@ DEFINE_RUN_ONCE_STATIC(ossl_init_engine_
     return 1;
 }
 # if !defined(OPENSSL_NO_HW) && \
-    (defined(__OpenBSD__) || defined(__FreeBSD__) || defined(HAVE_CRYPTODEV))
+    (defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(HAVE_CRYPTODEV))
 static CRYPTO_ONCE engine_cryptodev = CRYPTO_ONCE_STATIC_INIT;
 DEFINE_RUN_ONCE_STATIC(ossl_init_engine_cryptodev)
 {
@@ -525,7 +525,7 @@ int OPENSSL_init_crypto(uint64_t opts, c
             && !RUN_ONCE(&engine_openssl, ossl_init_engine_openssl))
         return 0;
 # if !defined(OPENSSL_NO_HW) && \
-    (defined(__OpenBSD__) || defined(__FreeBSD__) || defined(HAVE_CRYPTODEV))
+    (defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(HAVE_CRYPTODEV))
     if ((opts & OPENSSL_INIT_ENGINE_CRYPTODEV)
             && !RUN_ONCE(&engine_cryptodev, ossl_init_engine_cryptodev))
         return 0;
