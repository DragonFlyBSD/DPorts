--- lib/wrapunix.c.orig	1997-06-27 20:21:59 UTC
+++ lib/wrapunix.c
@@ -18,6 +18,10 @@
 
 #include	"unp.h"
 
+#ifdef  HAVE_SYS_SYSCTL_H
+#include <sys/sysctl.h>
+#endif
+
 void *
 Calloc(size_t n, size_t size)
 {
