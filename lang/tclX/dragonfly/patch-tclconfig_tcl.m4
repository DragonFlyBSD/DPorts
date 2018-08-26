--- tclconfig/tcl.m4.orig	2018-08-26 19:48:33 UTC
+++ tclconfig/tcl.m4
@@ -1706,7 +1706,7 @@ AC_DEFUN([TEA_CONFIG_CFLAGS], [
 	    	LDFLAGS="$LDFLAGS -pthread"
 	    ])
 	    ;;
-	FreeBSD-*)
+	DragonFly-*|FreeBSD-*)
 	    # This configuration from FreeBSD Ports.
 	    SHLIB_CFLAGS="-fPIC"
 	    SHLIB_LD="${CC} -shared"
@@ -2068,7 +2068,7 @@ dnl # preprocessing tests use only CPPFL
 	    BSD/OS*) ;;
 	    CYGWIN_*|MINGW32_*|MINGW64_*) ;;
 	    IRIX*) ;;
-	    NetBSD-*|FreeBSD-*|OpenBSD-*) ;;
+	    NetBSD-*|FreeBSD-*|OpenBSD-*|Dragonfly-*) ;;
 	    Darwin-*) ;;
 	    SCO_SV-3.2*) ;;
 	    windows) ;;
