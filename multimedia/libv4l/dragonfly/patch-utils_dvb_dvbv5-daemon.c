--- utils/dvb/dvbv5-daemon.c.intermediate	2026-09-05 23:44:18 UTC
+++ utils/dvb/dvbv5-daemon.c
@@ -18,9 +18,9 @@
  *
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/param.h>
-#  if __FreeBSD_version < 1500505 || (__FreeBSD_version >= 1600000 && __FreeBSD_version < 1600008)
+#  if defined(__DragonFly__) || __FreeBSD_version < 1500505 || (__FreeBSD_version >= 1600000 && __FreeBSD_version < 1600008)
 #    define tdestroy(...) do {} while (0)
 #  endif
 #else
