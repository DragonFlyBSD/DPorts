--- src/share/poudriere/common.sh.orig	2014-01-15 02:17:27.000000000 +0000
+++ src/share/poudriere/common.sh
@@ -885,7 +885,7 @@ stash_packages() {
 
 	PACKAGES_ROOT=${PACKAGES}
 
-	[ "${ATOMIC_PACKAGE_REPOSITORY}" = "yes" ] && return 0
+	[ "${ATOMIC_PACKAGE_REPOSITORY}" = "yes" ] || return 0
 
 	[ -L ${PACKAGES}/.latest ] || convert_repository
 
