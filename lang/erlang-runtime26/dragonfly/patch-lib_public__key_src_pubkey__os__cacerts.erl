--- lib/public_key/src/pubkey_os_cacerts.erl.orig	2024-08-27 13:45:02.213616000 +0200
+++ lib/public_key/src/pubkey_os_cacerts.erl	2024-08-27 13:47:04.105731000 +0200
@@ -52,6 +52,8 @@ load() ->
             load(bsd_paths(), undefined);
         {unix, freebsd} ->
             load(bsd_paths(), undefined);
+        {unix, dragonfly} ->
+            load(bsd_paths(), undefined);
         {unix, netbsd} ->
             load(bsd_paths(), undefined);
         {unix, sunos} ->
