--- libs/libmythdvdnav/dvdread/bswap.h.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythdvdnav/dvdread/bswap.h
@@ -61,7 +61,7 @@
 #define B2N_32(x) x = swap32(x)
 #define B2N_64(x) x = swap64(x)
 
-#elif defined(__FreeBSD__) && __FreeBSD_version >= 470000
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define B2N_16(x) x = be16toh(x)
 #define B2N_32(x) x = be32toh(x)
@@ -69,11 +69,10 @@
 
 /* This is a slow but portable implementation, it has multiple evaluation
  * problems so beware.
- * Old FreeBSD's and Solaris don't have <byteswap.h> or any other such
- * functionality!
+ * Solaris don't have <byteswap.h> or any other such functionality!
  */
 
-#elif defined(__FreeBSD__) || defined(__sun) || defined(__bsdi__) || defined(WIN32) || defined(__CYGWIN__) || defined(__BEOS__) || defined(__OS2__)
+#elif defined(__sun) || defined(__bsdi__) || defined(WIN32) || defined(__CYGWIN__) || defined(__BEOS__) || defined(__OS2__)
 #define B2N_16(x)                             \
  x = ((((x) & 0xff00) >> 8) |                 \
       (((x) & 0x00ff) << 8))
