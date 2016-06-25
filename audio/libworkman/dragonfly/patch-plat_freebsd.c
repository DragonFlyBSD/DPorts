--- plat_freebsd.c.intermediate	2016-06-25 10:41:36.000000000 +0300
+++ plat_freebsd.c
@@ -30,7 +30,7 @@
  *
  */
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 
 static char freebsd_id[] = "$Id: plat_freebsd.c,v 1.8 1999/03/07 08:36:40 dirk Exp $";
 
@@ -59,9 +59,6 @@ static char freebsd_id[] = "$Id: plat_fr
 #else
 # define LEFT_PORT 0
 # define RIGHT_PORT 1
-# if __FreeBSD_version < 300000
-#  include <scsi.h>
-# endif
 #endif
 
 #include "include/wm_struct.h"
