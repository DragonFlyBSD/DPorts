--- clients/screenshot.c.orig	2015-10-03 11:47:04 +0200
+++ clients/screenshot.c
@@ -86,8 +86,7 @@
 
 	p = malloc(size);
 	if (p == NULL) {
-		fprintf(stderr, "%s: out of memory\n",
-			program_invocation_short_name);
+		fprintf(stderr, "%s: out of memory\n", getprogname());
 		exit(EXIT_FAILURE);
 	}
 
@@ -171,14 +170,14 @@
 
 	fd = os_create_anonymous_file(size);
 	if (fd < 0) {
-		fprintf(stderr, "creating a buffer file for %d B failed: %m\n",
-			size);
+		fprintf(stderr, "creating a buffer file for %d B failed: %s\n",
+			size, strerror(errno));
 		return NULL;
 	}
 
 	data = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
 	if (data == MAP_FAILED) {
-		fprintf(stderr, "mmap failed: %m\n");
+		fprintf(stderr, "mmap failed: %s\n", strerror(errno));
 		close(fd);
 		return NULL;
 	}
@@ -270,13 +269,14 @@
 	if (getenv("WAYLAND_SOCKET") == NULL) {
 		fprintf(stderr, "%s must be launched by weston.\n"
 			"Use the MOD+S shortcut to take a screenshot.\n",
-			program_invocation_short_name);
+			getprogname());
 		return -1;
 	}
 
 	display = wl_display_connect(NULL);
 	if (display == NULL) {
-		fprintf(stderr, "failed to create display: %m\n");
+		fprintf(stderr, "failed to create display: %s\n",
+		    strerror(errno));
 		return -1;
 	}
 
