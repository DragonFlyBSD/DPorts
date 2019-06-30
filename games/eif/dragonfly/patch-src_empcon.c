--- src/empcon.c.orig	2004-02-06 16:15:19 UTC
+++ src/empcon.c
@@ -22,6 +22,7 @@
 #include	<strings.h>
 #endif				/* HAVE_STRINGS_H */
 #include	<sys/types.h>
+#include	<sys/select.h>
 #ifdef	HAVE_UNISTD_H
 #include	<unistd.h>
 #endif				/* HAVE_UNISTD_H */
