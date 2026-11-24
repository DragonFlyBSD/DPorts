--- lib/core/porch_signals.c.orig
+++ lib/core/porch_signals.c
@@ -37,7 +37,7 @@
 load_signames(void)
 {
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || \
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__) || \
     defined(__APPLE__)
 	for (size_t i = 0; i < NSIG; i++) {
 #ifdef __APPLE__
