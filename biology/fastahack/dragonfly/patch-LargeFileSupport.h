--- LargeFileSupport.h~	2016-07-02 21:43:48.000000000 +0200
+++ LargeFileSupport.h	2019-02-23 22:49:15.841232000 +0100
@@ -5,7 +5,7 @@
 #define ftell64(a)     _ftelli64(a)
 #define fseek64(a,b,c) _fseeki64(a,b,c)
 typedef __int64 off_type;
-#elif defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define ftell64(a)     ftello(a)
 #define fseek64(a,b,c) fseeko(a,b,c)
 typedef off_t off_type;
