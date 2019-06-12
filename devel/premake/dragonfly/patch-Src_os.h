--- Src/os.h.intermediate	2019-06-06 15:06:33.000000000 +0000
+++ Src/os.h
@@ -19,7 +19,7 @@
  * but since it is the most common I use is as the default */
 #if defined(__linux__)
 #define PLATFORM_POSIX 1
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define PLATFORM_POSIX 1
 #elif defined(__APPLE__) && defined(__MACH__)
 #define PLATFORM_POSIX 1
