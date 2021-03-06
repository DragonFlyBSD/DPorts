--- newlib/libc/stdlib/wcstol.c.orig	2016-03-29 21:33:42 UTC
+++ newlib/libc/stdlib/wcstol.c
@@ -125,6 +125,16 @@ No supporting OS subroutines are require
 #include <wchar.h>
 #include <reent.h>
 
+#ifndef LONG_MIN
+#ifdef _LP64
+#define LONG_MAX 0x7fffffffffffffff
+#define LONG_MIN (-0x7fffffffffffffffL - 1)
+#else
+#define LONG_MAX 0x7fffffffUL
+#define LONG_MIN (-0x7fffffffL - 1)
+#endif
+#endif
+
 /*
  * Convert a wide string to a long integer.
  *
