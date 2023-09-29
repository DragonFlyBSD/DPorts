diff --git native_client/src/third_party/dlmalloc/malloc.c native_client/src/third_party/dlmalloc/malloc.c
index 4a849843ea7..9d00c48392b 100644
--- native_client/src/third_party/dlmalloc/malloc.c
+++ native_client/src/third_party/dlmalloc/malloc.c
@@ -1483,7 +1483,8 @@ DLMALLOC_EXPORT int mspace_mallopt(int, int);
 #ifndef LACKS_UNISTD_H
 #include <unistd.h>     /* for sbrk, sysconf */
 #else /* LACKS_UNISTD_H */
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && \
+    !defined(__DragonFly__)
 extern void*     sbrk(ptrdiff_t);
 #endif /* FreeBSD etc */
 #endif /* LACKS_UNISTD_H */
