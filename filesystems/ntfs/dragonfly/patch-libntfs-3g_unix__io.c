--- libntfs-3g/unix_io.c.orig	2026-10-23 00:00:00 UTC
+++ libntfs-3g/unix_io.c
@@ -708,7 +708,7 @@
 #if USE_ALIGNED_IO
 	return aligned_write(dev, buf, count);
 #elif USE_UBLIO
-	if (DEV_HANDLE(dev)->ublio_fh)
+	if (DEV_HANDLE(dev)->ublio_fh) {
 		off_t offset;
 		ssize_t res;
 
