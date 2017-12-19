--- src/libinput-util.h.orig	2017-01-13 00:45:17 UTC
+++ src/libinput-util.h
@@ -38,6 +38,10 @@
 #include <string.h>
 #include <time.h>
 #include <unistd.h>
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#include <stdlib.h>
+#include <xlocale.h>
+#endif

 #include "libinput.h"

@@ -119,6 +123,10 @@ bool list_empty(const struct list *list)

 #define LIBINPUT_EXPORT __attribute__ ((visibility("default")))

+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#define program_invocation_short_name getprogname()
+#endif
+
 static inline void *
 zalloc(size_t size)
 {
