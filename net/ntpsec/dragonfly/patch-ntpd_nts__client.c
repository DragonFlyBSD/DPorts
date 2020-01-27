--- ntpd/nts_client.c.orig	2019-11-18 00:23:32 UTC
+++ ntpd/nts_client.c
@@ -335,7 +335,7 @@ void set_hostname(SSL *ssl, const char *
 	}
 
 // https://wiki.openssl.org/index.php/Hostname_validation
-#if (OPENSSL_VERSION_NUMBER > 0x1010000fL)
+#if (OPENSSL_VERSION_NUMBER > 0x1010000fL) && !defined(LIBRESSL_VERSION_NUMBER)
 	SSL_set_hostflags(ssl, X509_CHECK_FLAG_NO_WILDCARDS);
 	SSL_set1_host(ssl, host);
 	msyslog(LOG_DEBUG, "NTSc: set cert host: %s", host);
