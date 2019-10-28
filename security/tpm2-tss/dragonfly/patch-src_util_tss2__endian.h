--- src/util/tss2_endian.h.intermediate	2019-10-28 17:04:04.000000000 +0000
+++ src/util/tss2_endian.h
@@ -9,7 +9,7 @@
 #define TSS2_ENDIAN_H
 
 #if defined(__linux__) || defined(__unix__)
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
