--- newlib/libc/stdlib/strtoull_r.c.intermediate	2020-11-27 14:36:14.528613000 +0000
+++ newlib/libc/stdlib/strtoull_r.c
@@ -51,6 +51,14 @@
 #include <stdlib.h>
 #include <reent.h>
 
+#ifndef ULLONG_MIN
+#ifdef _LP64
+#define ULLONG_MAX 0xffffffffffffffffULL
+#else
+#define ULLONG_MAX 0xffffffffULL
+#endif
+#endif
+
 /*
  * Convert a string to an unsigned long long integer.
  *
