--- src/poudriere.d/bulk.sh.orig	2012-10-15 18:18:18.000000000 +0200
+++ src/poudriere.d/bulk.sh	2012-11-24 16:25:33.000000000 +0100
@@ -32,6 +32,7 @@
 CLEAN_LISTED=0
 ALL=0
 . ${SCRIPTPREFIX}/common.sh
+check_jobs
 
 [ $# -eq 0 ] && usage
 
@@ -93,6 +94,8 @@
 	LISTPORTS="$@"
 fi
 
+check_jobs
+
 export SKIPSANITY
 
 STATUS=0 # out of jail #
@@ -128,7 +131,7 @@
 
 test -z ${PORTTESTING} && echo "DISABLE_MAKE_JOBS=yes" >> ${JAILMNT}/etc/make.conf
 
-zfs snapshot ${JAILFS}@prepkg
+zsnap ${JAILFS}@prepkg
 
 parallel_build
 
@@ -158,14 +161,14 @@
 elif [ $PKGNG -eq 1 ]; then
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
 	msg "Preparing INDEX"
@@ -177,7 +180,7 @@
 		[ "${pkg}" = "${PKGDIR}/All/*.tbz" ] && break
 		msg_n "Extracting description from ${pkg_file##*/}..."
 		ORIGIN=$(pkg_get_origin ${pkg_file})
-		[ -d ${PORTSDIR}/${ORIGIN} ] && injail make -C /usr/ports/${ORIGIN} describe >> ${INDEXF}.1
+		[ -d ${PORTSDIR}/${ORIGIN} ] && injail make -C ${PORTSRC}/${ORIGIN} describe >> ${INDEXF}.1
 		echo " done"
 	done
 
