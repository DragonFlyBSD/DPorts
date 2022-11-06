--- common/evdev.c.orig	2022-05-23 20:03:38 UTC
+++ common/evdev.c
@@ -9,13 +9,15 @@
 #include <sys/sysmacros.h>
 #elif defined(__FreeBSD__)
 #include <dev/evdev/input.h>
+#elif defined(__DragonFly__)
+#include <dev/misc/evdev/input.h>
 #endif
 
 #include "evdev.h"
 
 #define STRLEN(s) ((sizeof(s) / sizeof(s[0])) - 1)
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 int path_is_evdev(const char *path) {
 	static const char prefix[] = "/dev/input/event";
 	static const size_t prefixlen = STRLEN(prefix);
