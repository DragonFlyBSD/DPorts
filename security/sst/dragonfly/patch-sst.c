--- sst.c.intermediate	2019-12-29 10:12:50.000000000 +0000
+++ sst.c
@@ -431,7 +431,7 @@ struct method {
 #if !defined(OPENSSL_NO_DTLS1_METHOD) && OPENSSL_VERSION_NUMBER >= 0x1010000fL
 	{ "dtls1", DTLSv1_method },
 #endif
-#if !defined(OPENSSL_NO_TLS1_2_METHOD) && OPENSSL_VERSION_NUMBER >= 0x1010000fL
+#if !defined(OPENSSL_NO_TLS1_2_METHOD) && OPENSSL_VERSION_NUMBER >= 0x1010000fL && !defined(LIBRESSL_VERSION_NUMBER)
 	{ "dtls1.2", DTLSv1_2_method },
 #endif
 	{ NULL, SSLv23_method }
