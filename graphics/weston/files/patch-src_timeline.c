--- src/timeline.c.orig	2015-10-02 22:14:42 +0200
+++ src/timeline.c
@@ -59,7 +59,11 @@
 		const char *msg;
 
 		switch (errno) {
+#if defined(__FreeBSD__)
+		case ETIMEDOUT:
+#else
 		case ETIME:
+#endif
 			msg = "failure in datetime formatting";
 			break;
 		default:
