
$FreeBSD: ports/sysutils/webmin/files/patch-mount_freebsd-mounts-7.c,v 1.2 2012/11/17 06:01:49 svnexp Exp $

--- mount/freebsd-mounts-7.c.orig
+++ mount/freebsd-mounts-7.c
@@ -1,3 +1,5 @@
+#include <stdlib.h>
+#include <string.h>
 #include <stdio.h>
 #include <errno.h>
 #include <sys/param.h>
