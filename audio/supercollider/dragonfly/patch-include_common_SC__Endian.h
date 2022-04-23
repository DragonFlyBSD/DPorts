--- include/common/SC_Endian.h.orig	2018-03-28 20:05:07 UTC
+++ include/common/SC_Endian.h
@@ -34,7 +34,7 @@
 
 # include <machine/endian.h>
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 
 # include <sys/types.h>
 # include <netinet/in.h>
