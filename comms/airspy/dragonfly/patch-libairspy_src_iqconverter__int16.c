--- libairspy/src/iqconverter_int16.c.orig
+++ libairspy/src/iqconverter_int16.c
@@ -34,7 +34,7 @@
   #define _aligned_malloc(size, alignment) malloc(size)
   #define _aligned_free(mem) free(mem)
   #define _inline inline
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   #define _inline inline
   #define _aligned_free(mem) free(mem)
 void * _aligned_malloc(size_t size, size_t alignment);
