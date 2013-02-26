--- src/poudriere.d/bulk.sh.orig	2012-12-01 00:15:48.000000000 +0000
+++ src/poudriere.d/bulk.sh
@@ -6,16 +6,17 @@ usage() {
 
 Parameters:
     -f file     -- Give the list of ports to build
+    -x          -- List all failed ports in last or ongoing build
 
 Options:
     -c          -- Clean the previous built binary packages
     -C          -- Clean previous packages for the given list to build
-    -D          -- Debug mode, dislay more information
     -t          -- Add some testings to package building
     -s          -- Skip sanity
     -J n        -- Run n jobs in parallel
     -j name     -- Run only on the given jail
     -p tree     -- Specify on which ports tree the bulk will be done
+    -r		-- Execute pkg repo command when bulk completes
     -v          -- Be verbose; show more information. Use twice to enable debug output.
     -w          -- Save WRKDIR on failed builds
     -z set      -- Specify which SET to use
@@ -24,6 +25,15 @@ Options:
 	exit 1
 }
 
+list_failures() {
+	local FLIST=$(log_path)/last_run.failed
+	if [ -f ${FLIST} ]; then
+	    cat ${FLIST}
+	else
+	    msg "There are no logged failures."	
+	fi
+}
+
 SCRIPTPATH=`realpath $0`
 SCRIPTPREFIX=`dirname ${SCRIPTPATH}`
 PTNAME="default"
@@ -31,12 +41,14 @@ SKIPSANITY=0
 SETNAME=""
 CLEAN=0
 CLEAN_LISTED=0
+EXEC_REPO=0
+LISTFAIL=0
 ALL=0
 . ${SCRIPTPREFIX}/common.sh
 
 [ $# -eq 0 ] && usage
 
-while getopts "f:j:J:Ccn:p:tsvwz:a" FLAG; do
+while getopts "f:j:J:p:tsvwz:arxcC" FLAG; do
 	case "${FLAG}" in
 		t)
 			export PORTTESTING=1
@@ -61,6 +73,9 @@ while getopts "f:j:J:Ccn:p:tsvwz:a" FLAG
 		p)
 			PTNAME=${OPTARG}
 			;;
+		r)
+			EXEC_REPO=1
+			;;
 		s)
 			SKIPSANITY=1
 			;;
@@ -77,6 +92,9 @@ while getopts "f:j:J:Ccn:p:tsvwz:a" FLAG
 		v)
 			VERBOSE=$((${VERBOSE:-0} + 1))
 			;;
+		x)
+			LISTFAIL=1
+			;;
 		*)
 			usage
 			;;
@@ -85,6 +103,7 @@ done
 
 shift $((OPTIND-1))
 
+if [ ${LISTFAIL} -eq 0 ]; then
 if [ $# -eq 0 ]; then
 	[ -n "${LISTPKGS}" -o ${ALL} -eq 1 ] || err 1 "No packages specified"
 	[ ${ALL} -eq 1 -o -f "${LISTPKGS}" ] || err 1 "No such list of packages: ${LISTPKGS}"
@@ -93,6 +112,7 @@ else
 	[ -z "${LISTPKGS}" ] || err 1 "command line arguments and list of ports cannot be used at the same time"
 	LISTPORTS="$@"
 fi
+fi
 
 export SKIPSANITY
 
@@ -111,12 +131,28 @@ fi
 JAILFS=`jail_get_fs ${JAILNAME}`
 JAILMNT=`jail_get_base ${JAILNAME}`
 
+check_jobs
+
 export POUDRIERE_BUILD_TYPE=bulk
 
+if [ ${LISTFAIL} -eq 1 ]; then
+	export LOGS=${POUDRIERE_DATA}/logs
+	list_failures
+	exit 0
+fi
+
 jail_start
 
 prepare_jail
 
+if [ -z "${PORTTESTING}" -a -z "${ALLOW_MAKE_JOBS}" ]; then
+	echo "DISABLE_MAKE_JOBS=yes" >> ${JAILMNT}/etc/make.conf
+fi
+
+if [ -n "${JOBS_LIMIT}" ]; then
+	echo "MAKE_JOBS_NUMBER=${JOBS_LIMIT}" >> ${JAILMNT}/etc/make.conf
+fi
+
 LOGD=`log_path`
 if [ -d ${LOGD} -a ${CLEAN} -eq 1 ]; then
 	msg "Cleaning up old logs"
@@ -125,13 +161,9 @@ fi
 
 prepare_ports
 
-zset status "building:"
-
-if [ -z "${PORTTESTING}" -a -z "${ALLOW_MAKE_JOBS}" ]; then
-	echo "DISABLE_MAKE_JOBS=yes" >> ${JAILMNT}/etc/make.conf
-fi
+firehook bulk_build_start "${JAILNAME}" "${PTNAME}" `zget stats_queued`
 
-zfs snapshot ${JAILFS}@prepkg
+zset status "building:"
 
 parallel_build || : # Ignore errors as they are handled below
 
@@ -142,7 +174,7 @@ build_stats 0
 failed=$(cat ${JAILMNT}/poudriere/ports.failed | awk '{print $1 ":" $2 }' | xargs echo)
 built=$(cat ${JAILMNT}/poudriere/ports.built | xargs echo)
 ignored=$(cat ${JAILMNT}/poudriere/ports.ignored | awk '{print $1}' | xargs echo)
-skipped=$(cat ${JAILMNT}/poudriere/ports.skipped | awk '{print $1}' | xargs echo)
+skipped=$(cat ${JAILMNT}/poudriere/ports.skipped | awk '{print $1}' | sort -u | xargs echo)
 nbfailed=$(zget stats_failed)
 nbignored=$(zget stats_ignored)
 nbskipped=$(zget stats_skipped)
@@ -159,20 +191,22 @@ if [ $nbbuilt -eq 0 ]; then
 		msg "No package built, no need to update INDEX"
 	fi
 elif [ $PKGNG -eq 1 ]; then
-	if [ -n "${NO_RESTRICTED}" ]; then
-		msg "Cleaning restricted packages"
-		injail make -C /usr/ports -j ${PARALLEL_JOBS} clean-restricted
-	fi
-	msg "Creating pkgng repository"
-	zset status "pkgrepo:"
-	injail tar xf /usr/ports/packages/Latest/pkg.txz -C /
-	injail rm -f /usr/ports/packages/repo.txz /usr/ports/packages/repo.sqlite
-	if [ -n "${PKG_REPO_SIGNING_KEY}" -a -f "${PKG_REPO_SIGNING_KEY}" ]; then
-		install -m 0400 ${PKG_REPO_SIGNING_KEY} ${JAILMNT}/tmp/repo.key
-		injail pkg-static repo /usr/ports/packages/ /tmp/repo.key
-		rm -f ${JAILMNT}/tmp/repo.key
-	else
-		injail pkg-static repo /usr/ports/packages/
+	if [ ${EXEC_REPO} -eq 1 ]; then
+		if [ -n "${NO_RESTRICTED}" ]; then
+			msg "Cleaning restricted packages"
+			injail make -C /usr/ports -j ${PARALLEL_JOBS} clean-restricted
+		fi
+		msg "Creating pkgng repository"
+		zset status "pkgrepo:"
+		injail tar xf ${STD_PACKAGES}/Latest/pkg.txz -C /
+		injail rm -f ${STD_PACKAGES}/repo.txz ${STD_PACKAGES}/repo.sqlite
+		if [ -n "${PKG_REPO_SIGNING_KEY}" -a -f "${PKG_REPO_SIGNING_KEY}" ]; then
+			install -m 0400 ${PKG_REPO_SIGNING_KEY} ${JAILMNT}/tmp/repo.key
+			injail pkg-static repo ${STD_PACKAGES}/ /tmp/repo.key
+			rm -f ${JAILMNT}/tmp/repo.key
+		else
+			injail pkg-static repo ${STD_PACKAGES}/
+		fi
 	fi
 else
 	if [ -n "${NO_RESTRICTED}" ]; then
@@ -319,4 +353,7 @@ msg "$nbbuilt packages built, $nbfailed
 
 set +e
 
+firehook bulk_build_ended "${JAILNAME}" "${PTNAME}" "${nbbuilt}" \
+	"${nbfailed}" "${nbignored}" "${nbskipped}"
+
 exit $((nbfailed + nbskipped))
