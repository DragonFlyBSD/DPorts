--- src/openvpn/ssl_openssl.c.orig	2019-02-20 12:28:23 UTC
+++ src/openvpn/ssl_openssl.c
@@ -459,7 +459,7 @@ tls_ctx_restrict_ciphers_tls13(struct tl
         return;
     }
 
-#if (OPENSSL_VERSION_NUMBER < 0x1010100fL)
+#if (OPENSSL_VERSION_NUMBER < 0x1010100fL) || !defined(TLS1_3_VERSION)
         crypto_msg(M_WARN, "Not compiled with OpenSSL 1.1.1 or higher. "
                        "Ignoring TLS 1.3 only tls-ciphersuites '%s' setting.",
                         ciphers);
@@ -1846,7 +1846,7 @@ show_available_tls_ciphers_list(const ch
         crypto_msg(M_FATAL, "Cannot create SSL_CTX object");
     }
 
-#if (OPENSSL_VERSION_NUMBER >= 0x1010100fL)
+#if (OPENSSL_VERSION_NUMBER >= 0x1010100fL) && defined(TLS1_3_VERSION)
     if (tls13)
     {
         SSL_CTX_set_min_proto_version(tls_ctx.ctx, TLS1_3_VERSION);
