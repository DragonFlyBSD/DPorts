--- libs/libmythdvdnav/dvdread/dvd_reader.c.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythdvdnav/dvdread/dvd_reader.c
@@ -53,7 +53,7 @@ static inline int _private_gettimeofday(
 #define lseek64 _lseeki64
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__bsdi__) || defined(__APPLE__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__bsdi__) || defined(__APPLE__)
 #define SYS_BSD 1
 #endif
 
