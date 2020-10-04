--- plugins/qca-ossl/qca-ossl.cpp.orig	2020-10-04 10:35:07 UTC
+++ plugins/qca-ossl/qca-ossl.cpp
@@ -41,7 +41,9 @@
 #include <openssl/pkcs12.h>
 #include <openssl/ssl.h>
 
+#ifndef LIBRESSL_VERSION_NUMBER
 #include <openssl/kdf.h>
+#endif
 
 #ifndef RSA_F_RSA_OSSL_PRIVATE_DECRYPT
 #define RSA_F_RSA_OSSL_PRIVATE_DECRYPT RSA_F_RSA_EAY_PRIVATE_DECRYPT
@@ -5025,7 +5027,13 @@ public:
 		case TLS::TLS_v1:
 			ctx = SSL_CTX_new(TLS_client_method());
 			SSL_CTX_set_min_proto_version(ctx, TLS1_VERSION);
+#ifdef TLS1_3_VERSION
+			// Use TLSv1.3 if it's available, otherwise use 1.2
+			// as the max proto version
 			SSL_CTX_set_max_proto_version(ctx, TLS1_3_VERSION);
+#else
+			SSL_CTX_set_max_proto_version(ctx, TLS1_2_VERSION);
+#endif
 			break;
 		case TLS::DTLS_v1:
 		default:
@@ -5046,7 +5054,11 @@ public:
 		QStringList cipherList;
 		for(int i = 0; i < sk_SSL_CIPHER_num(sk); ++i) {
 			const SSL_CIPHER *thisCipher = sk_SSL_CIPHER_value(sk, i);
+#ifdef LIBRESSL_VERSION_NUMBER
+			cipherList += QString::fromLatin1(SSL_CIPHER_get_name(thisCipher));
+#else
 			cipherList += QString::fromLatin1(SSL_CIPHER_standard_name(thisCipher));
+#endif
 		}
 		sk_SSL_CIPHER_free(sk);
 
@@ -5439,7 +5451,11 @@ public:
 			sessInfo.version = TLS::TLS_v1;
 		}
 
+#ifdef LIBRESSL_VERSION_NUMBER
+		sessInfo.cipherSuite = QString::fromLatin1(SSL_CIPHER_get_name(SSL_get_current_cipher(ssl)));
+#else
 		sessInfo.cipherSuite = QString::fromLatin1(SSL_CIPHER_standard_name(SSL_get_current_cipher(ssl)));
+#endif
 
 		sessInfo.cipherMaxBits = SSL_get_cipher_bits(ssl, &(sessInfo.cipherBits));
 
@@ -6786,7 +6802,9 @@ public:
 #endif
 		list += QStringLiteral("pbkdf1(sha1)");
 		list += QStringLiteral("pbkdf2(sha1)");
+#ifndef LIBRESSL_VERSION_NUMBER
 		list += QStringLiteral("hkdf(sha256)");
+#endif
 		list += QStringLiteral("pkey");
 		list += QStringLiteral("dlgroup");
 		list += QStringLiteral("rsa");
@@ -6855,8 +6873,10 @@ public:
 #endif
 		else if ( type == QLatin1String("pbkdf2(sha1)") )
 			return new opensslPbkdf2Context( this, type );
+#ifndef LIBRESSL_VERSION_NUMBER
 		else if ( type == QLatin1String("hkdf(sha256)") )
 			return new opensslHkdfContext( this, type );
+#endif
 		else if ( type == QLatin1String("hmac(md5)") )
 			return new opensslHMACContext( EVP_md5(), this, type );
 		else if ( type == QLatin1String("hmac(sha1)") )
