--- lib/portability.h.orig	2021-09-21 21:49:38 UTC
+++ lib/portability.h
@@ -133,7 +133,7 @@ void *memmem(const void *haystack, size_
 #define bswap_32(x) OSSwapInt32(x)
 #define bswap_64(x) OSSwapInt64(x)
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 
 #include <sys/endian.h>
 
@@ -184,7 +184,7 @@ void *memmem(const void *haystack, size_
 
 #ifdef __APPLE__
 #include <util.h>
-#elif !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#elif !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 #include <pty.h>
 #else
 #include <termios.h>
@@ -217,7 +217,7 @@ int posix_fallocate(int, off_t, off_t);
 #include <xlocale.h>
 #endif
 
-#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 static inline long statfs_bsize(struct statfs *sf) { return sf->f_iosize; }
 static inline long statfs_frsize(struct statfs *sf) { return sf->f_bsize; }
 #else
