--- libradius/radlib.c.orig	2005-07-05 18:35:32 UTC
+++ libradius/radlib.c
@@ -59,7 +59,7 @@ static int	 put_raw_attr(struct xrad_han
 		    const void *, size_t);
 static int	 split(char *, char *[], int, char *, size_t);
 
-#if !defined(__FreeBSD__) && !defined(__linux__)
+#if !defined(__FreeBSD__) && !defined(__linux__) && !defined(__DragonFly__)
 static char *strsep(char **stringp, const char *delim)
 {
     char *s;
@@ -166,19 +166,19 @@ insert_message_authenticator(struct xrad
 	u_char md[EVP_MAX_MD_SIZE];
 	u_int md_len;
 	const struct xrad_server *srvp;
-	HMAC_CTX ctx;
+	HMAC_CTX *ctx;
 	srvp = &h->servers[srv];
 
 	if (h->authentic_pos != 0) {
-		HMAC_CTX_init(&ctx);
-		HMAC_Init(&ctx, srvp->secret, strlen(srvp->secret), EVP_md5());
-		HMAC_Update(&ctx, &h->request[POS_CODE], POS_AUTH - POS_CODE);
-		HMAC_Update(&ctx, &h->request[POS_AUTH], LEN_AUTH);
-		HMAC_Update(&ctx, &h->request[POS_ATTRS],
+		ctx = HMAC_CTX_new();
+		HMAC_CTX_reset(ctx);
+		HMAC_Init(ctx, srvp->secret, strlen(srvp->secret), EVP_md5());
+		HMAC_Update(ctx, &h->request[POS_CODE], POS_AUTH - POS_CODE);
+		HMAC_Update(ctx, &h->request[POS_AUTH], LEN_AUTH);
+		HMAC_Update(ctx, &h->request[POS_ATTRS],
 		    h->req_len - POS_ATTRS);
-		HMAC_Final(&ctx, md, &md_len);
-		HMAC_CTX_cleanup(&ctx);
-		HMAC_cleanup(&ctx);
+		HMAC_Final(ctx, md, &md_len);
+		HMAC_CTX_free(ctx);
 		memcpy(&h->request[h->authentic_pos + 2], md, md_len);
 	}
 #endif
@@ -197,7 +197,7 @@ is_valid_response(struct xrad_handle *h,
 	const struct xrad_server *srvp;
 	int len;
 #ifdef WITH_SSL
-	HMAC_CTX hctx;
+	HMAC_CTX *hctx;
 	u_char resp[MSGSIZE], md[EVP_MAX_MD_SIZE];
 	int pos, md_len;
 #endif
@@ -244,18 +244,18 @@ is_valid_response(struct xrad_handle *h,
 				/* zero fill the Message-Authenticator */
 				memset(&resp[pos + 2], 0, MD5_DIGEST_LENGTH);
 
-				HMAC_CTX_init(&hctx);
-				HMAC_Init(&hctx, srvp->secret,
+				hctx = HMAC_CTX_new();
+				HMAC_CTX_reset(hctx);
+				HMAC_Init(hctx, srvp->secret,
 				    strlen(srvp->secret), EVP_md5());
-				HMAC_Update(&hctx, &h->response[POS_CODE],
+				HMAC_Update(hctx, &h->response[POS_CODE],
 				    POS_AUTH - POS_CODE);
-				HMAC_Update(&hctx, &h->request[POS_AUTH],
+				HMAC_Update(hctx, &h->request[POS_AUTH],
 				    LEN_AUTH);
-				HMAC_Update(&hctx, &resp[POS_ATTRS],
+				HMAC_Update(hctx, &resp[POS_ATTRS],
 				    h->resp_len - POS_ATTRS);
-				HMAC_Final(&hctx, md, &md_len);
-				HMAC_CTX_cleanup(&hctx);
-				HMAC_cleanup(&hctx);
+				HMAC_Final(hctx, md, &md_len);
+				HMAC_CTX_free(hctx);
 				if (memcmp(md, &h->response[pos + 2],
 				    MD5_DIGEST_LENGTH) != 0)
 					return 0;
@@ -329,7 +329,7 @@ xrad_add_server(struct xrad_handle *h, c
 	srvp = &h->servers[h->num_servers];
 
 	memset(&srvp->addr, 0, sizeof srvp->addr);
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	srvp->addr.sin_len = sizeof srvp->addr;
 #endif
 	srvp->addr.sin_family = AF_INET;
@@ -703,7 +703,7 @@ xrad_init_send_request(struct xrad_handl
 			return -1;
 		}
 		memset(&sin, 0, sizeof sin);
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		sin.sin_len = sizeof sin;
 #endif
 		sin.sin_family = AF_INET;
@@ -776,7 +776,7 @@ xrad_auth_open(void)
 
 	h = (struct xrad_handle *)malloc(sizeof(struct xrad_handle));
 	if (h != NULL) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		srandomdev();
 #else
 		srand(243);
