--- libportal/portal.c.intermediate	2022-11-06 16:31:37 UTC
+++ libportal/portal.c
@@ -27,7 +27,7 @@
 #include <string.h>
 #include <fcntl.h>
 #include <errno.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/vfs.h>
 #endif
 #include <stdio.h>
