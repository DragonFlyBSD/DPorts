--- clients/multi-resource.c.orig	2015-10-03 11:58:01 +0200
+++ clients/multi-resource.c
@@ -89,7 +89,7 @@
 
 	p = calloc(1, s);
 	if (p == NULL) {
-		fprintf(stderr, "%s: out of memory\n", program_invocation_short_name);
+		fprintf(stderr, "%s: out of memory\n", getprogname());
 		exit(EXIT_FAILURE);
 	}
 
@@ -108,8 +108,8 @@
 
 	fd = os_create_anonymous_file(size);
 	if (fd < 0) {
-		fprintf(stderr, "creating a buffer file for %d B failed: %m\n",
-			size);
+		fprintf(stderr, "creating a buffer file for %d B failed: %s\n",
+			size, strerror(errno));
 		return -1;
 	}
 
