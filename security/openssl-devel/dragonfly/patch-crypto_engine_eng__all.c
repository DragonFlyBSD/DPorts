--- crypto/engine/eng_all.c.orig	2016-08-25 18:29:20.000000000 +0300
+++ crypto/engine/eng_all.c
@@ -18,7 +18,7 @@ void ENGINE_load_builtin_engines(void)
     OPENSSL_init_crypto(OPENSSL_INIT_ENGINE_ALL_BUILTIN, NULL);
 }
 
-#if (defined(__OpenBSD__) || defined(__FreeBSD__) || defined(HAVE_CRYPTODEV)) && !defined(OPENSSL_NO_DEPRECATED)
+#if (defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(HAVE_CRYPTODEV)) && !defined(OPENSSL_NO_DEPRECATED)
 void ENGINE_setup_bsd_cryptodev(void)
 {
     static int bsd_cryptodev_default_loaded = 0;
