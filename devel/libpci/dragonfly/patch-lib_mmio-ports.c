--- lib/mmio-ports.c.orig	2023-04-18 19:17:00.259962000 +0200
+++ lib/mmio-ports.c	2023-04-18 19:17:33.340139000 +0200
@@ -30,6 +30,10 @@
 #define OFF_MAX (off_t)((1ULL << (sizeof(off_t) * CHAR_BIT - 1)) - 1)
 #endif
 
+#ifdef __DragonFly__
+#define O_DSYNC O_DIRECT
+#endif
+
 struct mmio_cache
 {
   off_t addr_page;
