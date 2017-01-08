--- cf/pthreads.m4.orig	2016-11-29 03:35:27.000000000 +0200
+++ cf/pthreads.m4
@@ -32,7 +32,7 @@ case "$host" in
 	;;
 *-*-freebsd[[1234]])
     ;;
-*-*-freebsd*)
+*-*-freebsd*|*-*-dragonfly*)
 	native_pthread_support=yes
 	PTHREAD_LIBADD="-pthread"
 	;;
