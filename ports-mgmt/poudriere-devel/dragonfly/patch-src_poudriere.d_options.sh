--- src/poudriere.d/options.sh.orig	2012-12-01 00:15:48.000000000 +0000
+++ src/poudriere.d/options.sh
@@ -87,8 +87,7 @@ done
 
 shift $((OPTIND-1))
 
-export PORTSDIR=`porttree_get_base ${PTNAME}`
-[ -d "${PORTSDIR}/ports" ] && PORTSDIR="${PORTSDIR}/ports"
+export PORTSDIR=$(get_portsdir ${PTNAME})
 [ -z "${PORTSDIR}" ] && err 1 "No such ports tree: ${PTNAME}"
 
 if [ $# -eq 0 ]; then 
