--- packages/seacas/libraries/ioss/src/Ioss_FileInfo.C.orig
+++ packages/seacas/libraries/ioss/src/Ioss_FileInfo.C
@@ -31,7 +31,7 @@
 #endif
 #else
 #include <unistd.h>
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
 #include <sys/mount.h>
 #elif defined(__OpenBSD__)
 #include <sys/mount.h>
@@ -188,7 +188,7 @@
       }
       free(path);
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
       return stat_fs.f_fstypename;
 #else
       /* linux statfs defines that 0x6969 is NFS filesystem */
@@ -225,7 +225,7 @@
       }
       free(path);
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
       return (0 == ::strcmp("nfs", stat_fs.f_fstypename));
 #else
       /* linux statfs defines that 0x6969 is NFS filesystem */
