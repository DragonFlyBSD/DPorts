--- find-systype.sh.orig	1998-08-30 23:39:27.000000000 +0200
+++ find-systype.sh
@@ -32,7 +32,7 @@ then
     chip="`sysctl -n hw.model`"
     kern=""
     ;;
-  freebsd)
+  freebsd|dragonfly)
     # see above about bsd 4.4
     oper="$sys-$unamer"
     arch="$unamem"
