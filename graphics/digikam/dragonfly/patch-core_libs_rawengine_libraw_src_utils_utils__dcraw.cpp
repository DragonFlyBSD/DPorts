--- core/libs/rawengine/libraw/src/utils/utils_dcraw.cpp.orig	2020-07-16 06:07:21 UTC
+++ core/libs/rawengine/libraw/src/utils/utils_dcraw.cpp
@@ -47,7 +47,7 @@ int LibRaw::fcol(int row, int col)
 
 size_t LibRaw::strnlen(const char *s, size_t n)
 {
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
   const char *p = (const char *)memchr(s, 0, n);
   return (p ? p - s : n);
 #else
@@ -58,7 +58,7 @@ size_t LibRaw::strnlen(const char *s, si
 void *LibRaw::memmem(char *haystack, size_t haystacklen, char *needle,
                      size_t needlelen)
 {
-#if !defined(__GLIBC__) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__GLIBC__) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
   char *c;
   for (c = haystack; c <= haystack + haystacklen - needlelen; c++)
     if (!memcmp(c, needle, needlelen))
