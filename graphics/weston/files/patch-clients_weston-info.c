--- clients/weston-info.c.orig	2015-10-03 00:04:25 +0200
+++ clients/weston-info.c
@@ -119,7 +119,7 @@
 fail_on_null(void *p)
 {
 	if (p == NULL) {
-		fprintf(stderr, "%s: out of memory\n", program_invocation_short_name);
+		fprintf(stderr, "%s: out of memory\n", getprogname());
 		exit(EXIT_FAILURE);
 	}
 
@@ -576,13 +576,22 @@
 	static const char *names[] = {
 		[CLOCK_REALTIME] =		"CLOCK_REALTIME",
 		[CLOCK_MONOTONIC] =		"CLOCK_MONOTONIC",
+#if defined(__FreeBSD__)
+		[CLOCK_REALTIME_FAST] =	"CLOCK_REALTIME_COARSE",
+		[CLOCK_MONOTONIC_FAST] =	"CLOCK_MONOTONIC_COARSE",
+#else
 		[CLOCK_MONOTONIC_RAW] =		"CLOCK_MONOTONIC_RAW",
 		[CLOCK_REALTIME_COARSE] =	"CLOCK_REALTIME_COARSE",
 		[CLOCK_MONOTONIC_COARSE] =	"CLOCK_MONOTONIC_COARSE",
 		[CLOCK_BOOTTIME] =		"CLOCK_BOOTTIME",
+#endif
 	};
 
+#if defined(__FreeBSD__)
+	if ((unsigned)clk_id >= ARRAY_LENGTH(names))
+#else
 	if (clk_id < 0 || (unsigned)clk_id >= ARRAY_LENGTH(names))
+#endif
 		return "unknown";
 
 	return names[clk_id];
@@ -595,7 +604,11 @@
 
 	print_global_info(info);
 
+#if defined(__FreeBSD__)
+	printf("\tpresentation clock id: %ld (%s)\n",
+#else
 	printf("\tpresentation clock id: %d (%s)\n",
+#endif
 		prinfo->clk_id, clock_name(prinfo->clk_id));
 }
 
@@ -709,7 +722,8 @@
 
 	info.display = wl_display_connect(NULL);
 	if (!info.display) {
-		fprintf(stderr, "failed to create display: %m\n");
+		fprintf(stderr, "failed to create display: %s\n",
+		    strerror(errno));
 		return -1;
 	}
 
