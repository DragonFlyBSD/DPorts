--- src/amd/vulkan/radv_device.c.orig	2022-01-12 21:32:28 UTC
+++ src/amd/vulkan/radv_device.c
@@ -29,7 +29,7 @@
 #include <stdbool.h>
 #include <string.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #elif !defined(_WIN32)
 #include <sys/sysmacros.h>
