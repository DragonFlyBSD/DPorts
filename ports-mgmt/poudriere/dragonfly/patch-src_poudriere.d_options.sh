--- src/poudriere.d/options.sh.orig	2012-10-15 18:18:18.000000000 +0200
+++ src/poudriere.d/options.sh	2012-11-21 00:19:38.000000000 +0100
@@ -79,8 +79,7 @@
 
 shift $((OPTIND-1))
 
-export PORTSDIR=`port_get_base ${PTNAME}`
-[ -d "${PORTSDIR}/ports" ] && PORTSDIR="${PORTSDIR}/ports"
+export PORTSDIR=$(get_portsdir ${PTNAME})
 [ -z "${PORTSDIR}" ] && err 1 "No such ports tree: ${PTNAME}"
 
 if [ $# -eq 0 ]; then 
