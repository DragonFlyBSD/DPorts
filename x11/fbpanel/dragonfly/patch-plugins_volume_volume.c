--- plugins/volume/volume.c.intermediate	2022-02-09 12:55:47.000000000 +0000
+++ plugins/volume/volume.c
@@ -12,7 +12,7 @@
 #if defined __linux__
 #include <linux/soundcard.h>
 #else
-#if defined __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #include <sys/soundcard.h>
 #endif
 #endif
