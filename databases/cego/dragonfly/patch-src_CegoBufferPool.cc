--- src/CegoBufferPool.cc.orig	2016-07-16 10:10:47.000000000 +0300
+++ src/CegoBufferPool.cc
@@ -32,6 +32,7 @@
 // POSIX INCLUDES
 #include <string.h>
 #include <stdlib.h>
+#include <cstdlib>
 
 #define BUFFERPOOLHEAD (((sizeof(BufferPoolHead)-1)/BUPMNG_ALIGNMENT)+1)*BUPMNG_ALIGNMENT
 #define BUFFERHEAD (((sizeof(BufferHead)-1)/BUPMNG_ALIGNMENT)+1)*BUPMNG_ALIGNMENT
