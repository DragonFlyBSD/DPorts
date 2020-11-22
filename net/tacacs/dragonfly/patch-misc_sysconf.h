--- misc/sysconf.h.orig	2011-09-14 13:06:47 UTC
+++ misc/sysconf.h
@@ -124,18 +124,20 @@
 #  include <endian.h>
 #endif
 #if defined(__ANY_BSD__)
-#  include <machine/endian.h>
+#  include <sys/endian.h>
 #  ifndef __LITTLE_ENDIAN
 #    define __LITTLE_ENDIAN 1234
 #  endif
 #  ifndef __BIG_ENDIAN
 #    define __BIG_ENDIAN    4321
 #  endif
+#  ifndef __BYTE_ORDER
 #  if BYTE_ORDER == LITTLE_ENDIAN
 #    define __BYTE_ORDER __LITTLE_ENDIAN
 #  else
 #    define __BYTE_ORDER __BIG_ENDIAN
 #  endif
+#  endif
 #endif
 /*******************************************************************************
  * Prototype for crypt(3)
