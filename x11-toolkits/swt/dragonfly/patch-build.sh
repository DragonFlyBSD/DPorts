--- build.sh.intermediate	2013-06-02 16:30:45.679485000 +0000
+++ build.sh
@@ -41,6 +41,13 @@ case $OS in
 			MAKE_TYPE=gmake
 		fi
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
