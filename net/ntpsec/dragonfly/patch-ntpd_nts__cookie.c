--- ntpd/nts_cookie.c.orig	2019-11-18 00:23:32 UTC
+++ ntpd/nts_cookie.c
@@ -235,7 +235,7 @@ bool nts_make_cookie_key(void) {
 	bool OK = true;
 	memcpy(&K2, &K, sizeof(K2));	/* Push current cookie to old */
 	I2 = I;
-#if (OPENSSL_VERSION_NUMBER > 0x1010100fL)
+#if (OPENSSL_VERSION_NUMBER > 0x1010100fL) && !defined(LIBRESSL_VERSION_NUMBER)
 	OK &= RAND_priv_bytes(K, sizeof(K));
 #else
 	OK &= RAND_bytes(K, sizeof(K));
