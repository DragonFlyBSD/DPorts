--- build.sh.orig2	2015-10-11 12:43:07.073925000 +0200
+++ build.sh	2015-10-11 12:44:02.454974000 +0200
@@ -61,6 +61,13 @@
 				;;
 		esac
 		;;
+	"DragonFly")
+		SWT_OS=dragonfly
+		MAKEFILE=make_dragonfly.mak
+		if uname -p > /dev/null 2>&1; then
+			MODEL=`uname -p`
+		fi
+		;;
 	"FreeBSD")
 		SWT_OS=freebsd
 		MAKEFILE=make_freebsd.mak
