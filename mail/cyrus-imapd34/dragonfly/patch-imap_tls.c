--- imap/tls.c.intermediate	2020-12-07 07:31:14.000000000 +0000
+++ imap/tls.c
@@ -800,7 +800,7 @@ EXPORTED int     tls_init_serverengine(c
     const char *tls_versions = config_getstring(IMAPOPT_TLS_VERSIONS);
 
     if (strstr(tls_versions, "tls1_3") == NULL) {
-#if (OPENSSL_VERSION_NUMBER >= 0x1010100fL)
+#if (OPENSSL_VERSION_NUMBER >= 0x1010100fL) && !defined(LIBRESSL_VERSION_NUMBER)
         //syslog(LOG_DEBUG, "TLS server engine: Disabled TLSv1.3");
         off |= SSL_OP_NO_TLSv1_3;
 #else
