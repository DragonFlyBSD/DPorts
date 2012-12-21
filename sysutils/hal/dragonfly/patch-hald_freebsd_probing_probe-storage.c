--- hald/freebsd/probing/probe-storage.c.intermediate	2012-12-21 18:48:56.577309000 +0100
+++ hald/freebsd/probing/probe-storage.c	2012-12-21 20:29:31.273532000 +0100
@@ -32,7 +32,11 @@
 #include <errno.h>
 #include <sys/types.h>
 #include <sys/ioctl.h>
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#else
 #include <sys/disk.h>
+#endif
 #include <netinet/in.h>
 #include <glib.h>
 #include <libvolume_id.h>
@@ -171,6 +175,9 @@
 main (int argc, char **argv)
 {
   char *device_file;
+#ifdef __DragonFly__
+  struct partinfo device_info;
+#endif
   char *drive_type;
   char *parent;
   int ret = 0;			/* no media/filesystem */
@@ -215,16 +222,25 @@
       if (hfp_cdrom_test_unit_ready(cdrom))
         {
 	  int fd;
+#ifndef __DragonFly__
 	  off_t size;
+#endif
 
           libhal_device_set_property_bool(hfp_ctx, hfp_udi, "storage.removable.media_available", TRUE, &hfp_error);
 	  fd = open(device_file, O_RDONLY | O_NONBLOCK);
 	  if (fd > -1)
             {
+#ifdef __DragonFly__
+              if (ioctl (fd, DIOCGPART, &device_info) == 0)
+                {
+                  libhal_device_set_property_uint64(hfp_ctx, hfp_udi, "storage.removable.media_size", device_info.media_size, &hfp_error);
+		}
+#else
               if (ioctl (fd, DIOCGMEDIASIZE, &size) == 0)
                 {
                   libhal_device_set_property_uint64(hfp_ctx, hfp_udi, "storage.removable.media_size", size, &hfp_error);
 		}
+#endif
 	      close(fd);
 	    }
 	  ret = 2;		/* has media */
@@ -245,10 +261,17 @@
       if (fd > -1)
 	{
 	  libhal_device_set_property_bool(hfp_ctx, hfp_udi, "storage.removable.media_available", TRUE, &hfp_error);
+#ifdef __DragonFly__
+	  if (ioctl (fd, DIOCGPART, &device_info) == 0)
+	    {
+	      libhal_device_set_property_uint64(hfp_ctx, hfp_udi, "storage.removable.media_size", device_info.media_size, &hfp_error);
+	    }
+#else
 	  if (ioctl (fd, DIOCGMEDIASIZE, &size) == 0)
 	    {
 	      libhal_device_set_property_uint64(hfp_ctx, hfp_udi, "storage.removable.media_size", size, &hfp_error);
 	    }
+#endif
 	  close(fd);
 	}
       else
