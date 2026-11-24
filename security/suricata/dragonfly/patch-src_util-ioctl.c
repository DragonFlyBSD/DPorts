--- src/util-ioctl.c.orig
+++ src/util-ioctl.c
@@ -29,6 +29,10 @@
 #include "decode.h"
 #include "decode-sll.h"
 
+#if defined(__DragonFly__) && !defined(IFCAP_LRO)
+#define IFCAP_LRO 0
+#endif
+
 #ifdef HAVE_SYS_IOCTL_H
 #include <sys/ioctl.h>
 #endif
@@ -166,7 +170,7 @@
     }
 
     close(fd);
-#ifdef OS_FREEBSD
+#if defined OS_FREEBSD || defined __DragonFly__
     int flags = (ifr.ifr_flags & 0xffff) | (ifr.ifr_flagshigh << 16);
     return flags;
 #else
@@ -193,7 +197,7 @@
 
     memset(&ifr, 0, sizeof(ifr));
     strlcpy(ifr.ifr_name, ifname, sizeof(ifr.ifr_name));
-#ifdef OS_FREEBSD
+#if defined OS_FREEBSD || defined __DragonFly__
     ifr.ifr_flags = flags & 0xffff;
     ifr.ifr_flagshigh = flags >> 16;
 #else
