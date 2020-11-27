--- newlib/libc/string/strlen.c.orig	2016-03-29 21:33:42 UTC
+++ newlib/libc/string/strlen.c
@@ -35,6 +35,14 @@ QUICKREF
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
 #define LBLOCKSIZE   (sizeof (long))
 #define UNALIGNED(X) ((long)X & (LBLOCKSIZE - 1))
 
