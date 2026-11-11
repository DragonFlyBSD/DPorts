--- radeontool.c.orig
+++ radeontool.c
@@ -24,7 +24,7 @@
 #include <getopt.h>
 #ifdef __LINUX__
 #include <asm/page.h>
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <machine/param.h>
 #include <sys/pciio.h>
 #endif
@@ -327,7 +327,7 @@
 }
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define MAX_RADEON_CARDS 10
 static void map_radeon_cntl_mem(void)
 {
