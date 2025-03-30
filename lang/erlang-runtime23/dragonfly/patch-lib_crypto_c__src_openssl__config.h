--- lib/crypto/c_src/openssl_config.h.orig	Mon Jun  5 09:06:09 2023
+++ lib/crypto/c_src/openssl_config.h	Sat Mar
@@ -240,9 +240,10 @@
 # ifdef HAVE_DH
 #   define HAVE_EDDH
 # endif
-# if OPENSSL_VERSION_NUMBER >= (PACKED_OPENSSL_VERSION_PLAIN(1,1,1))
-#   define HAVE_EDDSA
-# endif
+// No FIPS_mode_set
+//# if OPENSSL_VERSION_NUMBER >= (PACKED_OPENSSL_VERSION_PLAIN(1,1,1))
+//#   define HAVE_EDDSA
+//# endif
 #endif
 
 #if OPENSSL_VERSION_NUMBER >= PACKED_OPENSSL_VERSION(0,9,8,'c')
