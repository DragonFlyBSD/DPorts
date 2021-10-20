Disable few DH lua methods, LibreSSL does not have:
 DH_get0_p(), DH_get0_pub_key(), DH_get0_priv_key()

--- src/lua_crypto.c.intermediate	2021-03-10 07:14:35.000000000 +0000
+++ src/lua_crypto.c
@@ -825,6 +825,7 @@ static int dh_tostring(lua_State *L) {
   return 1;
 }
 
+#if !defined(LIBRESSL_VERSION_NUMBER)
 static int dh_get_prime(lua_State *L) {
   apr_size_t len;
   unsigned char *s;
@@ -837,7 +838,9 @@ static int dh_get_prime(lua_State *L) {
   apr_pool_destroy(pool);
   return 1;
 }
+#endif
 
+#if !defined(LIBRESSL_VERSION_NUMBER)
 static int dh_get_priv_key(lua_State *L) {
   apr_size_t len;
   unsigned char *s;
@@ -850,7 +853,9 @@ static int dh_get_priv_key(lua_State *L)
   apr_pool_destroy(pool);
   return 1;
 }
+#endif
 
+#if !defined(LIBRESSL_VERSION_NUMBER)
 static int dh_get_pub_key(lua_State *L) {
   apr_size_t len;
   unsigned char *s;
@@ -863,6 +868,7 @@ static int dh_get_pub_key(lua_State *L)
   apr_pool_destroy(pool);
   return 1;
 }
+#endif
 
 static int dh_gc(lua_State *L) {
   DH *dh = dh_pget(L, 1);
@@ -998,9 +1004,11 @@ static void create_metatables (lua_State
     { "__gc", dh_gc },
     { "clone", dh_clone },
     { "tostring", dh_tostring },
+#if !defined(LIBRESSL_VERSION_NUMBER)
     { "get_prime", dh_get_prime },
     { "get_priv_key", dh_get_priv_key },
     { "get_pub_key", dh_get_pub_key },
+#endif
     {NULL, NULL},
   };
 
