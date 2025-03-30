--- lib/crypto/c_src/openssl_config.h.orig	Mon Mar 18 12:57:50 2024
+++ lib/crypto/c_src/openssl_config.h	Sat Mar
@@ -227,9 +227,10 @@
     && !defined(HAS_LIBRESSL) \
     && defined(HAVE_EC)
 # define HAVE_ED_CURVE_DH
-# if OPENSSL_VERSION_NUMBER >= (PACKED_OPENSSL_VERSION_PLAIN(1,1,1))
-#   define HAVE_EDDSA
-# endif
+// No FIPS_mode_set
+//# if OPENSSL_VERSION_NUMBER >= (PACKED_OPENSSL_VERSION_PLAIN(1,1,1))
+//#   define HAVE_EDDSA
+//# endif
 #endif
 
 #if OPENSSL_VERSION_NUMBER >= PACKED_OPENSSL_VERSION(0,9,8,'c')
