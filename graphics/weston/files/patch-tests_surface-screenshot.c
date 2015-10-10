--- tests/surface-screenshot.c.orig	2015-10-02 21:56:38 +0200
+++ tests/surface-screenshot.c
@@ -188,7 +188,11 @@
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
