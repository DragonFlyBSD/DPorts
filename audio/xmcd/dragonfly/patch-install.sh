--- install.sh.intermediate	2013-12-11 18:02:08.253265000 +0000
+++ install.sh
@@ -625,7 +625,7 @@ if [ "$OS_SYS" = A/UX ]
 then
 	# Apple A/UX
 	SHELL=/bin/ksh
-elif [ "$OS_SYS" = FreeBSD ]
+elif [ "$OS_SYS" = FreeBSD -o "$OS_SYS" = DragonFly ]
 then
 	# FreeBSD
 	OS_REL_T=`echo "$OS_REL_T" | sed 's/\..*$//'`
