--- find-systype.sh.orig	1999-11-09 09:23:46.000000000 +0200
+++ find-systype.sh
@@ -33,7 +33,7 @@ then
     chip="`sysctl -n hw.model`"
     kern=""
     ;;
-  freebsd)
+  freebsd|DragonFly)
     # see above about bsd 4.4
     oper="$sys-$unamer"
     arch="$unamem"
