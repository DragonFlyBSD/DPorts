
$FreeBSD: head/print/enscript-letter/files/patch-src_gsint.h 340725 2014-01-22 17:40:44Z mat $

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
