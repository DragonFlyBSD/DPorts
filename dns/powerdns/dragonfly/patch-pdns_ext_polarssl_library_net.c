--- pdns/ext/polarssl-1.3.2/library/net.c.orig	2013-12-17 17:42:51 UTC
+++ pdns/ext/polarssl-1.3.2/library/net.c
@@ -63,7 +63,7 @@ static int wsa_init_done = 0;
 #include <errno.h>
 
 #if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) ||  \
-    defined(__DragonflyBSD__)
+    defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__APPLE__) || defined(HAVE_MACHINE_ENDIAN_H) ||   \
       defined(EFIX64) || defined(EFI32)
