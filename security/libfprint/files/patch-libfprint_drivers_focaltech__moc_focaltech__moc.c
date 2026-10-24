--- libfprint/drivers/focaltech_moc/focaltech_moc.c.orig	2026-02-10 02:18:14 UTC
+++ libfprint/drivers/focaltech_moc/focaltech_moc.c
@@ -35,6 +35,8 @@ static const FpIdEntry id_table[] = {
   { .vid = 0x2808,  .pid = 0xa57a,  },
   { .vid = 0x2808,  .pid = 0xa78a,  },
   { .vid = 0x2808,  .pid = 0x1579,  },
+  { .vid = 0x2808,  .pid = 0x077A,  },
+  { .vid = 0x2808,  .pid = 0x079A,  },
   { .vid = 0,  .pid = 0,  .driver_data = 0 },   /* terminating entry */
 };
 
