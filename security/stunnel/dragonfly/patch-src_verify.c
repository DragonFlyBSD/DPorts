--- src/verify.c.orig	2017-03-26 20:25:00 UTC
+++ src/verify.c
@@ -178,14 +178,14 @@ NOEXPORT void auth_warnings(SERVICE_OPTI
     if(section->option.verify_peer) /* verify_peer does not depend on PKI */
         return;
     if(section->option.verify_chain) {
-#if OPENSSL_VERSION_NUMBER>=0x10002000L
+#if OPENSSL_VERSION_NUMBER>=0x10002000L && !defined(LIBRESSL_VERSION_NUMBER)
         if(section->check_email || section->check_host || section->check_ip)
             return;
 #endif /* OPENSSL_VERSION_NUMBER>=0x10002000L */
         s_log(LOG_WARNING,
             "Service [%s] uses \"verifyChain\" without subject checks",
             section->servname);
-#if OPENSSL_VERSION_NUMBER<0x10002000L
+#if OPENSSL_VERSION_NUMBER<0x10002000L || defined(LIBRESSL_VERSION_NUMBER)
         s_log(LOG_WARNING,
             "Rebuild your stunnel against OpenSSL version 1.0.2 or higher");
 #endif /* OPENSSL_VERSION_NUMBER<0x10002000L */
@@ -284,7 +284,7 @@ NOEXPORT int cert_check(CLI *c, X509_STO
     }
 
     if(depth==0) { /* additional peer certificate checks */
-#if OPENSSL_VERSION_NUMBER>=0x10002000L
+#if OPENSSL_VERSION_NUMBER>=0x10002000L && !defined(LIBRESSL_VERSION_NUMBER)
         if(!cert_check_subject(c, callback_ctx))
             return 0; /* reject */
 #endif /* OPENSSL_VERSION_NUMBER>=0x10002000L */
@@ -295,7 +295,7 @@ NOEXPORT int cert_check(CLI *c, X509_STO
     return 1; /* accept */
 }
 
-#if OPENSSL_VERSION_NUMBER>=0x10002000L
+#if OPENSSL_VERSION_NUMBER>=0x10002000L && !defined(LIBRESSL_VERSION_NUMBER)
 NOEXPORT int cert_check_subject(CLI *c, X509_STORE_CTX *callback_ctx) {
     X509 *cert=X509_STORE_CTX_get_current_cert(callback_ctx);
     NAME_LIST *ptr;
@@ -352,7 +352,7 @@ NOEXPORT int cert_check_local(X509_STORE
     cert=X509_STORE_CTX_get_current_cert(callback_ctx);
     subject=X509_get_subject_name(cert);
 
-#if OPENSSL_VERSION_NUMBER<0x10100006L
+#if OPENSSL_VERSION_NUMBER<0x10100006L || defined(LIBRESSL_VERSION_NUMBER)
 #define X509_STORE_CTX_get1_certs X509_STORE_get1_certs
 #endif
     /* modern API allows retrieving multiple matching certificates */
