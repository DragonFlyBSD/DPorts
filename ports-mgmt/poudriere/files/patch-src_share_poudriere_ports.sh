--- src/share/poudriere/ports.sh.orig	2013-11-24 05:19:10.000000000 -0500
+++ src/share/poudriere/ports.sh
@@ -149,7 +149,7 @@ generate_makefiles() {
 	local CATEGORIES ALLPORTS CAT LVL2
 	
 	CATEGORIES=$(cd ${PTMNT} && find -s * -type d -depth 0 -maxdepth 0 \
-		-not \( -name Mk -o -name Tools -o -name Templates \))
+		-not -name \[A-Z\]\*)
 	rm -f ${PTMNT}/Makefile
 	for CAT in ${CATEGORIES}; do
 		echo "SUBDIR += ${CAT}" >> ${PTMNT}/Makefile
