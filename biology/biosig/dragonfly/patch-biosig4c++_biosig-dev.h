--- biosig4c++/biosig-dev.h.orig	2026-10-23 00:00:00 UTC
+++ biosig4c++/biosig-dev.h
@@ -552,7 +552,7 @@
 #  include <endian.h>
 #  include <byteswap.h>
 
-#elif defined(__FreeBSD__) 
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <machine/endian.h>
 #  define __BIG_ENDIAN _BIG_ENDIAN
 #  define __LITTLE_ENDIAN _LITTLE_ENDIAN
