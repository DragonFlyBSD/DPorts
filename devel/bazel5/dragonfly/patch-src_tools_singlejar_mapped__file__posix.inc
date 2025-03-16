--- src/tools/singlejar/mapped_file_posix.inc.orig	Tue Jan  1 00:00:00 1980
+++ src/tools/singlejar/mapped_file_posix.inc	Tue Mar
@@ -26,7 +26,7 @@
 
 // The implementation is specific to 64-bit Linux / OS X / BSD.
 #if !((defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
-       defined(__OpenBSD__)) &&                                            \
+       defined(__OpenBSD__) || defined(__DragonFly__)) &&                  \
       __SIZEOF_POINTER__ == 8)
 #error This code for 64 bit Unix.
 #endif
