
$FreeBSD: print/enscript-letter/files/patch-src_gsint.h 300897 2012-07-14 14:29:18Z beat $

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
