--- utils.c.orig	2017-10-02 20:59:50.876783000 +0300
+++ utils.c	2017-10-02 21:00:20.917664000 +0300
@@ -275,7 +275,7 @@
 {
 	struct scan_ctx *ctx = args;
 
-	if (dev->dd_name[0] != '\0' && dev->dd_state >= DS_ATTACHED)
+	if (dev->dd_name[0] != '\0' && dev->dd_state >= DIS_ATTACHED)
 		if ((ctx->cb)(dev->dd_name, DT_CHR, ctx->args) < 0)
 			return (-1);
 
