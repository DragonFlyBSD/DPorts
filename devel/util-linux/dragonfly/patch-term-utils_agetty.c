--- term-utils/agetty.c.orig	2020-07-23 09:26:04 UTC
+++ term-utils/agetty.c
@@ -97,7 +97,7 @@
 #  endif
 #endif
 
-#ifdef __FreeBSD_kernel__
+#if defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #define USE_SYSLOG
 #endif
 
@@ -143,6 +143,15 @@
 #define LOGIN		"login: "
 #define LOGIN_ARGV_MAX	16		/* Numbers of args for login */
 
+#include <netinet/in.h>
+#define vhangup() 0
+#ifndef _PATH_UTMP
+#define _PATH_UTMP _PATH_UTMPX
+#endif
+#ifndef _PATH_WTMP
+#define _PATH_WTMP _PATH_WTMPX
+#endif
+
 /*
  * agetty --reload
  */
