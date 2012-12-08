--- src/poudriere.d/options.sh.orig	2012-11-14 19:10:09.000000000 +0100
+++ src/poudriere.d/options.sh	2012-11-25 01:15:45.000000000 +0100
@@ -87,8 +87,7 @@
 
 shift $((OPTIND-1))
 
-export PORTSDIR=`porttree_get_base ${PTNAME}`
-[ -d "${PORTSDIR}/ports" ] && PORTSDIR="${PORTSDIR}/ports"
+export PORTSDIR=$(get_portsdir ${PTNAME})
 [ -z "${PORTSDIR}" ] && err 1 "No such ports tree: ${PTNAME}"
 
 if [ $# -eq 0 ]; then 
