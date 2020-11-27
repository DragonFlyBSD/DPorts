--- newlib/libc/stdlib/strtoul.c.orig	2016-03-29 21:33:42 UTC
+++ newlib/libc/stdlib/strtoul.c
@@ -125,6 +125,14 @@ PORTABILITY
 #include <stdlib.h>
 #include <reent.h>
 
+#ifndef ULONG_MIN
+#ifdef _LP64
+#define ULONG_MAX 0xffffffffffffffffUL
+#else
+#define ULONG_MAX 0xffffffffUL
+#endif
+#endif
+
 /*
  * Convert a string to an unsigned long integer.
  *
