--- lz4jsoncat.c.intermediate	2026-09-02 10:53:59 UTC
+++ lz4jsoncat.c
@@ -29,7 +29,7 @@
 #include <stdlib.h>
 #include <stdint.h>
 #ifndef __APPLE__
-#	if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFlyBSD__)
+#	if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFlyBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #endif
 #else
