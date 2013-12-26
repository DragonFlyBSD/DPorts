
$FreeBSD: audio/epos-devel/files/patch-src_epos.h 300895 2012-07-14 12:56:14Z beat $

--- src/epos.h.orig
+++ src/epos.h
@@ -43,6 +43,7 @@
 		#include <rx.h>
 	#else
 	    #ifdef HAVE_REGEX_H
+		#include <sys/types.h>
 		#include <regex.h>
 	    #else
 		#include "rx.h"
