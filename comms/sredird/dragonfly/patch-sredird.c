--- sredird.c.orig
+++ sredird.c
@@ -110,7 +110,7 @@
 #include <fcntl.h>
 #include <syslog.h>
 #include <termios.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <termio.h>
 #else
 #include <netdb.h>
@@ -201,7 +201,7 @@
 /* Default modem state polling in milliseconds (100 msec should be enough) */
 #define ModemStatePolling 100
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 struct tms mytms;
 #define times(NULL) times(&mytms)
 #define SOL_TCP getprotobyname("TCP")->p_proto
@@ -726,7 +726,7 @@
 					return(115200UL);
 				case B230400:
 					return(230400UL);
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 				case B460800:
 					return(460800UL);
 #endif
@@ -1108,7 +1108,7 @@
 				case 230400UL:
 					Speed = B230400;
 				break;
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 				case 460800UL:
 					Speed = B460800;
 				break;
