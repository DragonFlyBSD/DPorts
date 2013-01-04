--- jdk/src/solaris/native/java/net/NetworkInterface.c.orig	2012-08-10 19:31:31.000000000 +0200
+++ jdk/src/solaris/native/java/net/NetworkInterface.c	2012-12-28 10:09:57.131852000 +0100
@@ -60,14 +60,18 @@
 #include <sys/param.h>
 #include <sys/ioctl.h>
 #include <sys/sockio.h>
-#if defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <net/ethernet.h>
 #include <net/if_var.h>
+#elif defined(__OpenBSD__)
+#include <netinet/if_ether.h>
+#elif defined(__NetBSD__)
+#include <net/if_ether.h>
+#endif
 #include <net/if_dl.h>
 #include <netinet/in_var.h>
 #include <ifaddrs.h>
 #endif
-#endif
 
 #include "jvm.h"
 #include "jni_util.h"
@@ -1289,7 +1293,11 @@
       return -1;
   }
 
-  return if2.ifr_flags;
+#ifdef __FreeBSD__
+  return ((if2.ifr_flags & 0xffff) | (if2.ifr_flagshigh << 16));
+#else
+  return (((int) if2.ifr_flags) & 0xffff);
+#endif
 }
 
 #endif
@@ -1979,7 +1987,11 @@
       return -1;
   }
 
+#ifdef __FreeBSD__
+  return ((if2.ifr_flags & 0xffff) | (if2.ifr_flagshigh << 16));
+#else
   return (((int) if2.ifr_flags) & 0xffff);
+#endif
 }
 
 #endif
