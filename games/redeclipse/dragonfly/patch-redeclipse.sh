--- redeclipse.sh.orig	2019-12-19 21:18:32 UTC
+++ redeclipse.sh
@@ -27,7 +27,7 @@ redeclipse_setup() {
 		        REDECLIPSE_TARGET="macos"
                 REDECLIPSE_ARCH="redeclipse.app/Contents/MacOS"
                 ;;
-            FreeBSD)
+            FreeBSD|DragonFly)
                 REDECLIPSE_SUFFIX="_bsd"
                 REDECLIPSE_TARGET="bsd"
                 ;;
@@ -75,7 +75,7 @@ redeclipse_runit() {
         export REDECLIPSE_PWD
         cd "${REDECLIPSE_PATH}" || return 1
         case "${REDECLIPSE_SYSTEM}" in
-            Linux|FreeBSD)
+            Linux|FreeBSD|DragonFly)
                 export LD_LIBRARY_PATH="${REDECLIPSE_PATH}/bin/${REDECLIPSE_ARCH}:${LD_LIBRARY_PATH}"
                 ;;
             Darwin)
