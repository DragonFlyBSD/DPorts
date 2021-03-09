--- smapi/h/UNIX.h.orig	2020-04-22 12:18:38 UTC
+++ smapi/h/UNIX.h
@@ -41,7 +41,7 @@
 #  define HAS_UTIME_H 1
 
 #if (defined(__APPLE__) && defined(__MACH__)) || defined(__NetBSD__) || \
-    defined(__FreeBSD__) || defined(_AIX) || defined(__SUN__) || \
+    defined(__FreeBSD__) || defined(_AIX) || defined(__SUN__) || defined(__DragonFly__) || \
     defined(__LINUX__) || defined(__osf__) || defined(__hpux) || \
     defined(__OpenBSD__) || defined(__CYGWIN__) || defined(__QNXNTO__)
     #define mymkdir(a) mkdir((a), S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH)
@@ -70,7 +70,7 @@
 #endif
 
 /* FreeBSD >=5.x */
-#if (defined(__FreeBSD__) && (__FreeBSD__ >= 5))
+#if (defined(__FreeBSD__) && (__FreeBSD__ >= 5)) || defined(__DragonFly__)
     #define HAS_SYS_STATVFS_H
 #endif
 
