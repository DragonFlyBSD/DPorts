--- core/libs/rawengine/libraw/internal/dcraw_common.cpp.orig	2019-02-10 22:44:02 UTC
+++ core/libs/rawengine/libraw/internal/dcraw_common.cpp
@@ -46,7 +46,7 @@ int CLASS fcol(int row, int col)
   return FC(row, col);
 }
 
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static size_t local_strnlen(const char *s, size_t n)
 {
   const char *p = (const char *)memchr(s, 0, n);
@@ -130,7 +130,7 @@ static int stread(char *buf, size_t len,
 #define stmread(buf, maxlen, fp) stread(buf, MIN(maxlen, sizeof(buf)), fp)
 #endif
 
-#if !defined(__GLIBC__) && !defined(__FreeBSD__)
+#if !defined(__GLIBC__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 char *my_memmem(char *haystack, size_t haystacklen, char *needle, size_t needlelen)
 {
   char *c;
