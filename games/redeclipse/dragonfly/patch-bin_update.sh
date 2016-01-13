--- bin/update.sh.orig	2015-07-18 05:54:17.000000000 +0300
+++ bin/update.sh
@@ -34,7 +34,7 @@ redeclipse_update_setup() {
             Darwin)
                 REDECLIPSE_TARGET="macosx"
                 ;;
-            FreeBSD)
+            FreeBSD|DragonFly)
                 REDECLIPSE_TARGET="bsd"
                 REDECLIPSE_BRANCH="source" # we don't have binaries for bsd yet sorry
                 ;;
