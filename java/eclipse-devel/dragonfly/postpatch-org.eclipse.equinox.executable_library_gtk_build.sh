--- build/eclipse-4.2.0-I20120608-1400-src/features/org.eclipse.equinox.executable/library/gtk/build.sh.intermediate	2013-11-17 17:50:46.000000000 +0000
+++ build/eclipse-4.2.0-I20120608-1400-src/features/org.eclipse.equinox.executable/library/gtk/build.sh
@@ -136,7 +136,7 @@ case $OS in
 				;;
 		esac
 		;;
-	"FreeBSD")
+	FreeBSD|DragonFly)
 		makefile="make_freebsd.mak"
 		defaultOS="freebsd"
 		MAKE=gmake
