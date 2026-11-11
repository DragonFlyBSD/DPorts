--- bksh.c.orig
+++ bksh.c
@@ -33,9 +33,9 @@
 #include <sys/types.h>
 #include <sys/stat.h>
 
-#if defined(__FreeBSD__) && __FreeBSD__ >= 2
+#if (defined(__FreeBSD__) && __FreeBSD__ >= 2) || defined(__DragonFly__)
 #include <osreldate.h>
-#    if __FreeBSD_version >= 430000
+#    if __FreeBSD_version >= 430000 || defined(__DragonFly__)
 #include <libgen.h>
 #    else
 #include "basename.h"
