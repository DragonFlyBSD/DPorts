--- newlib/libc/stdlib/wcstoull_r.c.intermediate	2020-11-27 14:36:14.000000000 +0000
+++ newlib/libc/stdlib/wcstoull_r.c
@@ -51,6 +51,14 @@
 #include <errno.h>
 #include <reent.h>
 
+#ifndef ULONG_MAX
+#ifdef _LP64
+#define ULlONG_MAX 0xffffffffffffffffULL
+#else
+#define ULLONG_MAX 0xffffffffULL
+#endif
+#endif
+
 /* Make up for older non-compliant limits.h.  (This is a C99/POSIX function,
  * and both require ULLONG_MAX in limits.h.)  */
 #if !defined(ULLONG_MAX)
