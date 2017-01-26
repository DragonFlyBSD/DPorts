LibreSSL compat
not sure what are these BIO_*() functions in newer OpenSSL

--- src/ssl/bio.h.orig	2016-12-16 12:06:20.000000000 +0200
+++ src/ssl/bio.h	2017-01-25 17:06:53.000000000 +0200
@@ -194,7 +194,7 @@ private:
 void
 applyTlsDetailsToSSL(SSL *ssl, Security::TlsDetails::Pointer const &details, Ssl::BumpMode bumpMode);
 
-#if (OPENSSL_VERSION_NUMBER < 0x10100000L)
+#if (OPENSSL_VERSION_NUMBER < 0x10100000L) || defined(LIBRESSL_VERSION_NUMBER)
 // OpenSSL v1.0 bio compatibility functions
 inline void *BIO_get_data(BIO *table) { return table->ptr; }
 inline void BIO_set_data(BIO *table, void *data) { table->ptr = data; }
