--- redeclipse.sh.orig	2015-03-22 01:34:16.000000000 +0200
+++ redeclipse.sh
@@ -21,7 +21,7 @@ redeclipse_setup() {
                 REDECLIPSE_SUFFIX="_linux"
                 REDECLIPSE_TARGET="linux"
                 ;;
-            FreeBSD)
+            FreeBSD|DragonFly)
                 REDECLIPSE_SUFFIX="_bsd"
                 REDECLIPSE_TARGET="bsd"
                 REDECLIPSE_BRANCH="source" # we don't have binaries for bsd yet sorry
