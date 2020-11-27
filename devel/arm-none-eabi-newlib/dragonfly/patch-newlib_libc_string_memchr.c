--- newlib/libc/string/memchr.c.orig	2016-03-29 21:33:42 UTC
+++ newlib/libc/string/memchr.c
@@ -40,6 +40,14 @@ QUICKREF
 #include <string.h>
 #include <limits.h>
 
+#ifndef LONG_MAX
+#ifdef _LP64
+#define LONG_MAX 0x7fffffffffffffffL
+#else
+#define LONG_MAX 0x7fffffffUL
+#endif
+#endif
+
 /* Nonzero if either X or Y is not aligned on a "long" boundary.  */
 #define UNALIGNED(X) ((long)X & (sizeof (long) - 1))
 
