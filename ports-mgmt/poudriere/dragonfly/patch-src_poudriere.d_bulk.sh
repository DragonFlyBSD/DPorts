--- src/poudriere.d/bulk.sh.orig	2012-12-01 01:15:48.000000000 +0100
+++ src/poudriere.d/bulk.sh	2012-12-21 02:28:34.000000000 +0100
@@ -10,7 +10,6 @@
 Options:
     -c          -- Clean the previous built binary packages
     -C          -- Clean previous packages for the given list to build
-    -D          -- Debug mode, dislay more information
     -t          -- Add some testings to package building
     -s          -- Skip sanity
     -J n        -- Run n jobs in parallel
@@ -94,6 +93,8 @@
 	LISTPORTS="$@"
 fi
 
+check_jobs
+
 export SKIPSANITY
 
 STATUS=0 # out of jail #
@@ -123,16 +124,18 @@
 	rm -f ${LOGD}/*.log 2>/dev/null
 fi
 
+zsnap ${JAILFS}@prepkg
+
 prepare_ports
 
+firehook bulk_build_start "${JAILNAME}" "${PTNAME}" `zget stats_queued`
+
 zset status "building:"
 
 if [ -z "${PORTTESTING}" -a -z "${ALLOW_MAKE_JOBS}" ]; then
 	echo "DISABLE_MAKE_JOBS=yes" >> ${JAILMNT}/etc/make.conf
 fi
 
-zfs snapshot ${JAILFS}@prepkg
-
 parallel_build || : # Ignore errors as they are handled below
 
 zset status "done:"
@@ -142,7 +145,7 @@
 failed=$(cat ${JAILMNT}/poudriere/ports.failed | awk '{print $1 ":" $2 }' | xargs echo)
 built=$(cat ${JAILMNT}/poudriere/ports.built | xargs echo)
 ignored=$(cat ${JAILMNT}/poudriere/ports.ignored | awk '{print $1}' | xargs echo)
-skipped=$(cat ${JAILMNT}/poudriere/ports.skipped | awk '{print $1}' | xargs echo)
+skipped=$(cat ${JAILMNT}/poudriere/ports.skipped | awk '{print $1}' | sort -u | xargs echo)
 nbfailed=$(zget stats_failed)
 nbignored=$(zget stats_ignored)
 nbskipped=$(zget stats_skipped)
@@ -165,14 +168,14 @@
 	fi
 	msg "Creating pkgng repository"
 	zset status "pkgrepo:"
-	injail tar xf /usr/ports/packages/Latest/pkg.txz -C /
-	injail rm -f /usr/ports/packages/repo.txz /usr/ports/packages/repo.sqlite
+	injail tar xf ${STD_PACKAGES}/Latest/pkg.txz -C /
+	injail rm -f ${STD_PACKAGES}/repo.txz ${STD_PACKAGES}/repo.sqlite
 	if [ -n "${PKG_REPO_SIGNING_KEY}" -a -f "${PKG_REPO_SIGNING_KEY}" ]; then
 		install -m 0400 ${PKG_REPO_SIGNING_KEY} ${JAILMNT}/tmp/repo.key
-		injail pkg-static repo /usr/ports/packages/ /tmp/repo.key
+		injail pkg-static repo ${STD_PACKAGES}/ /tmp/repo.key
 		rm -f ${JAILMNT}/tmp/repo.key
 	else
-		injail pkg-static repo /usr/ports/packages/
+		injail pkg-static repo ${STD_PACKAGES}/
 	fi
 else
 	if [ -n "${NO_RESTRICTED}" ]; then
@@ -319,4 +322,7 @@
 
 set +e
 
+firehook bulk_build_ended "${JAILNAME}" "${PTNAME}" "${nbbuilt}" \
+	"${nbfailed}" "${nbignored}" "${nbskipped}"
+
 exit $((nbfailed + nbskipped))
