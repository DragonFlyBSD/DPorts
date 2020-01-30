--- ntpd/nts_server.c.orig	2019-11-18 00:23:32 UTC
+++ ntpd/nts_server.c
@@ -122,7 +122,7 @@ bool nts_server_init(void) {
 		return false;
 	};
 
-#if (OPENSSL_VERSION_NUMBER > 0x1010000fL)
+#if (OPENSSL_VERSION_NUMBER > 0x1010000fL) && !defined(LIBRESSL_VERSION_NUMBER)
 	msyslog(LOG_INFO, "NTSs: OpenSSL security level is %d",
 		SSL_CTX_get_security_level(server_ctx));
 #endif
