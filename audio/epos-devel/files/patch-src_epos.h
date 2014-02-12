
$FreeBSD: head/audio/epos-devel/files/patch-src_epos.h 340725 2014-01-22 17:40:44Z mat $

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
