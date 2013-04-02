
$FreeBSD: editors/emacs-devel/files/patch-src_process.c 300896 2012-07-14 13:54:48Z beat $

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
