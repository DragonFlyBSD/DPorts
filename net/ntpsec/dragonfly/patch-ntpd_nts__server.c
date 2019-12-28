--- ntpd/nts_server.c.orig	2019-07-11 03:52:58 UTC
+++ ntpd/nts_server.c
@@ -118,7 +118,7 @@ bool nts_server_init(void) {
       return false;
     };
 
-#if (OPENSSL_VERSION_NUMBER > 0x1010000fL)
+#if (OPENSSL_VERSION_NUMBER > 0x1010000fL) && !defined(LIBRESSL_VERSION_NUMBER)
     msyslog(LOG_INFO, "NTSs: OpenSSL security level is %d",
         SSL_CTX_get_security_level(server_ctx));
 #endif
