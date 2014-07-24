--- library/net.c.orig	2013-10-07 10:06:29.000000000 +0000
+++ library/net.c
@@ -60,7 +60,7 @@ static int wsa_init_done = 0;
 #include <errno.h>
 
 #if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) ||  \
-    defined(__DragonflyBSD__)
+    defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__APPLE__)
 #include <machine/endian.h>
