--- src/lfs.c.orig	2017-09-15 22:52:00 UTC
+++ src/lfs.c
@@ -218,7 +218,7 @@ static FILE *check_file (lua_State *L, i
                 return 0;
         } else
                 return *fh;
-#elif LUA_VERSION_NUM >= 502 && LUA_VERSION_NUM <= 503
+#elif LUA_VERSION_NUM >= 502 && LUA_VERSION_NUM <= 504
         luaL_Stream *fh = (luaL_Stream *)luaL_checkudata (L, idx, "FILE*");
         if (fh->closef == 0 || fh->f == NULL) {
                 luaL_error (L, "%s: closed file", funcname);
