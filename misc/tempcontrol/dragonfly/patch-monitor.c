--- monitor.c.orig	2005-09-21 03:36:14.000000000 +0300
+++ monitor.c
@@ -43,6 +43,11 @@
 #include <dev/ppbus/ppi.h>
 #include <dev/ppbus/ppbconf.h>
 #endif
+#ifdef __DragonFly__
+#include <libutil.h>					    /* for realhostname */
+#include <dev/misc/ppi/ppi.h>
+#include <bus/ppbus/ppbconf.h>
+#endif
 #include "main.h"
 #include <termios.h>
 #include "statemachine.h"
@@ -674,7 +679,7 @@ void gettemp ()
 /* Talk to the relay board */
 void setrelay (int bits)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   ioctl (relayfd, PPISDATA, &bits);                         /* just output the bits */
 #else
   /* This kludge to work around potential endianness problems */
