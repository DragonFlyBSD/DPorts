--- hald/freebsd/addons/addon-mouse.c.orig	2009-08-24 14:42:29.000000000 +0200
+++ hald/freebsd/addons/addon-mouse.c	2012-12-21 21:51:33.462004000 +0100
@@ -29,7 +29,9 @@
 #include <sys/types.h>
 #include <sys/event.h>
 #include <sys/time.h>
+#ifndef __DragonFly__
 #include <sys/proc.h>
+#endif
 #if __FreeBSD_version >= 800058
 #include <sys/types.h>
 #include <sys/user.h>
@@ -53,7 +55,9 @@
 #define MOUSED_DEVICE "/dev/sysmouse"
 #define MOUSED_PROC_NAME "moused"
 #define XORG_PROC_NAME "Xorg"
+#ifndef NO_PID
 #define NO_PID -1
+#endif
 
 static struct
 {
