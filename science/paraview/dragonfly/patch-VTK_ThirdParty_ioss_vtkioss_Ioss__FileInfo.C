--- VTK/ThirdParty/ioss/vtkioss/Ioss_FileInfo.C.orig
+++ VTK/ThirdParty/ioss/vtkioss/Ioss_FileInfo.C
@@ -30,7 +30,7 @@
 #endif
 #else
 #include <unistd.h>
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
 #include <sys/mount.h>
 #elif defined(__OpenBSD__)
 #include <sys/mount.h>
@@ -189,7 +189,7 @@
       }
       free(path);
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
       return stat_fs.f_fstypename;
 #else
       /* linux statfs defines that 0x6969 is NFS filesystem */
@@ -228,7 +228,7 @@
       }
       free(path);
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
       return (0 == ::strcmp("nfs", stat_fs.f_fstypename));
 #else
       /* linux statfs defines that 0x6969 is NFS filesystem */
