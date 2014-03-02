--- tclconfig/tcl.m4.orig	2007-06-22 21:19:12.000000000 +0000
+++ tclconfig/tcl.m4
@@ -1596,7 +1596,7 @@ dnl AC_CHECK_TOOL(AR, ar)
 	    UNSHARED_LIB_SUFFIX='${TCL_TRIM_DOTS}.a'
 	    TCL_LIB_VERSIONS_OK=nodots
 	    ;;
-	FreeBSD-*)
+	Dragonfly-*|FreeBSD-*)
 	    # FreeBSD 3.* and greater have ELF.
 	    SHLIB_CFLAGS="-fPIC"
 	    SHLIB_LD="ld -Bshareable -x"
@@ -2019,7 +2019,7 @@ dnl # preprocessing tests use only CPPFL
 		    ;;
 		IRIX*)
 		    ;;
-		NetBSD-*|FreeBSD-*)
+		NetBSD-*|DragonFly-*|FreeBSD-*)
 		    ;;
 		Darwin-*)
 		    ;;
