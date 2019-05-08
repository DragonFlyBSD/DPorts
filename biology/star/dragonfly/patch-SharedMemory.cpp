--- SharedMemory.cpp.intermediate	2019-05-07 13:13:17 UTC
+++ SharedMemory.cpp
@@ -11,7 +11,7 @@
 #include <semaphore.h>
 #include <errno.h>
 
-#if defined(COMPILE_FOR_MAC) || defined(__FreeBSD__)
+#if defined(COMPILE_FOR_MAC) || defined(__FreeBSD__) || defined(__DragonFly__)
   //some Mac's idiosyncrasies: standard SHM libraries are very old and missing some definitions
   #define SHM_NORESERVE 0
 #endif
