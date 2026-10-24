--- types/wlr_linux_dmabuf_v1.c.orig
+++ types/wlr_linux_dmabuf_v1.c
@@ -1,4 +1,10 @@
 #include <assert.h>
+#ifdef __DragonFly__
+/* assert.h is gated on __ISO_C_VISIBLE/STDC_VERSION visibility under
+ * -D_POSIX_C_SOURCE=200809L; _Static_assert is a C11 keyword alias that
+ * needs no header. */
+#define static_assert _Static_assert
+#endif
 #include <drm_fourcc.h>
 #include <fcntl.h>
 #include <stdlib.h>
