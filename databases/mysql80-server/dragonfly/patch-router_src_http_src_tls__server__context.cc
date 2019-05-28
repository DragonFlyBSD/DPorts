--- router/src/http/src/tls_server_context.cc.orig	2019-04-13 11:46:31 UTC
+++ router/src/http/src/tls_server_context.cc
@@ -162,7 +162,7 @@ void TlsServerContext::init_tmp_dh(const
     }
 
   } else {
-#if OPENSSL_VERSION_NUMBER >= ROUTER_OPENSSL_VERSION(1, 1, 0)
+#if OPENSSL_VERSION_NUMBER >= ROUTER_OPENSSL_VERSION(1, 1, 0) && !defined(LIBRESSL_VERSION_NUMBER)
     dh2048.reset(DH_get_2048_256());
 #else
     /*
