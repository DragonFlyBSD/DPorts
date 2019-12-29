--- config.c.intermediate	2019-12-29 10:58:46.000000000 +0000
+++ config.c
@@ -575,7 +575,7 @@ parse_service(const char *svc_name)
     pthread_mutex_init(&res->mut, NULL);
     if(svc_name)
         strncpy(res->name, svc_name, KEY_SIZE);
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
     if((res->sessions = lh_TABNODE_new(t_hash, t_cmp)) == NULL)    
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
     if((res->sessions = LHM_lh_new(TABNODE, t)) == NULL)
