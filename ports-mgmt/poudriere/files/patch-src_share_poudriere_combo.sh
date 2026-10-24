--- src/share/poudriere/combo.sh.orig	2014-09-22 12:24:48.000000000 +0000
+++ src/share/poudriere/combo.sh
@@ -46,6 +46,7 @@ INFO=0
 LISTFAIL=0
 DISMOUNT=0
 DEPCHECK=0
+RMLOGS=0
 
 SCRIPTPATH=`realpath $0`
 SCRIPTPREFIX=`dirname ${SCRIPTPATH}`
