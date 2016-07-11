--- find-systype.sh.orig	1998-05-19 12:15:50.000000000 +0200
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
