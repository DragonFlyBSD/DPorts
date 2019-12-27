--- src/main.h.orig	2019-07-04 16:15:05 UTC
+++ src/main.h
@@ -31,7 +31,7 @@
 #include <linux/input.h>
 #include <linux/uinput.h>
 #pragma clang diagnostic pop
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
