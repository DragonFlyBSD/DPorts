--- sql/mysqld.cc.orig	2020-05-23 20:11:13 UTC
+++ sql/mysqld.cc
@@ -4528,7 +4528,7 @@ static void openssl_lock(int mode, opens
 static int init_ssl()
 {
 #ifdef HAVE_OPENSSL
-#if OPENSSL_VERSION_NUMBER < 0x10100000L
+#if OPENSSL_VERSION_NUMBER < 0x10100000L || defined(LIBRESSL_VERSION_NUMBER)
   CRYPTO_malloc_init();
 #else /* OPENSSL_VERSION_NUMBER < 0x10100000L */
   OPENSSL_malloc_init();
@@ -5485,7 +5485,7 @@ static bool abort_replicated(THD *thd)
   bool ret_code= false;
   if (thd->wsrep_query_state== QUERY_COMMITTING)
   {
-    if (wsrep_debug) WSREP_INFO("aborting replicated trx: %lu", thd->real_id);
+    if (wsrep_debug) WSREP_INFO("aborting replicated trx: %ju", (uintmax_t)thd->real_id);
 
     (void)wsrep_abort_thd(thd, thd, TRUE);
     ret_code= true;
