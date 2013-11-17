--- gtk/library/build.sh.intermediate	2013-11-17 17:50:46.000000000 +0000
+++ gtk/library/build.sh
@@ -61,7 +61,7 @@ case $OS in
 				;;
 		esac
 		;;
-	"FreeBSD")
+	FreeBSD|DragonFly)
 		SWT_OS=freebsd
 		MAKEFILE=make_freebsd.mak
 		MAKE_TYPE=gmake
