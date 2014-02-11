--- tclconfig/tcl.m4.orig	2006-01-25 21:52:11.000000000 +0000
+++ tclconfig/tcl.m4
@@ -1576,7 +1576,7 @@ dnl AC_CHECK_TOOL(AR, ar)
 	    UNSHARED_LIB_SUFFIX='${TCL_TRIM_DOTS}.a'
 	    TCL_LIB_VERSIONS_OK=nodots
 	    ;;
-	FreeBSD-*)
+	DragonFly-*|FreeBSD-*)
 	    # FreeBSD 3.* and greater have ELF.
 	    SHLIB_CFLAGS="-fPIC"
 	    SHLIB_LD="ld -Bshareable -x"
@@ -1953,7 +1953,7 @@ dnl AC_CHECK_TOOL(AR, ar)
 		    ;;
 		IRIX*)
 		    ;;
-		NetBSD-*|FreeBSD-*)
+		NetBSD-*|DragonFly-*|FreeBSD-*)
 		    ;;
 		Darwin-*)
 		    ;;
