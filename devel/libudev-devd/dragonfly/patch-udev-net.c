--- udev-net.c.orig	Fri Sep 20 07:46:46 2024
+++ udev-net.c	Wed Apr
@@ -40,6 +40,8 @@
 #define	AF_LINK	AF_PACKET
 #endif
 
+#define LLINDEX(s) ((s)->sdl_index)
+
 int
 udev_net_enumerate(struct udev_enumerate *ue)
 {
