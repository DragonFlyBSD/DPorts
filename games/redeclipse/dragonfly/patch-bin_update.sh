--- bin/update.sh.orig	2015-03-22 01:34:16.000000000 +0200
+++ bin/update.sh
@@ -30,7 +30,7 @@ redeclipse_update_setup() {
             Linux)
                 REDECLIPSE_TARGET="linux"
                 ;;
-            FreeBSD)
+            FreeBSD|DragonFly)
                 REDECLIPSE_TARGET="bsd"
                 REDECLIPSE_BRANCH="source" # we don't have binaries for bsd yet sorry
                 ;;
