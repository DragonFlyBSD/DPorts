--- ntpd/nts_client.c.orig	2019-07-11 03:52:58 UTC
+++ ntpd/nts_client.c
@@ -324,7 +324,7 @@ void set_hostname(SSL *ssl, const char *
 #if (OPENSSL_VERSION_NUMBER > 0x1010000fL)
   SSL_set1_host(ssl, host);
   msyslog(LOG_DEBUG, "NTSc: set cert host: %s", host);
-#elif (OPENSSL_VERSION_NUMBER > 0x1000200fL)
+#elif (OPENSSL_VERSION_NUMBER > 0x1000200fL) && !defined(LIBRESSL_VERSION_NUMBER)
 {
   X509_VERIFY_PARAM *param = SSL_get0_param(ssl);
   if (1 != X509_VERIFY_PARAM_set1_host(param, host, strlen(host))) {
@@ -368,7 +368,7 @@ bool check_certificate(SSL *ssl, struct
         return false;
     }
   }
-#if (OPENSSL_VERSION_NUMBER > 0x1010000fL)
+#if (OPENSSL_VERSION_NUMBER > 0x1010000fL) && !defined(LIBRESSL_VERSION_NUMBER)
   msyslog(LOG_DEBUG, "NTSc: matched cert host: %s", SSL_get0_peername(ssl));
 #endif
   return true;
