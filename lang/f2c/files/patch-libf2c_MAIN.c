--- libf2c/MAIN.c.orig	Sun Jul 30 15:06:49 2006
+++ libf2c/MAIN.c	Sun Jul 30 15:12:02 2006
@@ -0,0 +1,18 @@
+/* $FreeBSD: ports/lang/f2c/files/patch-libf2c_MAIN.c,v 1.2 2012/11/17 05:58:49 svnexp Exp $
+   Add a pseudo entry point for cases where the main FOTRAN program is missing
+   e.g. ports/cad/tochnog.
+
+   Credit: adapted from Sergio Gelato <gelato (at) sissa.it> on Usenet.
+*/
+
+#include <stdio.h>
+#include <stdlib.h>
+#include <sys/cdefs.h>
+
+__weak_reference(missing_MAIN__,MAIN__);
+
+void missing_MAIN__ (void)
+{
+    fprintf(stderr, "The Fortran main program is missing.\n");
+    abort();
+}
