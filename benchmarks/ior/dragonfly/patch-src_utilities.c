--- src/utilities.c.orig
+++ src/utilities.c
@@ -45,7 +45,7 @@
 #  include <regex.h>
 #  ifdef __sun                    /* SunOS does not support statfs(), instead uses statvfs() */
 #    include <sys/statvfs.h>
-#  elif (defined __APPLE__) || (defined __FreeBSD__)
+#  elif (defined __APPLE__) || (defined __FreeBSD__) || (defined __DragonFly__)
 #    include <sys/param.h>
 #    include <sys/mount.h>
 #  else                           /* ! __sun  or __APPLE__ */
