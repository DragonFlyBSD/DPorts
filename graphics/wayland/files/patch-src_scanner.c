--- src/scanner.c.orig	2018-07-20 17:34:56.204161000 +0300
+++ src/scanner.c	2018-07-20 17:36:14.094594000 +0300
@@ -1956,7 +1956,7 @@
 		buf = XML_GetBuffer(ctx.parser, XML_BUFFER_SIZE);
 		len = fread(buf, 1, XML_BUFFER_SIZE, input);
 		if (len < 0) {
-			fprintf(stderr, "fread: %m\n");
+			fprintf(stderr, "fread: %s\n", strerror(errno));
 			fclose(input);
 			exit(EXIT_FAILURE);
 		}
