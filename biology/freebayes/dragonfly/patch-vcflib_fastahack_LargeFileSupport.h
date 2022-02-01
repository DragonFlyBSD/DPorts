--- vcflib/fastahack/LargeFileSupport.h.orig	2019-09-04 06:16:27 UTC
+++ vcflib/fastahack/LargeFileSupport.h
@@ -5,7 +5,7 @@
 #define ftell64(a)     _ftelli64(a)
 #define fseek64(a,b,c) _fseeki64(a,b,c)
 typedef __int64 off_type;
-#elif defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define ftell64(a)     ftello(a)
 #define fseek64(a,b,c) fseeko(a,b,c)
 typedef off_t off_type;
