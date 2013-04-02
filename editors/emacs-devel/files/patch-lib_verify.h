
$FreeBSD: editors/emacs-devel/files/patch-lib_verify.h 309486 2012-12-25 16:28:05Z ashish $

--- lib/verify.h.orig
+++ lib/verify.h
@@ -21,6 +21,11 @@
 # define _GL_VERIFY_H
 
 
+// undefine the _Static_assert definition present in <sys/cdefs.h>
+#ifdef __FreeBSD__
+#undef _Static_assert
+#endif
+
 /* Define _GL_HAVE__STATIC_ASSERT to 1 if _Static_assert works as per C11.
    This is supported by GCC 4.6.0 and later, in C mode, and its use
    here generates easier-to-read diagnostics when verify (R) fails.
