--- include/bitops.h.orig	2023-10-07 03:54:17 UTC
+++ include/bitops.h
@@ -16,7 +16,8 @@
 
 #if defined(HAVE_ENDIAN_H)
 #  include <endian.h>
-#elif defined(HAVE_SYS_ENDIAN_H)	/* BSDs have them here */
+#endif
+#if defined(HAVE_SYS_ENDIAN_H)	/* BSDs have them here */
 #  include <sys/endian.h>
 #endif
 
