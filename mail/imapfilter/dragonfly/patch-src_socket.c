--- src/socket.c.orig	2019-11-22 22:07:11 UTC
+++ src/socket.c
@@ -143,7 +143,7 @@ open_secure_connection(session *ssn)
 		goto fail;
 
 	if (get_option_boolean("certificates")) {
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 		SSL_set_hostflags(ssn->sslconn,
 		    X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS);
 		if (!SSL_set1_host(ssn->sslconn, ssn->server)) {
