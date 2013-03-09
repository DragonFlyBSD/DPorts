--- src/poudriere.d/test_ports.sh.orig	2012-12-01 00:15:48.000000000 +0000
+++ src/poudriere.d/test_ports.sh
@@ -10,11 +10,11 @@ Parameters:
 
 Options:
     -c          -- Run make config for the given port
-    -D          -- Debug mode, dislay more information
     -J n        -- Run n jobs in parallel for dependencies
     -j name     -- Run only inside the given jail
     -n          -- No custom prefix
     -p tree     -- Specify on which portstree we work
+    -s          -- Skip sanity
     -v          -- Be verbose; show more information. Use twice to enable debug output."
 	exit 1
 }
@@ -75,8 +75,8 @@ export SKIPSANITY
 if [ -z ${ORIGIN} ]; then
 	PORTDIRECTORY=`basename ${HOST_PORTDIRECTORY}`
 else
-	HOST_PORTDIRECTORY=`porttree_get_base ${PTNAME}`/ports/${ORIGIN}
-	PORTDIRECTORY="/usr/ports/${ORIGIN}"
+	HOST_PORTDIRECTORY=$(get_portsdir ${PTNAME})/${ORIGIN}
+	PORTDIRECTORY="${PORTSRC}/${ORIGIN}"
 fi
 
 test -z "${JAILNAME}" && err 1 "Don't know on which jail to run please specify -j"
@@ -86,6 +86,8 @@ PKGDIR=${POUDRIERE_DATA}/packages/${JAIL
 JAILFS=`jail_get_fs ${JAILNAME}`
 JAILMNT=`jail_get_base ${JAILNAME}`
 
+check_jobs
+
 export POUDRIERE_BUILD_TYPE=testport
 
 jail_start
@@ -94,17 +96,19 @@ prepare_jail
 
 if [ -z ${ORIGIN} ]; then
 	mkdir -p ${JAILMNT}/${PORTDIRECTORY}
-	mount -t nullfs ${HOST_PORTDIRECTORY} ${JAILMNT}/${PORTDIRECTORY}
+	${NULLMOUNT} ${HOST_PORTDIRECTORY} ${JAILMNT}/${PORTDIRECTORY} || \
+	  err 1 "Failed to null-mount ${HOST_PORTDIRECTORY} to jail"
 fi
 
 LISTPORTS=$(list_deps ${PORTDIRECTORY} )
 prepare_ports
 
-zfs snapshot ${JAILFS}@prepkg
+firehook test_port_start "${JAILNAME}" "${PTNAME}" "${JAILMNT}/${PORTDIRECTORY}" \
+	`zget stats_queued`
 
 if ! POUDRIERE_BUILD_TYPE=bulk parallel_build; then
 	failed=$(cat ${JAILMNT}/poudriere/ports.failed | awk '{print $1 ":" $2 }' | xargs echo)
-	skipped=$(cat ${JAILMNT}/poudriere/ports.skipped | awk '{print $1}' | xargs echo)
+	skipped=$(cat ${JAILMNT}/poudriere/ports.skipped | awk '{print $1}' | sort -u | xargs echo)
 	nbfailed=$(zget stats_failed)
 	nbskipped=$(zget stats_skipped)
 
@@ -119,8 +123,6 @@ fi
 
 zset status "depends:"
 
-zfs destroy -r ${JAILFS}@prepkg
-
 injail make -C ${PORTDIRECTORY} pkg-depends extract-depends \
 	fetch-depends patch-depends build-depends lib-depends
 
@@ -150,7 +152,7 @@ fi
 
 msg "Populating PREFIX"
 mkdir -p ${JAILMNT}${PREFIX}
-injail /usr/sbin/mtree -q -U -f /usr/ports/Templates/BSD.local.dist -d -e -p ${PREFIX} >/dev/null
+injail /usr/sbin/mtree -q -U -f ${PORTSRC}/Templates/BSD.local.dist -d -e -p ${PREFIX} >/dev/null
 
 [ $ZVERSION -lt 28 ] && \
 	find ${JAILMNT}${LOCALBASE}/ -type d | sed "s,^${JAILMNT}${LOCALBASE}/,," | sort > ${JAILMNT}${PREFIX}.PLIST_DIRS.before
@@ -166,7 +168,10 @@ if ! build_port ${PORTDIRECTORY}; then
 	failed_phase=${failed_status%:*}
 
 	save_wrkdir "${PKGNAME}" "${PORTDIRECTORY}" "${failed_phase}" || :
+	firehook port_build_failure "${JAILNAME}" "${PTNAME}" "${JAILMNT}/${PORTDIRECTORY}" "${failed_phase}"
 	exit 1
+else
+	firehook port_build_success "${JAILNAME}" "${PTNAME}" "${JAILMNT}/${PORTDIRECTORY}"
 fi
 
 msg "Installing from package"
@@ -185,4 +190,8 @@ log_stop $(log_path)/${PKGNAME}.log
 cleanup
 set +e
 
+firehook test_port_ended "${JAILNAME}" "${PTNAME}" "${JAILMNT}/${PORTDIRECTORY}" \
+	`zget stats_built` `zget stats_failed` `zget stats_ignored` \
+	`zget stats_skipped` "${build_result}"
+
 exit 0
