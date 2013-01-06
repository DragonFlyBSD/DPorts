--- ltmain.sh.intermediate	2013-01-06 09:13:18.744076000 +0100
+++ ltmain.sh	2013-01-06 09:16:45.624365000 +0100
@@ -1335,7 +1335,7 @@
 	    # These systems don't actually have a C library (as such)
 	    test "X$arg" = "X-lc" && continue
 	    ;;
-	  *-*-openbsd* | *-*-freebsd*)
+	  *-*-openbsd* | *-*-freebsd* | *-*-dragonfly* )
 	    # Do not include libc due to us having libc/libc_r.
 	    test "X$arg" = "X-lc" && continue
 	    ;;
@@ -1346,7 +1346,7 @@
 	  esac
 	elif test "X$arg" = "X-lc_r"; then
 	 case $host in
-	 *-*-openbsd* | *-*-freebsd*)
+	 *-*-openbsd* | *-*-freebsd* | *-*-dragonfly* )
 	   # Do not include libc_r directly, use -pthread flag.
 	   continue
 	   ;;
