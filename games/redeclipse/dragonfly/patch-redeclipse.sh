--- redeclipse.sh.orig	2015-07-18 05:54:17.000000000 +0300
+++ redeclipse.sh
@@ -33,7 +33,7 @@ redeclipse_setup() {
                 REDECLIPSE_ARCH="redeclipse.app/Contents/MacOS"
                 REDECLIPSE_MAKE="./src/osxbuild.sh all install"
 		;;
-            FreeBSD)
+            FreeBSD|DragonFly)
                 REDECLIPSE_SUFFIX="_bsd"
                 REDECLIPSE_TARGET="bsd"
                 REDECLIPSE_BRANCH="source" # we don't have binaries for bsd yet sorry
