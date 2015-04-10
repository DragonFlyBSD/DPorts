--- tclconfig/tcl.m4.orig	2014-12-05 22:58:12 UTC
+++ tclconfig/tcl.m4
@@ -1681,7 +1681,7 @@ dnl AC_CHECK_TOOL(AR, ar)
 		;;
 	    esac
 	    ;;
-	FreeBSD-*)
+	DragonFly-*|FreeBSD-*)
 	    # This configuration from FreeBSD Ports.
 	    SHLIB_CFLAGS="-fPIC"
 	    SHLIB_LD="${CC} -shared"
@@ -2051,6 +2051,7 @@ dnl # preprocessing tests use only CPPFL
 	    CYGWIN_*) ;;
 	    IRIX*) ;;
 	    NetBSD-*|FreeBSD-*|OpenBSD-*) ;;
+	    DragonFly-*) ;;
 	    Darwin-*) ;;
 	    SCO_SV-3.2*) ;;
 	    windows) ;;
