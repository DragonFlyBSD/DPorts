--- names.c.orig	2006-03-04 00:01:19 UTC
+++ names.c
@@ -572,7 +572,7 @@ unpack(struct name *np)
 	/*LINTED*/
 	top = (char **)salloc((t + extra) * sizeof *top);
 	ap = top;
-	*ap++ = "send-mail";
+	*ap++ = "sendmail";
 	*ap++ = "-i";
 	if (metoo)
 		*ap++ = "-m";
