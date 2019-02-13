--- tclconfig/tcl.m4.orig	2009-06-18 04:45:22 UTC
+++ tclconfig/tcl.m4
@@ -1715,7 +1715,7 @@ dnl AC_CHECK_TOOL(AR, ar)
 	    UNSHARED_LIB_SUFFIX='${TCL_TRIM_DOTS}.a'
 	    TCL_LIB_VERSIONS_OK=nodots
 	    ;;
-	NetBSD-*|FreeBSD-*)
+	NetBSD-*|DragonFly-*|FreeBSD-*)
 	    # FreeBSD 3.* and greater have ELF.
 	    # NetBSD 2.* has ELF and can use 'cc -shared' to build shared libs
 	    SHLIB_CFLAGS="-fPIC"
@@ -2176,6 +2176,7 @@ dnl # preprocessing tests use only CPPFL
 	    BSD/OS*) ;;
 	    IRIX*) ;;
 	    NetBSD-*|FreeBSD-*) ;;
+	    DragonFly-*) ;;
 	    Darwin-*) ;;
 	    SCO_SV-3.2*) ;;
 	    *) SHLIB_CFLAGS="-fPIC" ;;
