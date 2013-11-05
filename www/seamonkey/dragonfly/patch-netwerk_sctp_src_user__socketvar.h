--- mozilla/netwerk/sctp/src/user_socketvar.h.orig	2013-09-11 03:22:48.000000000 +0000
+++ mozilla/netwerk/sctp/src/user_socketvar.h
@@ -47,7 +47,8 @@
 /* #include <sys/_lock.h>  was 0 byte file */
 /* #include <sys/_mutex.h> was 0 byte file */
 /* #include <sys/_sx.h> */ /*__Userspace__ alternative?*/
-#if !defined(__Userspace_os_Windows) && !defined(__Userspace_os_FreeBSD)
+#if !defined(__Userspace_os_Windows) && !defined(__Userspace_os_FreeBSD) \
+ && !defined(__Userspace_os_DragonFly)
 #include <sys/uio.h>
 #endif
 #define SOCK_MAXADDRLEN 255
@@ -59,7 +60,9 @@
 #define SS_CANTRCVMORE 0x020
 #define SS_CANTSENDMORE 0x010
 
-#if defined (__Userspace_os_FreeBSD) || defined(__Userspace_os_OpenBSD) || defined(__Userspace_os_Darwin) || defined (__Userspace_os_Windows)
+#if defined(__Userspace_os_FreeBSD) || defined(__Userspace_os_OpenBSD) \
+ || defined(__Userspace_os_Darwin) || defined(__Userspace_os_Windows) \
+ || defined(__Userspace_os_DragonFly)
 #define UIO_MAXIOV 1024
 #define ERESTART (-1)
 #endif
