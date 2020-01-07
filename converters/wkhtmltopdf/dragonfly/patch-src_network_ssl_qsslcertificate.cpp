--- src/network/ssl/qsslcertificate.cpp.orig	2018-05-29 06:56:52 UTC
+++ src/network/ssl/qsslcertificate.cpp
@@ -261,7 +261,11 @@ QByteArray QSslCertificate::version() co
     QMutexLocker lock(QMutexPool::globalInstanceGet(d.data()));
     if (d->versionString.isEmpty() && d->x509) {
         d->versionString =
+#ifdef LIBRESSL_VERSION_NUMBER
+	    QByteArray::number(qlonglong(q_ASN1_INTEGER_get(d->x509->cert_info->version)) + 1);
+#else
 	    QByteArray::number(qlonglong(q_X509_get_version(d->x509)) + 1);
+#endif
     }
     return d->versionString;
 }
@@ -276,7 +280,11 @@ QByteArray QSslCertificate::serialNumber
 {
     QMutexLocker lock(QMutexPool::globalInstanceGet(d.data()));
     if (d->serialNumberString.isEmpty() && d->x509) {
+#ifdef LIBRESSL_VERSION_NUMBER
+	ASN1_INTEGER *serialNumber = d->x509->cert_info->serialNumber;
+#else
         ASN1_INTEGER *serialNumber = q_X509_get_serialNumber(d->x509);
+#endif
         // if we cannot convert to a long, just output the hexadecimal number
         if (serialNumber->length > 4) {
             QByteArray hexString;
@@ -489,7 +497,7 @@ QSslKey QSslCertificate::publicKey() con
     QSslKey key;
 
     key.d->type = QSsl::PublicKey;
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     X509_PUBKEY *xkey = d->x509->cert_info->key;
 #else
     X509_PUBKEY *xkey = q_X509_get_X509_PUBKEY(d->x509);
@@ -498,7 +506,7 @@ QSslKey QSslCertificate::publicKey() con
     Q_ASSERT(pkey);
 
     int key_id;
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     key_id = q_EVP_PKEY_type(pkey->type);
 #else
     key_id = q_EVP_PKEY_base_id(pkey);
@@ -696,7 +704,7 @@ static QMap<QString, QString> _q_mapFrom
         unsigned char *data = 0;
         int size = q_ASN1_STRING_to_UTF8(&data, q_X509_NAME_ENTRY_get_data(e));
         info[QString::fromUtf8(obj)] = QString::fromUtf8((char*)data, size);
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
         q_CRYPTO_free(data);
 #else
         q_OPENSSL_free(data);
