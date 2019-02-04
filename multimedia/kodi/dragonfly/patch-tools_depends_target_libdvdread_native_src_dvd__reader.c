--- tools/depends/target/libdvdread/native/src/dvd_reader.c.orig	2018-08-04 13:52:44.257120000 +0200
+++ tools/depends/target/libdvdread/native/src/dvd_reader.c	2018-08-04 13:53:05.817584000 +0200
@@ -56,7 +56,7 @@ static inline int _private_gettimeofday(
 # define lseek64 _lseeki64
 #endif
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__bsdi__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__bsdi__) || defined(__APPLE__)
 # define SYS_BSD 1
 #endif
 
