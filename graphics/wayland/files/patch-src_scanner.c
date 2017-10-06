--- src/scanner.c.orig	2017-07-17 16:21:44.094074000 +0300
+++ src/scanner.c	2017-07-17 16:21:56.164157000 +0300
@@ -740,9 +740,7 @@
 		switch (arg->type) {
 		case NEW_ID:
 			ctx->message->new_id_count++;
-
-			/* Fall through to OBJECT case. */
-
+			/* fallthrough */
 		case OBJECT:
 			if (interface_name)
 				arg->interface_name = xstrdup(interface_name);
@@ -1914,7 +1912,7 @@
 		buf = XML_GetBuffer(ctx.parser, XML_BUFFER_SIZE);
 		len = fread(buf, 1, XML_BUFFER_SIZE, input);
 		if (len < 0) {
-			fprintf(stderr, "fread: %m\n");
+			fprintf(stderr, "fread: %s\n", strerror(errno));
 			fclose(input);
 			exit(EXIT_FAILURE);
 		}
