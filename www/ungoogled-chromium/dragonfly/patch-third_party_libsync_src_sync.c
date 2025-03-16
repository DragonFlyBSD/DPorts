diff --git third_party/libsync/src/sync.c third_party/libsync/src/sync.c
index cd943d0d66e4..aa0887c9405e 100644
--- third_party/libsync/src/sync.c
+++ third_party/libsync/src/sync.c
@@ -29,7 +29,7 @@
 
 #include <sync/sync.h>
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 typedef __uint8_t __u8;
 typedef __uint32_t __u32;
 typedef __int32_t __s32;
