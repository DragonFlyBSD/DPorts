--- cc/raster/texture_compressor.h.orig	2015-07-28 20:13:28 UTC
+++ cc/raster/texture_compressor.h
@@ -6,6 +6,10 @@
 #define CC_RASTER_TEXTURE_COMPRESSOR_H_
 
 #include <stdint.h>
+/* Hack for DFLY 4.2 and earlier */
+#ifndef INT32_MAX
+#define INT32_MAX	0x7fffffff
+#endif
 
 #include "base/macros.h"
 #include "base/memory/scoped_ptr.h"
