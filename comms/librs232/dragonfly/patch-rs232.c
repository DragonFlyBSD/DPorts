--- rs232.c.intermediate	2019-12-27 10:57:00.000000000 +0000
+++ rs232.c
@@ -34,7 +34,7 @@
 #include "rs232.h"
 
 
-#if defined(__linux__) || defined(__FreeBSD__)   /* Linux & FreeBSD */
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)  /* Linux & FreeBSD */
 
 #define RS232_PORTNR  38
 
@@ -767,7 +767,7 @@ int RS232_GetPortnr(const char *devname)
 
   char str[32];
 
-#if defined(__linux__) || defined(__FreeBSD__)   /* Linux & FreeBSD */
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)   /* Linux & FreeBSD */
   strcpy(str, "/dev/");
 #else  /* windows */
   strcpy(str, "\\\\.\\");
