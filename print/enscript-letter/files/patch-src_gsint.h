
$FreeBSD: ports/print/enscript-letter/files/patch-src_gsint.h,v 1.2 2012/11/17 06:00:49 svnexp Exp $

--- src/gsint.h.orig
+++ src/gsint.h
@@ -701,4 +701,9 @@
  */
 void printer_close ___P ((void *context));
 
+/*
+ * Escape filenames for shell usage
+ */
+char *shell_escape ___P ((const char *fn));
+
 #endif /* not GSINT_H */
