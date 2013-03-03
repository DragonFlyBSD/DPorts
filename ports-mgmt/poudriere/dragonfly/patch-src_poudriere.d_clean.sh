--- src/poudriere.d/clean.sh.orig	2012-12-01 00:15:48.000000000 +0000
+++ src/poudriere.d/clean.sh
@@ -22,6 +22,8 @@ clean_pool() {
 	local pkgname=$1
 	local clean_rdepends=$2
 	local dep_dir dep_pkgname
+	local xcount
+	local xdep
 
 	if [ -d "${JAILMNT}/poudriere/rdeps/${pkgname}" ]; then
 		# Determine which packages are ready-to-build and
@@ -41,19 +43,30 @@ clean_pool() {
 					# no need for below code
 				else
 					rm -f "${JAILMNT}/poudriere/deps/${dep_pkgname}/${pkgname}"
+
 					# If that packages was just waiting on my package, and
-					# is now ready-to-build, move it to pool/
-					find "${JAILMNT}/poudriere/deps/${dep_pkgname}" \
-						-type d -maxdepth 0 -empty \
-						-exec mv {} "${JAILMNT}/poudriere/pool" \;
+					# is now ready-to-build, move it to poolN/
+					#
+					for xdep in `find ${JAILMNT}/poudriere/deps/${dep_pkgname} -type d -maxdepth 0 -empty 2>/dev/null || :`; do
+						xdep=${xdep##*/}
+						xcount=`find "${JAILMNT}/poudriere/rdeps/${xdep}" | wc -l`
+						xcount=$(($xcount - 1))
+						if [ ${xcount} -lt 0 ]; then
+							xcount=0
+						fi
+						if [ ${xcount} -gt 9 ]; then
+							xcount=9
+						fi
+						mv ${JAILMNT}/poudriere/deps/${xdep} ${JAILMNT}/poudriere/pool${xcount}/
+					done
 				fi
 			done
 		fi
 	fi
 
-	rm -rf "${JAILMNT}/poudriere/pool/${pkgname}" \
-		"${JAILMNT}/poudriere/deps/${pkgname}" \
-		"${JAILMNT}/poudriere/rdeps/${pkgname}" 2>/dev/null || :
+	rm -rf ${JAILMNT}/poudriere/running/${pkgname} 2>/dev/null || :
+	rm -rf ${JAILMNT}/poudriere/rdeps/${pkgname} 2>/dev/null || :
+	rm -rf ${JAILMNT}/poudriere/deps/${pkgname} 2>/dev/null || :
 }
 
 clean_pool "${PKGNAME}" ${CLEAN_RDEPENDS}
