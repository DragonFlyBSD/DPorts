--- launch_tcpcryptd.sh.orig	2014-09-11 02:22:26.000000000 +0300
+++ launch_tcpcryptd.sh
@@ -146,7 +146,7 @@ case "$OSNAME" in
         start_tcpcryptd
         unset_iptables
         ;;
-    FreeBSD|Darwin)
+    FreeBSD|Darwin|DragonFly)
         check_existing_tcpcryptd
         check_root
         init_jail
