--- config/tcl.m4.orig	2016-02-04 05:14:14 UTC
+++ config/tcl.m4
@@ -890,7 +890,7 @@ AC_DEFUN(SC_CONFIG_CFLAGS, [
 	    UNSHARED_LIB_SUFFIX='${TCL_TRIM_DOTS}\$\{DBGX\}.a'
 	    TCL_LIB_VERSIONS_OK=nodots
 	    ;;
-	FreeBSD-*)
+	FreeBSD-*|DragonFly-*)
 	    # FreeBSD 3.* and greater have ELF.
 	    SHLIB_CFLAGS="-fpic"
 	    SHLIB_LD="ld -Bshareable -x"
