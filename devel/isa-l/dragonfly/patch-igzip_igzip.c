--- igzip/igzip.c.orig	2017-06-26 13:34:35.000000000 +0300
+++ igzip/igzip.c
@@ -52,7 +52,7 @@
 #include "igzip_level_buf_structs.h"
 #include "igzip_checksums.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/endian.h>
 # define to_be32(x) bswap32(x)
