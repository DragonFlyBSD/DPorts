LibreSSl does not provide <openssl/kdf.h>

--- plugins/qca-ossl/qca-ossl.cpp.orig	2019-04-24 12:58:14 UTC
+++ plugins/qca-ossl/qca-ossl.cpp
@@ -57,7 +57,7 @@
 	((_STACK*) (1 ? p : (type*)0))
 #endif
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
     #define OSSL_110
 #endif
 
@@ -3826,7 +3826,7 @@ public:
 				p.policies = get_cert_policies(ex);
 		}
 
-#ifdef OSSL_110
+#if defined(OSSL_110) || defined(LIBRESSL_VERSION_NUMBER)
 		const
 #endif
 		ASN1_BIT_STRING *signature;
