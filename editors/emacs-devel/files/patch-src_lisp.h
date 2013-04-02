
$FreeBSD: editors/emacs-devel/files/patch-src_lisp.h 309486 2012-12-25 16:28:05Z ashish $

--- src/lisp.h.orig
+++ src/lisp.h
@@ -21,6 +21,10 @@
 #define EMACS_LISP_H
 
 #include <setjmp.h>
+#ifdef __FreeBSD__
+#undef _Alignof
+#undef _Alignas
+#endif
 #include <stdalign.h>
 #include <stdarg.h>
 #include <stdbool.h>
