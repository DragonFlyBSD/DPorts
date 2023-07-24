--- src/third_party/mozjs-60/gen-config.sh.orig	2022-11-01 18:21:44 UTC
+++ src/third_party/mozjs-60/gen-config.sh
@@ -40,6 +40,9 @@ case "$_Path" in
     "platform/x86_64/freebsd")
         _CONFIG_OPTS="--host=x86_64-freebsd"
 	;;
+    "platform/x86_64/dragonfly")
+        _CONFIG_OPTS="--host=x86_64-dragonfly"
+	;;
     "platform/x86_64/linux")
         _CONFIG_OPTS="--host=x86_64-linux"
 	;;
