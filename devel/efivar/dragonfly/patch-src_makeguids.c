--- src/makeguids.c.orig	2014-10-15 13:48:49 UTC
+++ src/makeguids.c
@@ -100,7 +100,7 @@ main(int argc, char *argv[])
 		err(1, "makeguids: could not read \"%s\"", argv[1]);
 
 	/* strictly speaking, this *has* to be too large. */
-	struct guidname *outbuf = calloc(inlen, sizeof (char));
+	struct guidname *outbuf = calloc(inlen/4, sizeof (struct guidname));
 	if (!outbuf)
 		err(1, "makeguids");
 
