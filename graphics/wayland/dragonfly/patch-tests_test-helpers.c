--- tests/test-helpers.c.orig
+++ tests/test-helpers.c
@@ -88,6 +88,32 @@
 	/* return the current number of entries */
 	return size / sizeof(struct kinfo_file);
 }
+#elif defined(__DragonFly__)
+#include <fcntl.h>
+
+/*
+ * On DragonFly, /dev/fd is a static directory (fdescfs is not mounted by
+ * default), so it does not reflect the process's currently open descriptors.
+ * Probe each descriptor up to the soft limit instead.
+ */
+int
+count_open_fds(void)
+{
+	struct rlimit rl;
+	int fd, max, count = 0;
+
+	if (getrlimit(RLIMIT_NOFILE, &rl) == 0 && rl.rlim_cur != RLIM_INFINITY)
+		max = (int) rl.rlim_cur;
+	else
+		max = (int) sysconf(_SC_OPEN_MAX);
+
+	for (fd = 0; fd < max; fd++) {
+		if (fcntl(fd, F_GETFD) != -1)
+			count++;
+	}
+
+	return count;
+}
 #else
 int
 count_open_fds(void)
