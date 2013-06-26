--- pkg/annotate.c.orig	2013-06-25 09:55:11.000000000 +0000
+++ pkg/annotate.c
@@ -173,8 +173,7 @@ read_input(void)
 		}
 		sbuf_putc(input, ch);
 	}
-	if (sbuf_finish(input) != 0)
-		err(EX_DATAERR, "Could not read value data");
+	sbuf_finish(input);
 
 	return (input);
 }
