--- src/network/ssl/qsslkey.cpp.orig	2018-05-29 06:56:52 UTC
+++ src/network/ssl/qsslkey.cpp
@@ -321,7 +321,7 @@ int QSslKey::length() const
 {
     if (d->isNull)
         return -1;
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     return (d->algorithm == QSsl::Rsa)
            ? q_BN_num_bits(d->rsa->n) : q_BN_num_bits(d->dsa->p);
 #else
