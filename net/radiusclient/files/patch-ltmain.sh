
$FreeBSD: ports/net/radiusclient/files/patch-ltmain.sh,v 1.2 2012/11/17 06:00:17 svnexp Exp $

--- ltmain.sh
+++ ltmain.sh
@@ -5553,8 +5553,8 @@
 	# Install the pseudo-library for information purposes.
 	name=`$echo "X$file" | $Xsed -e 's%^.*/%%'`
 	instname="$dir/$name"i
-	$show "$install_prog $instname $destdir/$name"
-	$run eval "$install_prog $instname $destdir/$name" || exit $?
+#	$show "$install_prog $instname $destdir/$name"
+#	$run eval "$install_prog $instname $destdir/$name" || exit $?
 
 	# Maybe install the static library, too.
 	test -n "$old_library" && staticlibs="$staticlibs $dir/$old_library"
