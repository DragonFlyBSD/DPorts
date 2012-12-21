--- hald/freebsd/hf-pci.c.orig	2009-05-12 14:27:00.000000000 +0200
+++ hald/freebsd/hf-pci.c	2012-12-21 18:46:40.223289000 +0100
@@ -27,7 +27,11 @@
 
 #include <stdio.h>
 #include <string.h>
+#ifdef __DragonFly__
+#include <bitstring.h>
+#else
 #include <sys/bitstring.h>
+#endif
 #include <errno.h>
 #include <fcntl.h>
 #include <unistd.h>
