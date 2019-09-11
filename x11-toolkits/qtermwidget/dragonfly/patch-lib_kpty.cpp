--- lib/kpty.cpp.orig	2019-01-24 21:57:59 UTC
+++ lib/kpty.cpp
@@ -94,7 +94,9 @@ extern "C" {
 # include <utempter.h>
 }
 #else
+#ifndef __DragonFly__
 # include <utmp.h>
+#endif
 # ifdef HAVE_UTMPX
 #  include <utmpx.h>
 # endif
