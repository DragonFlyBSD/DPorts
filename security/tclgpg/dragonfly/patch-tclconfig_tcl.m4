--- tclconfig/tcl.m4.orig	2015-03-24 22:04:10.000000000 +0200
+++ tclconfig/tcl.m4
@@ -1715,7 +1715,7 @@ dnl AC_CHECK_TOOL(AR, ar)
 	    UNSHARED_LIB_SUFFIX='${TCL_TRIM_DOTS}.a'
 	    TCL_LIB_VERSIONS_OK=nodots
 	    ;;
-	NetBSD-*|FreeBSD-*)
+	NetBSD-*|FreeBSD-*|DragonFly-*)
 	    # FreeBSD 3.* and greater have ELF.
 	    # NetBSD 2.* has ELF and can use 'cc -shared' to build shared libs
 	    SHLIB_CFLAGS="-fPIC"
@@ -2175,7 +2175,7 @@ dnl # preprocessing tests use only CPPFL
 	    AIX-*) ;;
 	    BSD/OS*) ;;
 	    IRIX*) ;;
-	    NetBSD-*|FreeBSD-*) ;;
+	    NetBSD-*|FreeBSD-*|DragonFly-*) ;;
 	    Darwin-*) ;;
 	    SCO_SV-3.2*) ;;
 	    *) SHLIB_CFLAGS="-fPIC" ;;
