--- include/sound/type_compat.h.intermediate	2013-05-31 08:45:36.000000000 +0000
+++ include/sound/type_compat.h
@@ -10,7 +10,7 @@ typedef int8_t __s8;
 typedef int16_t __s16;
 typedef int32_t __s32;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define bswap_16(x)	bswap16(x)
 #define bswap_32(x)	bswap32(x)
