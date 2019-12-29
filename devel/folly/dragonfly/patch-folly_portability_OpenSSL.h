--- folly/portability/OpenSSL.h.orig	2019-06-17 05:36:48 UTC
+++ folly/portability/OpenSSL.h
@@ -84,7 +84,7 @@
 #endif
 
 // OpenSSL 1.1.1 and above have TLS 1.3 support
-#if OPENSSL_VERSION_NUMBER >= 0x1010100fL
+#if OPENSSL_VERSION_NUMBER >= 0x1010100fL && !defined(LIBRESSL_VERSION_NUMBER)
 #define FOLLY_OPENSSL_HAS_TLS13 1
 #else
 #define FOLLY_OPENSSL_HAS_TLS13 0
@@ -118,6 +118,18 @@ namespace folly {
 namespace portability {
 namespace ssl {
 
+#ifdef LIBRESSL_VERSION_NUMBER
+static inline int SSL_CTX_set1_sigalgs_list(SSL_CTX*, const char*) {
+  return 1; // 0 implies error
+}
+
+static inline const char* SSL_SESSION_get0_hostname(const SSL_SESSION* s) {
+  return s->tlsext_hostname;
+}
+
+void OPENSSL_cleanup();
+#endif
+
 #ifdef OPENSSL_IS_BORINGSSL
 int SSL_CTX_set1_sigalgs_list(SSL_CTX* ctx, const char* sigalgs_list);
 int TLS1_get_client_version(SSL* s);
