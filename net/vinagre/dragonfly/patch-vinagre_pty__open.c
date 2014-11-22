--- vinagre/pty_open.c.orig	2014-01-09 15:40:59.000000000 +0000
+++ vinagre/pty_open.c
@@ -70,6 +70,7 @@
 #ifdef HAVE_UTMP_H
 #include <utmp.h>
 #endif
+#include <libutil.h>
 #ifdef HAVE_UTIL_H
 #include <util.h>
 #endif
