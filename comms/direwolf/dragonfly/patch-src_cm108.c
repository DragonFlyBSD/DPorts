--- src/cm108.c.orig	2020-10-28 00:45:30 UTC
+++ src/cm108.c
@@ -99,7 +99,7 @@
 int main (void)
 {
 	text_color_init (0);    // Turn off text color.
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	dw_printf ("CM108 PTT support is not available for BSD.\n");
 #else
 	dw_printf ("CM108 PTT support was disabled in Makefile.linux.\n");
