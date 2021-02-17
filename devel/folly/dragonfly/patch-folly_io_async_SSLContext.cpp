--- folly/io/async/SSLContext.cpp.orig	2021-01-11 07:51:05 UTC
+++ folly/io/async/SSLContext.cpp
@@ -777,7 +777,12 @@ void SSLContext::setSessionLifecycleCall
   sessionLifecycleCallbacks_ = std::move(cb);
 }
 
-#if FOLLY_OPENSSL_PREREQ(1, 1, 1)
+//
+// TODO: There is no TLS1.3 in LibreSSL officially yet afaict, and
+// SSL_CTX_set_ciphersuites is only exposed when LIBRESSL_HAS_TLS1_3
+// is defined.
+//
+#if FOLLY_OPENSSL_PREREQ(1, 1, 1) && !defined(LIBRESSL_VERSION_NUMBER)
 void SSLContext::setCiphersuitesOrThrow(const std::string& ciphersuites) {
   auto rc = SSL_CTX_set_ciphersuites(ctx_, ciphersuites.c_str());
   if (rc == 0) {
