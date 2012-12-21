--- hald/freebsd/probing/probe-volume.c.intermediate	2012-12-21 19:26:23.418869000 +0100
+++ hald/freebsd/probing/probe-volume.c	2012-12-21 19:40:08.842767000 +0100
@@ -33,7 +33,11 @@
 #include <fcntl.h>
 #include <unistd.h>
 #include <sys/ioctl.h>
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#else
 #include <sys/disk.h>
+#endif
 #include <sys/cdio.h>
 #include <sys/param.h>
 #include <sys/mount.h>
@@ -41,7 +45,11 @@
 #include <ufs/ufs/ufsmount.h>
 #include <ufs/ufs/dinode.h>
 #include <ufs/ffs/fs.h>
+#ifdef __DragonFly__
+#include <ufs/ufs/ufs_types.h>
+#else
 #include <libufs.h>
+#endif
 #include <isofs/cd9660/iso.h>
 #include <glib.h>
 #include <libvolume_id.h>
@@ -332,6 +340,9 @@
   gboolean is_blank = FALSE;
   const char *usage;
   char *label;
+#ifdef __DragonFly__
+  struct partinfo device_info;
+#endif
   unsigned int sector_size = 0;
   off_t media_size = 0;
 
@@ -371,7 +382,12 @@
       is_blank = (! has_audio && ! has_data);
     }
 
+#ifdef __DragonFly__
+  ioctl(fd, DIOCGPART, &device_info);
+  media_size = device_info.media_size;
+#else
   ioctl(fd, DIOCGMEDIASIZE, &media_size);
+#endif
 
   /*
    * We only check for filesystems if the volume has no children,
@@ -563,16 +579,35 @@
 
   if (vid && ! strcmp (vid->type, "ufs"))
     {
+#ifdef __DragonFly__
+      struct fs fs;
+      int rfd;
+      ssize_t nr;
+
+      if ((rfd = open(device_file, O_RDONLY)) >= 0) {
+          lseek(rfd, (off_t) SBOFF, SEEK_SET);
+
+          nr = read(rfd, &fs, (size_t) SBSIZE);
+          close(rfd);
+      }
+
+      if (nr == (ssize_t) SBSIZE)
+#else
       struct uufsd ufsdisk;
 
       if (ufs_disk_fillout(&ufsdisk, device_file) == 0)
+#endif
         {
 	  char ufsid[64];
 	  char **ufs_devs = NULL;
 	  int num_udis;
 	  int i;
 
+#ifdef __DragonFly__
+          snprintf(ufsid, sizeof(ufsid), "%08x%08x", fs.fs_id[0], fs.fs_id[1]);
+#else
 	  snprintf(ufsid, sizeof(ufsid), "%08x%08x", ufsdisk.d_fs.fs_id[0], ufsdisk.d_fs.fs_id[1]);
+#endif
 	  libhal_device_set_property_string(hfp_ctx, hfp_udi, "volume.freebsd.ufsid", ufsid, &hfp_error);
 	  dbus_error_free(&hfp_error);
 	  ufs_devs = libhal_manager_find_device_string_match(hfp_ctx,
@@ -599,7 +634,9 @@
 	    }
 	  if (ufs_devs)
 	    libhal_free_string_array(ufs_devs);
+#ifndef __DragonFly__
 	  ufs_disk_close(&ufsdisk);
+#endif
 	}
     }
 
@@ -630,7 +667,11 @@
 
   libhal_device_set_property_string(hfp_ctx, hfp_udi, "volume.uuid", vid ? vid->uuid : "", &hfp_error);
 
+#ifdef __DragonFly__
+  sector_size = device_info.media_blksize;
+#else
   ioctl(fd, DIOCGSECTORSIZE, &sector_size);
+#endif
 
   if (sector_size != 0)
     libhal_device_set_property_uint64(hfp_ctx, hfp_udi, "volume.block_size", sector_size, &hfp_error);
