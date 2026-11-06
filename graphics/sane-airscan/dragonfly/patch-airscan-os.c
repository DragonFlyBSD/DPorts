--- airscan-os.c.orig	2025-07-25 11:41:45 UTC
+++ airscan-os.c
@@ -17,7 +17,7 @@
 #include <unistd.h>
 #include <sys/stat.h>
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #   include <sys/types.h>
 #   include <sys/sysctl.h>
 #endif
@@ -93,7 +93,7 @@ os_progname_init (void)
         return;
     }
     memmove(os_progname_buf, kp.p_comm, KI_MAXCOMLEN);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     const int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
     size_t    len = sizeof(os_progname_buf);
     int       rc = sysctl(mib, 4, os_progname_buf, &len, NULL, 0);
