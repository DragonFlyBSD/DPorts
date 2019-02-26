--- src/LargeFileSupport.h~	2019-02-23 22:56:45.817393000 +0100
+++ src/LargeFileSupport.h	2019-02-23 22:57:53.568319000 +0100
@@ -8,7 +8,7 @@ typedef __int64 off_type;
 #define ftell64(a)     ftell(a)
 #define fseek64(a,b,c) fseek(a,b,c)
 typedef __int64_t off_type;
-#elif defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define ftell64(a)     ftello(a)
 #define fseek64(a,b,c) fseeko(a,b,c)
 typedef off_t off_type;
