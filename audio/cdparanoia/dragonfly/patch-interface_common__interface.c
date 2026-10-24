--- interface/common_interface.c.intermediate	2026-09-05 00:30:17 UTC
+++ interface/common_interface.c
@@ -15,7 +15,7 @@
 
 #ifdef Linux
 #include <linux/hdreg.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/cdio.h>
 #endif
 
@@ -27,10 +27,14 @@ int ioctl_ping_cdrom(int fd){
   struct cdrom_volctrl volctl;
   if (ioctl(fd, CDROMVOLREAD, &volctl) &&
       ioctl(fd, CDROM_GET_CAPABILITY, NULL)<0)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   struct ioc_vol volctl;
+#if defined(__DragonFly__)
+  if (ioctl(fd, CDIOCGETVOL, &volctl))
+#else
   if (ioctl(fd, CDIOCGETVOL, &volctl) &&
      (ioctl(fd, CDIOCCAPABILITY, NULL)<0))
+#endif
 #endif
     return(1); /* failure */
 
