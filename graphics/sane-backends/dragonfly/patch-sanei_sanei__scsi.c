--- sanei/sanei_scsi.c.orig	2013-08-26 01:01:38.000000000 +0000
+++ sanei/sanei_scsi.c
@@ -103,10 +103,17 @@
 #elif defined (HAVE_CAMLIB_H)
 # define USE FREEBSD_CAM_INTERFACE
 # include <stdio.h>		/* there is a bug in scsi_all.h */
+# ifdef __DragonFly__
+# include <bus/cam/cam.h>
+# include <bus/cam/cam_ccb.h>
+# include <bus/cam/scsi/scsi_message.h>
+# include <bus/cam/scsi/scsi_pass.h>
+# else
 # include <cam/cam.h>
 # include <cam/cam_ccb.h>
 # include <cam/scsi/scsi_message.h>
 # include <cam/scsi/scsi_pass.h>
+# endif
 # include <camlib.h>
 #elif defined (HAVE_SYS_SCSIIO_H)
 # define USE BSD_INTERFACE
