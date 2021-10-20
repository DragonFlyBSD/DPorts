--- src/ssl_sock.c.orig	2020-08-03 13:55:39 UTC
+++ src/ssl_sock.c
@@ -2093,7 +2093,7 @@ static void ssl_sock_switchctx_set(SSL *
 	SSL_set_SSL_CTX(ssl, ctx);
 }
 
-#if (OPENSSL_VERSION_NUMBER >= 0x10101000L) || defined(OPENSSL_IS_BORINGSSL)
+#if ((OPENSSL_VERSION_NUMBER >= 0x10101000L) || defined(OPENSSL_IS_BORINGSSL)) && !defined(LIBRESSL_VERSION_NUMBER)
 
 static int ssl_sock_switchctx_err_cbk(SSL *ssl, int *al, void *priv)
 {
@@ -3920,7 +3920,7 @@ ssl_sock_initial_ctx(struct bind_conf *b
 #ifdef OPENSSL_IS_BORINGSSL
 	SSL_CTX_set_select_certificate_cb(ctx, ssl_sock_switchctx_cbk);
 	SSL_CTX_set_tlsext_servername_callback(ctx, ssl_sock_switchctx_err_cbk);
-#elif (OPENSSL_VERSION_NUMBER >= 0x10101000L)
+#elif (OPENSSL_VERSION_NUMBER >= 0x10101000L) && !defined(LIBRESSL_VERSION_NUMBER)
 	if (bind_conf->ssl_conf.early_data)
 		SSL_CTX_set_options(ctx, SSL_OP_NO_ANTI_REPLAY);
 	SSL_CTX_set_client_hello_cb(ctx, ssl_sock_switchctx_cbk, NULL);
@@ -5148,7 +5148,7 @@ static int ssl_sock_init(struct connecti
 			conn->err_code = CO_ER_SSL_NO_MEM;
 			return -1;
 		}
-#if (OPENSSL_VERSION_NUMBER >= 0x10101000L)
+#if (OPENSSL_VERSION_NUMBER >= 0x10101000L) && !defined(LIBRESSL_VERSION_NUMBER)
 		if (__objt_listener(conn->target)->bind_conf->ssl_conf.early_data)
 			SSL_set_max_early_data(conn->xprt_ctx, global.tune.bufsize - global.tune.maxrewrite);
 #endif
@@ -5211,7 +5211,7 @@ int ssl_sock_handshake(struct connection
 	if (!conn->xprt_ctx)
 		goto out_error;
 
-#if OPENSSL_VERSION_NUMBER >= 0x10101000L
+#if OPENSSL_VERSION_NUMBER >= 0x10101000L && !defined(LIBRESSL_VERSION_NUMBER)
 	/*
 	 * Check if we have early data. If we do, we have to read them
 	 * before SSL_do_handshake() is called, And there's no way to
@@ -5279,7 +5279,7 @@ int ssl_sock_handshake(struct connection
 				if (!errno && conn->flags & CO_FL_WAIT_L4_CONN)
 					conn->flags &= ~CO_FL_WAIT_L4_CONN;
 				if (!conn->err_code) {
-#ifdef OPENSSL_IS_BORINGSSL /* BoringSSL */
+#if defined(OPENSSL_IS_BORINGSSL) || defined(LIBRESSL_VERSION_NUMBER)
 					conn->err_code = CO_ER_SSL_HANDSHAKE;
 #else
 					int empty_handshake;
@@ -5363,11 +5363,11 @@ check_error:
 			if (!errno && conn->flags & CO_FL_WAIT_L4_CONN)
 				conn->flags &= ~CO_FL_WAIT_L4_CONN;
 			if (!conn->err_code) {
-#ifdef OPENSSL_IS_BORINGSSL  /* BoringSSL */
+#if defined(OPENSSL_IS_BORINGSSL) || defined(LIBRESSL_VERSION_NUMBER)
 				conn->err_code = CO_ER_SSL_HANDSHAKE;
 #else
 				int empty_handshake;
-#if (OPENSSL_VERSION_NUMBER >= 0x1010000fL) && !defined(LIBRESSL_VERSION_NUMBER)
+#if (OPENSSL_VERSION_NUMBER >= 0x1010000fL)
 				OSSL_HANDSHAKE_STATE state = SSL_get_state((SSL *)conn->xprt_ctx);
 				empty_handshake = state == TLS_ST_BEFORE;
 #else
@@ -5411,7 +5411,7 @@ check_error:
 			goto out_error;
 		}
 	}
-#if (OPENSSL_VERSION_NUMBER >= 0x10101000L)
+#if (OPENSSL_VERSION_NUMBER >= 0x10101000L) && !defined(LIBRESSL_VERSION_NUMBER)
 	else {
 		/*
 		 * If the server refused the early data, we have to send a
@@ -5530,7 +5530,7 @@ static int ssl_sock_to_buf(struct connec
 			continue;
 		}
 
-#if (OPENSSL_VERSION_NUMBER >= 0x10101000L)
+#if (OPENSSL_VERSION_NUMBER >= 0x10101000L) && !defined(LIBRESSL_VERSION_NUMBER)
 		if (conn->flags & CO_FL_EARLY_SSL_HS) {
 			size_t read_length;
 
@@ -5658,7 +5658,7 @@ static int ssl_sock_from_buf(struct conn
 	 * in which case we accept to do it once again.
 	 */
 	while (buf->o) {
-#if (OPENSSL_VERSION_NUMBER >= 0x10101000L)
+#if (OPENSSL_VERSION_NUMBER >= 0x10101000L) && !defined(LIBRESSL_VERSION_NUMBER)
 		size_t written_data;
 #endif
 
@@ -5677,7 +5677,7 @@ static int ssl_sock_from_buf(struct conn
 			conn->xprt_st |= SSL_SOCK_SEND_UNLIMITED;
 		}
 
-#if (OPENSSL_VERSION_NUMBER >= 0x10101000L)
+#if (OPENSSL_VERSION_NUMBER >= 0x10101000L) && !defined(LIBRESSL_VERSION_NUMBER)
 		if (!SSL_is_init_finished(conn->xprt_ctx) && conn_is_back(conn)) {
 			unsigned int max_early;
 
