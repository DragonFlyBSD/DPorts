--- src/network/ssl/qsslsocket_openssl.cpp.orig	2018-05-29 06:56:52 UTC
+++ src/network/ssl/qsslsocket_openssl.cpp
@@ -93,7 +93,7 @@ bool QSslSocketPrivate::s_libraryLoaded
 bool QSslSocketPrivate::s_loadedCiphersAndCerts = false;
 bool QSslSocketPrivate::s_loadRootCertsOnDemand = false;
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 /* \internal
 
     From OpenSSL's thread(3) manual page:
@@ -225,7 +225,7 @@ QSslCipher QSslSocketBackendPrivate::QSs
             ciph.d->encryptionMethod = descriptionList.at(4).mid(4);
         ciph.d->exportable = (descriptionList.size() > 6 && descriptionList.at(6) == QLatin1String("export"));
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
         ciph.d->bits = cipher->strength_bits;
         ciph.d->supportedBits = cipher->alg_bits;
 #else
@@ -510,7 +510,7 @@ void QSslSocketBackendPrivate::destroySs
 */
 void QSslSocketPrivate::deinitialize()
 {
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     q_CRYPTO_set_id_callback(0);
     q_CRYPTO_set_locking_callback(0);
 #endif
@@ -534,14 +534,14 @@ bool QSslSocketPrivate::ensureLibraryLoa
         return false;
 
     // Check if the library itself needs to be initialized.
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
     QMutexLocker locker(openssl_locks()->initLock());
 #endif
     if (!s_libraryLoaded) {
         s_libraryLoaded = true;
 
         // Initialize OpenSSL.
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
         q_CRYPTO_set_id_callback(id_function);
         q_CRYPTO_set_locking_callback(locking_function);
 #endif
@@ -583,7 +583,7 @@ bool QSslSocketPrivate::ensureLibraryLoa
 
 void QSslSocketPrivate::ensureCiphersAndCertsLoaded()
 {
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
   QMutexLocker locker(openssl_locks()->initLock());
 #endif
     if (s_loadedCiphersAndCerts)
@@ -678,7 +678,7 @@ void QSslSocketPrivate::resetDefaultCiph
     for (int i = 0; i < q_sk_SSL_CIPHER_num(supportedCiphers); ++i) {
         if (SSL_CIPHER *cipher = q_sk_SSL_CIPHER_value(supportedCiphers, i)) {
 
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
 	  if (cipher->valid) {
 #endif
                 QSslCipher ciph = QSslSocketBackendPrivate::QSslCipher_from_SSL_CIPHER(cipher);
@@ -686,7 +686,7 @@ void QSslSocketPrivate::resetDefaultCiph
                     if (!ciph.name().toLower().startsWith(QLatin1String("adh")))
                         ciphers << ciph;
                 }
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
             }
 #endif
         }
