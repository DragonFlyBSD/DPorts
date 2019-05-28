LibreSSL compat

--- router/src/http/src/tls_context.cc.orig	2019-04-13 11:46:31 UTC
+++ router/src/http/src/tls_context.cc
@@ -92,7 +92,7 @@ static constexpr int o11x_version(TlsVer
       return TLS1_1_VERSION;
     case TlsVersion::TLS_1_2:
       return TLS1_2_VERSION;
-#if OPENSSL_VERSION_NUMBER >= ROUTER_OPENSSL_VERSION(1, 1, 1)
+#if OPENSSL_VERSION_NUMBER >= ROUTER_OPENSSL_VERSION(1, 1, 1) && !defined(LIBRESSL_VERSION_NUMBER)
     case TlsVersion::TLS_1_3:
       return TLS1_3_VERSION;
 #endif
@@ -171,8 +171,10 @@ TlsVersion TlsContext::min_version() con
       return TlsVersion::TLS_1_1;
     case TLS1_2_VERSION:
       return TlsVersion::TLS_1_2;
+#if !defined(LIBRESSL_VERSION_NUMBER)
     case TLS1_3_VERSION:
       return TlsVersion::TLS_1_3;
+#endif
     case 0:
       return TlsVersion::AUTO;
     default:
