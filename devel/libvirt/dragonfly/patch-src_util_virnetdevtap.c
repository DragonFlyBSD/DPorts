--- src/util/virnetdevtap.c.orig	2015-03-25 07:36:59 UTC
+++ src/util/virnetdevtap.c
@@ -42,7 +42,11 @@
 #ifdef __linux__
 # include <linux/if_tun.h>    /* IFF_TUN, IFF_NO_PI */
 #elif defined(__FreeBSD__)
+#  if defined __DragonFly__
+# include <net/tap/if_tap.h>
+#  else
 # include <net/if_tap.h>
+#  endif
 #endif
 
 #define VIR_FROM_THIS VIR_FROM_NONE
