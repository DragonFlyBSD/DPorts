--- mfid.c.orig	2016-04-26 21:50:29.000000000 +0200
+++ mfid.c	2019-06-30 11:00:59.793137000 +0200
@@ -41,6 +41,10 @@
 #include <err.h>
 #include <fcntl.h>
 
+#ifndef SPECNAMELEN
+#define	SPECNAMELEN	63
+#endif
+
 #include <dev/mfi/mfireg.h>
 #include <dev/mfi/mfi_ioctl.h>
 
