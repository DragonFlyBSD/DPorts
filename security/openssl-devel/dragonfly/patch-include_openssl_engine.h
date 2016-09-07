--- include/openssl/engine.h.orig	2016-08-25 18:29:22.000000000 +0300
+++ include/openssl/engine.h
@@ -745,7 +745,7 @@ typedef int (*dynamic_bind_engine) (ENGI
  */
 void *ENGINE_get_static_state(void);
 
-# if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(HAVE_CRYPTODEV)
+# if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(HAVE_CRYPTODEV)
 DEPRECATEDIN_1_1_0(void ENGINE_setup_bsd_cryptodev(void))
 # endif
 
