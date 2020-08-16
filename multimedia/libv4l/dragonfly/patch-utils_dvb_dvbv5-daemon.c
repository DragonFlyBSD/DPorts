--- utils/dvb/dvbv5-daemon.c.intermediate	2020-08-16 06:52:14.000000000 +0000
+++ utils/dvb/dvbv5-daemon.c
@@ -18,7 +18,7 @@
  *
  */
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 600
 #else
 #define	tdestroy(...) do {} while (0)
