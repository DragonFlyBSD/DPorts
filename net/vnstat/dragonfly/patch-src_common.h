--- src/common.h.orig	2021-08-15 17:44:26 UTC
+++ src/common.h
@@ -26,7 +26,7 @@
 #include <fcntl.h>
 #include <sys/time.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/mount.h>
 #include <sys/socket.h>
@@ -61,7 +61,7 @@ and most can be changed later from the c
 
 /* location of the database directory */
 #ifndef DATABASEDIR
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #define DATABASEDIR "/var/db/vnstat"
 #else
 #define DATABASEDIR "/var/lib/vnstat"
