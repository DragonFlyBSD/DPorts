--- src/modules/tls/tls_mod.c.orig	2019-11-14 11:38:12 UTC
+++ src/modules/tls/tls_mod.c
@@ -439,7 +439,7 @@ static void destroy(void)
 
 int ksr_rand_engine_param(modparam_t type, void* val)
 {
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 	str *reng;
 
 	if(val==NULL) {
@@ -568,7 +568,7 @@ int mod_register(char *path, int *dlflag
 
 	register_tls_hooks(&tls_h);
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 	LM_DBG("setting cryptorand random engine\n");
 	ksr_cryptorand_seed_init();
 	RAND_set_rand_method(RAND_ksr_cryptorand_method());
