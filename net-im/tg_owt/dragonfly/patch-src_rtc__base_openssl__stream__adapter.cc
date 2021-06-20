--- src/rtc_base/openssl_stream_adapter.cc.orig	2021-02-03 11:42:41 UTC
+++ src/rtc_base/openssl_stream_adapter.cc
@@ -17,8 +17,9 @@
 #include <openssl/tls1.h>
 #include <openssl/x509v3.h>
 #ifndef OPENSSL_IS_BORINGSSL
-#include <openssl/dtls1.h>
+/* For LibreSSL the definition of SSL_SESSION is in ssl.h it has to go first */
 #include <openssl/ssl.h>
+#include <openssl/dtls1.h>
 #endif
 
 #include <atomic>
@@ -418,8 +419,14 @@ SSLProtocolVersion OpenSSLStreamAdapter:
   if (ssl_mode_ == SSL_MODE_DTLS) {
     if (ssl_version == DTLS1_VERSION) {
       return SSL_PROTOCOL_DTLS_10;
+      /*
+       * LibreSSL does not support DTLS 1.2 yet:
+       * https://github.com/libressl-portable/portable/issues/380
+       */
+#ifndef LIBRESSL_VERSION_NUMBER
     } else if (ssl_version == DTLS1_2_VERSION) {
       return SSL_PROTOCOL_DTLS_12;
+#endif
     }
   } else {
     if (ssl_version == TLS1_VERSION) {
@@ -1012,6 +1019,7 @@ SSL_CTX* OpenSSLStreamAdapter::SetupSSLC
 #else
   SSL_CTX* ctx =
       SSL_CTX_new(ssl_mode_ == SSL_MODE_DTLS ? DTLS_method() : TLS_method());
+  int sslmin, sslmax;
 #endif
   if (ctx == nullptr) {
     return nullptr;
@@ -1020,31 +1028,44 @@ SSL_CTX* OpenSSLStreamAdapter::SetupSSLC
   if (support_legacy_tls_protocols_flag_) {
     // TODO(https://bugs.webrtc.org/10261): Completely remove this branch in
     // M84.
-    SSL_CTX_set_min_proto_version(
-        ctx, ssl_mode_ == SSL_MODE_DTLS ? DTLS1_VERSION : TLS1_VERSION);
+    sslmin = ssl_mode_ == SSL_MODE_DTLS ? DTLS1_VERSION : TLS1_VERSION;
     switch (ssl_max_version_) {
       case SSL_PROTOCOL_TLS_10:
-        SSL_CTX_set_max_proto_version(
-            ctx, ssl_mode_ == SSL_MODE_DTLS ? DTLS1_VERSION : TLS1_VERSION);
+	sslmax = ssl_mode_ == SSL_MODE_DTLS ? DTLS1_VERSION : TLS1_VERSION;
         break;
       case SSL_PROTOCOL_TLS_11:
-        SSL_CTX_set_max_proto_version(
-            ctx, ssl_mode_ == SSL_MODE_DTLS ? DTLS1_VERSION : TLS1_1_VERSION);
+	sslmax = ssl_mode_ == SSL_MODE_DTLS ? DTLS1_VERSION : TLS1_1_VERSION;
         break;
       case SSL_PROTOCOL_TLS_12:
       default:
-        SSL_CTX_set_max_proto_version(
-            ctx, ssl_mode_ == SSL_MODE_DTLS ? DTLS1_2_VERSION : TLS1_2_VERSION);
+	/* LibreSSL does not support DTLS12 */
+#ifndef LIBRESSL_VERSION_NUMBER
+	sslmax = ssl_mode_ == SSL_MODE_DTLS ? DTLS1_2_VERSION : TLS1_2_VERSION;
+#else
+	/* We disallow DTLS1.2 in LibreSSL by returning a null ctx */
+	RTC_LOG(LS_ERROR) << "LibreSSL does not support DTLS1.2";
+	SSL_CTX_free(ctx);
+	return nullptr;
+#endif
         break;
     }
   } else {
+
+#ifndef LIBRESSL_VERSION_NUMBER
     // TODO(https://bugs.webrtc.org/10261): Make this the default in M84.
-    SSL_CTX_set_min_proto_version(
-        ctx, ssl_mode_ == SSL_MODE_DTLS ? DTLS1_2_VERSION : TLS1_2_VERSION);
-    SSL_CTX_set_max_proto_version(
-        ctx, ssl_mode_ == SSL_MODE_DTLS ? DTLS1_2_VERSION : TLS1_2_VERSION);
+    sslmin = ssl_mode_ == SSL_MODE_DTLS ? DTLS1_2_VERSION : TLS1_2_VERSION;
+    sslmax = ssl_mode_ == SSL_MODE_DTLS ? DTLS1_2_VERSION : TLS1_2_VERSION;
+#else
+    /* We disallow DTLS1.2 in LibreSSL by returning a null ctx */
+    RTC_LOG(LS_ERROR) << "LibreSSL does not support DTLS1.2";
+    SSL_CTX_free(ctx);
+    return nullptr;
+#endif
   }
 
+  SSL_CTX_set_min_proto_version(ctx, sslmin);
+  SSL_CTX_set_max_proto_version(ctx, sslmax);
+
 #ifdef OPENSSL_IS_BORINGSSL
   // SSL_CTX_set_current_time_cb is only supported in BoringSSL.
   if (g_use_time_callback_for_testing) {
