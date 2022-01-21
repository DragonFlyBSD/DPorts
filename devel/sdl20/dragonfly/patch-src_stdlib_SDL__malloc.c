--- src/stdlib/SDL_malloc.c.orig	2021-07-27 14:52:29 UTC
+++ src/stdlib/SDL_malloc.c
@@ -1247,7 +1247,7 @@ extern "C"
 #ifndef LACKS_UNISTD_H
 #include <unistd.h>             /* for sbrk */
 #else /* LACKS_UNISTD_H */
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 extern void *sbrk(ptrdiff_t);
 #endif /* FreeBSD etc */
 #endif /* LACKS_UNISTD_H */
