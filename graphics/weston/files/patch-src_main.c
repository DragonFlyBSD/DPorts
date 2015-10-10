--- src/main.c.orig	2015-10-02 22:25:08 +0200
+++ src/main.c
@@ -73,7 +73,7 @@
 	}
 
 	if (pid < 0 && errno != ECHILD)
-		weston_log("waitpid error %m\n");
+		weston_log("waitpid error %s\n", strerror(errno));
 
 	return 1;
 }
@@ -390,13 +390,22 @@
 	static const char *names[] = {
 		[CLOCK_REALTIME] =		"CLOCK_REALTIME",
 		[CLOCK_MONOTONIC] =		"CLOCK_MONOTONIC",
+#if defined(__FreeBSD__)
+		[CLOCK_REALTIME_FAST] =		"CLOCK_REALTIME_FAST",
+		[CLOCK_MONOTONIC_FAST] =	"CLOCK_MONOTONIC_FAST",
+#else
 		[CLOCK_MONOTONIC_RAW] =		"CLOCK_MONOTONIC_RAW",
 		[CLOCK_REALTIME_COARSE] =	"CLOCK_REALTIME_COARSE",
 		[CLOCK_MONOTONIC_COARSE] =	"CLOCK_MONOTONIC_COARSE",
 		[CLOCK_BOOTTIME] =		"CLOCK_BOOTTIME",
+#endif
 	};
 
+#if defined(__FreeBSD__)
+	if (clk_id >= ARRAY_LENGTH(names))
+#else
 	if (clk_id < 0 || (unsigned)clk_id >= ARRAY_LENGTH(names))
+#endif
 		return "unknown";
 
 	return names[clk_id];
@@ -424,7 +433,11 @@
 				    yes ? "yes" : "no");
 	}
 
+#if defined(__FreeBSD__)
+	weston_log_continue(STAMP_SPACE "presentation clock: %s, id %ld\n",
+#else
 	weston_log_continue(STAMP_SPACE "presentation clock: %s, id %d\n",
+#endif
 			    clock_name(compositor->presentation_clock),
 			    compositor->presentation_clock);
 }
@@ -444,13 +457,15 @@
 {
 	if (socket_name) {
 		if (wl_display_add_socket(display, socket_name)) {
-			weston_log("fatal: failed to add socket: %m\n");
+			weston_log("fatal: failed to add socket: %s\n",
+			    strerror(errno));
 			return -1;
 		}
 	} else {
 		socket_name = wl_display_add_socket_auto(display);
 		if (!socket_name) {
-			weston_log("fatal: failed to add socket: %m\n");
+			weston_log("fatal: failed to add socket: %s\n",
+			    strerror(errno));
 			return -1;
 		}
 	}
@@ -769,7 +784,8 @@
 	if (fd != -1) {
 		primary_client = wl_client_create(display, fd);
 		if (!primary_client) {
-			weston_log("fatal: failed to add client: %m\n");
+			weston_log("fatal: failed to add client: %s\n",
+			    strerror(errno));
 			goto out;
 		}
 		primary_client_destroyed.notify =
