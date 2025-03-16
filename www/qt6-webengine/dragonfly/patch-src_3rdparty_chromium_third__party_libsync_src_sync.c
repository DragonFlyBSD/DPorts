--- src/3rdparty/chromium/third_party/libsync/src/sync.c.orig	Sat Mar  1 12:24:25 2025
+++ src/3rdparty/chromium/third_party/libsync/src/sync.c	Sat Mar
@@ -29,7 +29,7 @@
 
 #include <sync/sync.h>
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 typedef __uint8_t __u8;
 typedef __uint32_t __u32;
 typedef __int32_t __s32;
