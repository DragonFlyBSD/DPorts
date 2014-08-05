--- tclconfig/tcl.m4.orig	2005-11-21 18:54:51.000000000 +0000
+++ tclconfig/tcl.m4
@@ -1462,7 +1462,7 @@ dnl AC_CHECK_TOOL(AR, ar, :)
 	    UNSHARED_LIB_SUFFIX='${TCL_TRIM_DOTS}.a'
 	    TCL_LIB_VERSIONS_OK=nodots
 	    ;;
-	FreeBSD-*)
+	DragonFly-*|FreeBSD-*)
 	    # FreeBSD 3.* and greater have ELF.
 	    SHLIB_CFLAGS="-fPIC"
 	    SHLIB_LD="ld -Bshareable -x"
@@ -1907,7 +1907,7 @@ dnl AC_CHECK_TOOL(AR, ar, :)
 		    ;;
 		IRIX*)
 		    ;;
-		NetBSD-*|FreeBSD-*)
+		NetBSD-*|FreeBSD-*|DragonFly-*)
 		    ;;
 		Darwin-*)
 		    ;;
