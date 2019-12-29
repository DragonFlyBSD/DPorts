--- folly/portability/OpenSSL.cpp.orig	2019-06-17 05:36:48 UTC
+++ folly/portability/OpenSSL.cpp
@@ -22,6 +22,16 @@ namespace folly {
 namespace portability {
 namespace ssl {
 
+#ifdef LIBRESSL_VERSION_NUMBER
+void OPENSSL_cleanup() {
+  folly::ssl::detail::cleanupThreadingLocks();
+  CRYPTO_cleanup_all_ex_data();
+  ERR_free_strings();
+  EVP_cleanup();
+  ERR_clear_error();
+}
+#endif
+
 #ifdef OPENSSL_IS_BORINGSSL
 int SSL_CTX_set1_sigalgs_list(SSL_CTX*, const char*) {
   return 1; // 0 implies error
