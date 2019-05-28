--- include/mpeg4ip_byteswap.h.intermediate	2019-05-28 14:32:50.000000000 +0000
+++ include/mpeg4ip_byteswap.h
@@ -60,23 +60,11 @@
  * functionality! 
  */
 
-#elif defined(__FreeBSD__) && __FreeBSD_version >= 470000
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define B2N_16(x) (be16toh(x))
 #define B2N_32(x) (be32toh(x))
-# if __FreeBSD_version >= 510000
 #define B2N_64(x) (be64toh(x))
-# else
-#define B2N_64(x) \
- x = ((((x) & 0xff00000000000000) >> 56) | \
-      (((x) & 0x00ff000000000000) >> 40) | \
-      (((x) & 0x0000ff0000000000) >> 24) | \
-      (((x) & 0x000000ff00000000) >>  8) | \
-      (((x) & 0x00000000ff000000) <<  8) | \
-      (((x) & 0x0000000000ff0000) << 24) | \
-      (((x) & 0x000000000000ff00) << 40) | \
-      (((x) & 0x00000000000000ff) << 56))
-# endif
 
 #elif defined(__FreeBSD__) || defined(__sun) || defined(__bsdi__) || defined(_WIN32)
 #define B2N_16(x) \
