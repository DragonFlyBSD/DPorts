--- find-systype.sh.orig	1999-03-14 20:51:05.000000000 +0100
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
