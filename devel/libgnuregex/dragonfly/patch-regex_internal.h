--- regex_internal.h.orig
+++ regex_internal.h
@@ -28,6 +28,23 @@
 #include <langinfo.h>
 #include <locale.h>
 #include <wchar.h>
 #include <wctype.h>
-#include <stdckdint.h>
+#ifdef __DragonFly__
+/* DragonFly: no C23 <stdckdint.h>; ckd_* mapped to builtins below. */
+#elif defined(__has_include)
+# if __has_include(<stdckdint.h>)
+#  include <stdckdint.h>
+# endif
+#else
+# include <stdckdint.h>
+#endif
+#ifndef ckd_add
+# define ckd_add(r, a, b) __builtin_add_overflow ((a), (b), (r))
+#endif
+#ifndef ckd_sub
+# define ckd_sub(r, a, b) __builtin_sub_overflow ((a), (b), (r))
+#endif
+#ifndef ckd_mul
+# define ckd_mul(r, a, b) __builtin_mul_overflow ((a), (b), (r))
+#endif
 #include <stdint.h>
