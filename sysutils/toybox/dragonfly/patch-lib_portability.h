--- lib/portability.h.orig	2019-10-18 17:29:51 UTC
+++ lib/portability.h
@@ -126,7 +126,7 @@ char *strcasestr(const char *haystack, c
 #define bswap_32(x) OSSwapInt32(x)
 #define bswap_64(x) OSSwapInt64(x)
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 
@@ -177,7 +177,7 @@ char *strcasestr(const char *haystack, c
 
 #ifdef __APPLE__
 #include <util.h>
-#elif !defined(__FreeBSD__)
+#elif !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <pty.h>
 #else
 #include <termios.h>
