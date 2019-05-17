--- rpmio/rpmio.c.orig	2018-09-13 12:52:02 UTC
+++ rpmio/rpmio.c
@@ -726,7 +726,8 @@ static const FDIO_t bzdio = &bzdio_s ;
 #include <lzma.h>
 /* Multithreading support in stable API since xz 5.2.0 */
 #if LZMA_VERSION >= 50020002
-#define HAVE_LZMA_MT
+/* Oh really??? */
+/* #define HAVE_LZMA_MT */
 #endif
 
 #define kBufferSize (1 << 15)
