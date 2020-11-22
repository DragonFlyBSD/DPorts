--- mkplanexfw.c.orig	2011-12-22 14:21:03 UTC
+++ mkplanexfw.c
@@ -17,6 +17,9 @@
 #include <stdarg.h>
 #include <errno.h>
 #include <sys/stat.h>
+#include <sys/endian.h>
+
+#include "freebsd.h"
 
 #include "sha1.h"
 
