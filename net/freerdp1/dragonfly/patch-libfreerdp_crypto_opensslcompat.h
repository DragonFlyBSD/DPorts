--- libfreerdp/crypto/opensslcompat.h.intermediate	2019-12-28 20:07:22.000000000 +0000
+++ libfreerdp/crypto/opensslcompat.h
@@ -28,6 +28,12 @@
 
 #include <openssl/opensslv.h>
 
+#ifdef LIBRESSL_VERSION_NUMBER
+#define BIO_get_init(b)                 (b)->init
+#define BIO_set_next(b,v)               (b)->next_bio = v
+#define BIO_set_retry_reason(b,v)       (b)->retry_reason = v
+#endif
+
 #if OPENSSL_VERSION_NUMBER < 0x10100000L
 
 #include <openssl/bio.h>
