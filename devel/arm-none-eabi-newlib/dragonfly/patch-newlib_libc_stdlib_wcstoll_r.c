--- newlib/libc/stdlib/wcstoll_r.c.intermediate	2020-11-27 14:36:14.000000000 +0000
+++ newlib/libc/stdlib/wcstoll_r.c
@@ -50,6 +50,16 @@
 #include <wchar.h>
 #include <reent.h>
 
+#ifndef LLONG_MIN
+#ifdef _LP64
+#define LLONG_MAX 0x7fffffffffffffffL
+#define LLONG_MIN (-0x7fffffffffffffffLL - 1)
+#else
+#define LLONG_MAX 0x7fffffffLL
+#define LLONG_MIN (-0x7fffffffLL - 1)
+#endif
+#endif
+
 /*
  * Convert a wide string to a long long integer.
  *
