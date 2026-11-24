--- tcpshow.c.orig
+++ tcpshow.c
@@ -364,7 +364,7 @@
 #if !defined(NOETHERNAMES)
 // mr980118 ether_ntohost() and related functions aren't prototyped in the
 // standard include directory.
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 extern struct ether_addr *ether_aton(char *);
 extern int ether_ntohost(char *, struct ether_addr *);
 #endif
