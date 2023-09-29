diff --git third_party/libsync/src/sync.c third_party/libsync/src/sync.c
index 30152e4a5a5..b9c679c6536 100644
--- third_party/libsync/src/sync.c
+++ third_party/libsync/src/sync.c
@@ -17,7 +17,7 @@
  */
 
 #include <fcntl.h>
-#if !defined(__OpenBSD__)
+#if !defined(__OpenBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 #include <stdint.h>
@@ -31,7 +31,7 @@
 
 #include <sync/sync.h>
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 typedef __uint8_t __u8;
 typedef __uint32_t __u32;
 typedef __int32_t __s32;
