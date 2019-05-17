--- src/s3ql/endian_indep.h.orig	2016-08-09 02:51:01 UTC
+++ src/s3ql/endian_indep.h
@@ -27,7 +27,7 @@ This program can be distributed under th
 #define be64toh(x) OSSwapBigToHostInt64(x)
 #define le64toh(x) OSSwapLittleToHostInt64(x)
 
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
 #include <sys/endian.h>
 
 #else
