--- src/scanner.c
+++ src/scanner.c
@@ -1560,7 +1560,7 @@ int main(int argc, char *argv[])
 		buf = XML_GetBuffer(ctx.parser, XML_BUFFER_SIZE);
 		len = fread(buf, 1, XML_BUFFER_SIZE, input);
 		if (len < 0) {
-			fprintf(stderr, "fread: %m\n");
+			fprintf(stderr, "fread: %s\n", strerror(errno));
 			exit(EXIT_FAILURE);
 		}
 		if (XML_ParseBuffer(ctx.parser, len, len == 0) == 0) {
