
$FreeBSD: head/sysutils/webmin/files/patch-mount_freebsd-mounts-7.c 340725 2014-01-22 17:40:44Z mat $

--- mount/freebsd-mounts-7.c.orig
+++ mount/freebsd-mounts-7.c
@@ -1,3 +1,5 @@
+#include <stdlib.h>
+#include <string.h>
 #include <stdio.h>
 #include <errno.h>
 #include <sys/param.h>
