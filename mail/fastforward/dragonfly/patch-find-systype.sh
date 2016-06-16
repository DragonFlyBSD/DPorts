--- find-systype.sh.orig	1998-05-19 18:25:42.000000000 +0200
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
