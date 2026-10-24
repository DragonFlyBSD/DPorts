--- config/udev.c.orig	2026-09-16 04:29:08 UTC
+++ config/udev.c
@@ -45,6 +45,38 @@
 #include <sys/sysmacros.h>
 #endif
 
+#if defined(__DragonFly__)
+/* DragonFly has no feature_present(3) libc function; provide a compatible
+ * fallback taken from FreeBSD's lib/libc/gen/feature_present.c. It queries
+ * kern.features.<feature> via sysctlbyname() and returns non-zero when the
+ * feature is present. Missing node (e.g. evdev_support on a kernel without
+ * evdev) returns 0, which is the correct fallback for the checks below. */
+#include <sys/types.h>
+#include <sys/sysctl.h>
+#include <stdio.h>
+#include <stdlib.h>
+
+static int
+feature_present(const char *feature)
+{
+    char *mib;
+    size_t len;
+    int i;
+
+    if (asprintf(&mib, "kern.features.%s", feature) < 0)
+        return (0);
+    len = sizeof(i);
+    if (sysctlbyname(mib, &i, &len, NULL, 0) < 0) {
+        free(mib);
+        return (0);
+    }
+    free(mib);
+    if (len != sizeof(i))
+        return (0);
+    return (i != 0);
+}
+#endif
+
 #define UDEV_XKB_PROP_KEY "xkb"
 
 #define LOG_PROPERTY(path, prop, val)                                   \
