--- tcl.m4.orig	2009-02-11 15:09:47.000000000 +0200
+++ tcl.m4
@@ -670,7 +670,7 @@ AC_DEFUN(SC_CONFIG_CFLAGS, [
 	    LDFLAGS="-Wl,-Bexport"
 	    LD_SEARCH_FLAGS=""
 	    ;;
-	NetBSD-*|FreeBSD-[[12]].*|OpenBSD-*)
+	NetBSD-*|FreeBSD-[[12]].*|OpenBSD-*|DragonFly-*)
 	    # Not available on all versions:  check for include file.
 	    AC_CHECK_HEADER(dlfcn.h, [
 		SHLIB_CFLAGS="-fpic"
@@ -1009,7 +1009,7 @@ AC_DEFUN(SC_CONFIG_CFLAGS, [
 		    ;;
 		IRIX*)
 		    ;;
-		NetBSD-*|FreeBSD-*|OpenBSD-*)
+		NetBSD-*|FreeBSD-*|OpenBSD-*|DragonFly-*)
 		    ;;
 		RISCos-*)
 		    ;;
