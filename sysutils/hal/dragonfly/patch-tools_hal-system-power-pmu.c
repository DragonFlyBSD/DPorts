--- tools/hal-system-power-pmu.c.orig	2009-05-12 14:25:58.000000000 +0200
+++ tools/hal-system-power-pmu.c	2012-12-21 19:19:43.456362000 +0100
@@ -55,6 +55,8 @@
 {
 #if defined (__FreeBSD__) || defined(__FreeBSD_kernel__)
 	return FALSE;			/* FIXME implement */
+#elif defined(__DragonFly__)
+	return FALSE;			/* FIXME implement */
 #elif sun
 	return FALSE;			/* FIXME implement */
 #elif __GNU__
@@ -92,6 +94,8 @@
 {
 #if defined (__FreeBSD__) || defined(__FreeBSD_kernel__)
 	return FALSE;			/* FIXME implement */
+#elif defined(__DragonFly__)
+	return FALSE;			/* FIXME implement */
 #elif sun
 	return FALSE;			/* FIXME implement */
 #elif __GNU__
@@ -129,6 +133,8 @@
 {
 #if defined (__FreeBSD__) || defined(__FreeBSD_kernel__)
 	return FALSE;			/* FIXME implement */
+#elif defined(__DragonFly__)
+	return FALSE;			/* FIXME implement */
 #elif sun
 	return FALSE;			/* FIXME implement */
 #elif __GNU__
