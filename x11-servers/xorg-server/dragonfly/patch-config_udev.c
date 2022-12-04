--- config/udev.c.orig	2022-11-29 08:50:23.563278000 +0100
+++ config/udev.c	2022-11-29 08:52:42.005561000 +0100
@@ -68,6 +68,44 @@
 
 static char itoa_buf[16];
 
+// Taken from FreeBSD's lib/libc/gen/feature_present.c
+
+#include <sys/cdefs.h>
+
+#include <sys/types.h>
+#include <sys/sysctl.h>
+#include <stdio.h>
+#include <stdlib.h>
+#include <unistd.h>
+
+int      feature_present(const char *);
+/*
+ * Returns true if the named feature is present in the currently
+ * running kernel.  A feature's presence is indicated by an integer
+ * sysctl node called kern.feature.<feature> that is non-zero.
+ */
+int
+feature_present(const char *feature)
+{
+	char *mib;
+	size_t len;
+	int i;
+
+	if (asprintf(&mib, "kern.features.%s", feature) < 0)
+		return (0);
+	len = sizeof(i);
+	if (sysctlbyname(mib, &i, &len, NULL, 0) < 0) {
+		free(mib);
+		return (0);
+	}
+	free(mib);
+	if (len != sizeof(i))
+		return (0);
+	return (i != 0);
+}
+
+// end of FreeBSD's lib/libc/gen/feature_present.c
+
 static const char *itoa(int i)
 {
     snprintf(itoa_buf, sizeof(itoa_buf), "%d", i);
