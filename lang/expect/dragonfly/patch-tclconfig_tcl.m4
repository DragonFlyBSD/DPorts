--- tclconfig/tcl.m4.orig	2010-11-09 19:42:10 UTC
+++ tclconfig/tcl.m4
@@ -1628,7 +1628,7 @@ dnl AC_CHECK_TOOL(AR, ar)
 		;;
 	    esac
 	    ;;
-	FreeBSD-*)
+	DragonFly-*|FreeBSD-*)
 	    # This configuration from FreeBSD Ports.
 	    SHLIB_CFLAGS="-fPIC"
 	    SHLIB_LD="${CC} -shared"
