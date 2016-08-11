--- obspy/io/mseed/src/libmseed/lmplatform.h.orig	2016-03-01 12:03:06.000000000 +0200
+++ obspy/io/mseed/src/libmseed/lmplatform.h
@@ -66,7 +66,7 @@ extern "C" {
   #include <unistd.h>
   #include <inttypes.h>
 
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
   #define LMP_BSD 1
 
   #include <unistd.h>
