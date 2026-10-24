--- libs/indicore/indicom.c.orig
+++ libs/indicore/indicom.c
@@ -65,7 +65,7 @@
 #include <mach/mach.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/param.h>
 #include <sys/socket.h>
 #endif
@@ -911,7 +911,7 @@
     case 57600:  bps = B57600;  break;
     case 115200: bps = B115200; break;
     case 230400: bps = B230400; break;
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
     case 460800: bps = B460800; break;
     case 576000: bps = B576000; break;
     case 921600: bps = B921600; break;
