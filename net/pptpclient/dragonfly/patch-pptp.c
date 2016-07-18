--- pptp.c.orig	2013-10-23 11:10:46.000000000 +0300
+++ pptp.c
@@ -23,7 +23,7 @@
 
 #include <sys/types.h>
 #include <sys/socket.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <libutil.h>
 #elif defined(__NetBSD__) || defined(__OpenBSD__)
 #include <util.h>
