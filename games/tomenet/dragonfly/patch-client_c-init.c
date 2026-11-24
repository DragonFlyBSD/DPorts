--- client/c-init.c.orig
+++ client/c-init.c
@@ -3778,7 +3778,7 @@
 
 #if defined(USE_X11) || defined(USE_GCU)
 // #ifndef OSX
- #if !defined(OSX) && !defined(__FreeBSD__)
+ #if !defined(OSX) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 		#include <sys/ioctl.h>
 		#include <net/if.h>
 		struct ifreq ifr;
