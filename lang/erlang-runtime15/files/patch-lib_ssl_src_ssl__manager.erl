
$FreeBSD: head/lang/erlang-runtime15/files/patch-lib_ssl_src_ssl__manager.erl 310183 2013-01-10 14:42:50Z olgeni $

--- lib/ssl/src/ssl_manager.erl.orig
+++ lib/ssl/src/ssl_manager.erl
@@ -145,7 +145,7 @@
     call({new_session_id, Port}).
 
 clean_cert_db(Ref, File) ->
-    erlang:send_after(?CLEAN_CERT_DB, self(), {clean_cert_db, Ref, File}).
+    erlang:send_after(?CLEAN_CERT_DB, get(ssl_manager), {clean_cert_db, Ref, File}).
 
 %%--------------------------------------------------------------------
 -spec register_session(inet:port_number(), #session{}) -> ok.
