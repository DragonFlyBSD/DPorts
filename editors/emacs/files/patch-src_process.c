
$FreeBSD: ports/editors/emacs/files/patch-src_process.c,v 1.2 2012/11/17 05:57:13 svnexp Exp $

--- src/process.c.orig
+++ src/process.c
@@ -83,6 +83,10 @@
 #include <util.h>
 #endif
 
+#ifdef HAVE_LIBUTIL_H
+#include <libutil.h>
+#endif
+
 #ifdef HAVE_PTY_H
 #include <pty.h>
 #endif
